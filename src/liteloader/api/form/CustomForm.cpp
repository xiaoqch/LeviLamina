#include "liteloader/api/form/CustomForm.h"
#include "liteloader/core/LiteLoader.h"

#include <utility>

namespace ll::form {

class Label : public CustomFormElement {

public:
    std::string mText{};

    explicit Label(std::string text) : CustomFormElement(""), mText(std::move(text)) {}
    ~Label() override = default;

    [[nodiscard]] Type getType() const override { return Type::Label; }

    fifo_json serialize() override {
        try {
            return {
                {"type", "label"},
                {"text", mText  }
            };
        } catch (...) {
            ll::logger.error("Failed to serialize Label");
            return {};
        }
    }
};

class Input : public CustomFormElement {

public:
    std::string mText{};
    std::string mPlaceholder{};
    std::string mDefault{};

    Input(std::string name, std::string text, std::string placeholder = "", std::string defaultVal = "")
    : CustomFormElement(std::move(name)), mText(std::move(text)), mPlaceholder(std::move(placeholder)),
      mDefault(std::move(defaultVal)) {}
    ~Input() override = default;

    [[nodiscard]] Type getType() const override { return Type::Input; }

    fifo_json serialize() override {
        try {
            fifo_json input = {
                {"type", "input"},
                {"text", mText  }
            };
            if (!mPlaceholder.empty()) {
                input["placeholder"] = mPlaceholder;
            }
            if (!mDefault.empty()) {
                input["default"] = mDefault;
            }
            return input;
        } catch (...) {
            ll::logger.error("Failed to serialize Input");
            return {};
        }
    }
};

class Toggle : public CustomFormElement {

public:
    std::string mText{};
    bool        mDefault = false;

    Toggle(std::string name, std::string text, bool defaultVal = false)
    : CustomFormElement(std::move(name)), mText(std::move(text)), mDefault(defaultVal) {}
    ~Toggle() override = default;

    [[nodiscard]] Type getType() const override { return Type::Toggle; }

    fifo_json serialize() override {
        try {
            return {
                {"type",    "toggle"},
                {"text",    mText   },
                {"default", mDefault}
            };
        } catch (...) {
            ll::logger.error("Failed to serialize Toggle");
            return {};
        }
    }
};

class Dropdown : public CustomFormElement {

public:
    std::string              mText{};
    std::vector<std::string> mOptions{};
    size_t                   mDefault{};

    Dropdown(std::string name, std::string text, std::vector<std::string> options, size_t defaultVal = 0)
    : CustomFormElement(std::move(name)), mText(std::move(text)), mOptions(std::move(options)), mDefault(defaultVal) {}
    ~Dropdown() override = default;

    [[nodiscard]] Type getType() const override { return Type::Dropdown; }

    fifo_json serialize() override {
        try {
            return {
                {"type",    "dropdown"},
                {"text",    mText     },
                {"options", mOptions  },
                {"default", mDefault  }
            };
        } catch (...) {
            ll::logger.error("Failed to serialize Dropdown");
            return {};
        }
    }
};

class Slider : public CustomFormElement {

public:
    std::string mText{};
    double      mMin     = 0.0;
    double      mMax     = 0.0;
    double      mStep    = 1.0;
    double      mDefault = 0.0;

    void validate() {
        if (mMin > mMax) {
            std::swap(mMin, mMax);
        }
        if (mStep <= 0.0) {
            mStep = 1.0;
        }
        if (mDefault < mMin) {
            mDefault = mMin;
        } else if (mDefault > mMax) {
            mDefault = mMax;
        }
    }

    Slider(std::string name, std::string text, double min, double max, double step, double defaultVal)
    : CustomFormElement(std::move(name)), mText(std::move(text)), mMin(min), mMax(max), mStep(step), mDefault(defaultVal) {
        validate();
    }
    ~Slider() override = default;

    [[nodiscard]] Type getType() const override { return Type::Slider; }

    fifo_json serialize() override {
        try {
            validate();
            return {
                {"type",    "slider"},
                {"text",    mText   },
                {"min",     mMin    },
                {"max",     mMax    },
                {"step",    mStep   },
                {"default", mDefault}
            };
        } catch (...) {
            ll::logger.error("Failed to serialize Slider");
            return {};
        }
    }
};

class StepSlider : public CustomFormElement {

public:
    std::string              mText{};
    std::vector<std::string> mSteps{};
    size_t                   mDefault = 0;

    void validate() {
        if (mDefault >= mSteps.size()) {
            mDefault = mSteps.size() - 1;
        }
    }

    StepSlider(std::string name, std::string text, std::vector<std::string> steps, size_t defaultVal = 0)
    : CustomFormElement(std::move(name)), mText(std::move(text)), mSteps(std::move(steps)), mDefault(defaultVal) {
        validate();
    }
    ~StepSlider() override = default;

    [[nodiscard]] Type getType() const override { return Type::StepSlider; }

    fifo_json serialize() override {
        try {
            validate();
            return {
                {"type",    "step_slider"},
                {"text",    mText        },
                {"steps",   mSteps       },
                {"default", mDefault     }
            };
        } catch (...) {
            ll::logger.error("Failed to serialize StepSlider");
            return {};
        }
    }
};

class CustomForm::CustomFormImpl : public FormImpl {

public:
    using Callback = std::function<void(Player&, const CustomFormResult&)>;

    std::string                                     mTitle;
    std::vector<std::shared_ptr<CustomFormElement>> mElements{};
    Callback                                        mCallback;

    explicit CustomFormImpl(std::string title) : mTitle(std::move(title)) {}

    void setTitle(const std::string& title) { mTitle = title; }

    void append(const std::shared_ptr<CustomFormElement>& element) { mElements.push_back(element); }

    void appendLabel(const std::string& text) { append(std::make_shared<Label>(text)); }

    void appendInput(
        const std::string& name,
        const std::string& text,
        const std::string& placeholder,
        const std::string& defaultVal
    ) {
        append(std::make_shared<Input>(name, text, placeholder, defaultVal));
    }

    void appendToggle(const std::string& name, const std::string& text, bool defaultVal) {
        append(std::make_shared<Toggle>(name, text, defaultVal));
    }

    void appendDropdown(
        const std::string&              name,
        const std::string&              text,
        const std::vector<std::string>& options,
        size_t                          defaultVal
    ) {
        append(std::make_shared<Dropdown>(name, text, options, defaultVal));
    }

    void
    appendSlider(const std::string& name, const std::string& text, double min, double max, double step, double defaultVal) {
        append(std::make_shared<Slider>(name, text, min, max, step, defaultVal));
    }

    void appendStepSlider(
        const std::string&              name,
        const std::string&              text,
        const std::vector<std::string>& steps,
        size_t                          defaultVal
    ) {
        append(std::make_shared<StepSlider>(name, text, steps, defaultVal));
    }

    bool sendTo(Player& player, Callback callback) { // NOLINT
        // TODO
        return false;
    }

protected:
    [[nodiscard]] FormType getType() const override { return FormType::CustomForm; }

    fifo_json serialize() override {
        try {
            fifo_json form = {
                {"title",   mTitle            },
                {"type",    "custom_form"     },
                {"content", fifo_json::array()}
            };
            for (auto& e : mElements) {
                fifo_json element = e->serialize();
                if (!element.empty()) {
                    form["content"].push_back(element);
                }
            }
            return form;
        } catch (...) {
            ll::logger.error("Failed to serialize CustomForm");
            return {};
        }
    }
};

CustomForm::CustomForm(const std::string& title) : impl(std::make_unique<CustomFormImpl>(title)) {}

CustomForm& CustomForm::setTitle(const std::string& title) {
    impl->setTitle(title);
    return *this;
}

CustomForm& CustomForm::appendLabel(const std::string& text) {
    impl->appendLabel(text);
    return *this;
}

CustomForm& CustomForm::appendInput(
    const std::string& name,
    const std::string& text,
    const std::string& placeholder,
    const std::string& defaultVal
) {
    impl->appendInput(name, text, placeholder, defaultVal);
    return *this;
}

CustomForm& CustomForm::appendToggle(const std::string& name, const std::string& text, bool defaultVal) {
    impl->appendToggle(name, text, defaultVal);
    return *this;
}

CustomForm& CustomForm::appendDropdown(
    const std::string&              name,
    const std::string&              text,
    const std::vector<std::string>& options,
    size_t                          defaultVal
) {
    impl->appendDropdown(name, text, options, defaultVal);
    return *this;
}

CustomForm& CustomForm::appendSlider(
    const std::string& name,
    const std::string& text,
    double             min,
    double             max,
    double             step,
    double             defaultVal
) {
    impl->appendSlider(name, text, min, max, step, defaultVal);
    return *this;
}

CustomForm& CustomForm::appendStepSlider(
    const std::string&              name,
    const std::string&              text,
    const std::vector<std::string>& steps,
    size_t                          defaultVal
) {
    impl->appendStepSlider(name, text, steps, defaultVal);
    return *this;
}

CustomForm& CustomForm::sendTo(Player& player, Callback callback) {
    impl->sendTo(player, std::move(callback));
    return *this;
}

} // namespace ll::form