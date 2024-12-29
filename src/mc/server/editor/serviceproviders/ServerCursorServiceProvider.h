#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::Cursor { class ServerCursor; }
namespace Editor::Cursor { struct AttachmentProperties; }
namespace Editor::Cursor { struct CursorState; }
namespace Editor::Cursor { struct Ray; }
// clang-format on

namespace Editor::Cursor {

class ServerCursorServiceProvider {
public:
    // prevent constructor by default
    ServerCursorServiceProvider& operator=(ServerCursorServiceProvider const&);
    ServerCursorServiceProvider(ServerCursorServiceProvider const&);
    ServerCursorServiceProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerCursorServiceProvider();

    // vIndex: 1
    virtual ::StackRefResult<::Editor::Cursor::ServerCursor> getCursor() const = 0;

    // vIndex: 2
    virtual ::StackRefResult<::Editor::Cursor::Ray> getRay() const = 0;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<::Editor::Cursor::CursorState> getCursorState() const = 0;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<::Editor::Cursor::AttachmentProperties> getAttachmentProperties() const = 0;

    // vIndex: 5
    virtual ::Scripting::Result<void> setCursorState(::Editor::Cursor::CursorState&& state) = 0;

    // vIndex: 6
    virtual ::Scripting::Result<void> setAttachmentProperties(::Editor::Cursor::AttachmentProperties&& props) = 0;

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<::BlockPos> moveBy(::glm::ivec3 const&) = 0;

    // vIndex: 8
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
        listenForCursorStateChanges(::std::function<
                                    void(::Editor::Cursor::CursorState const&, ::Editor::Cursor::CursorState const&)>) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Cursor