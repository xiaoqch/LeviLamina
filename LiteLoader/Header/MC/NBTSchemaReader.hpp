// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class NBTSchemaReader {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBTSCHEMAREADER
public:
    class NBTSchemaReader& operator=(class NBTSchemaReader const &) = delete;
    NBTSchemaReader(class NBTSchemaReader const &) = delete;
    NBTSchemaReader() = delete;
#endif

public:
    /*0*/ virtual ~NBTSchemaReader();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual bool isString() const;
    /*3*/ virtual bool isObject() const;
    /*4*/ virtual bool isArray() const;
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void __unk_vfn_7();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual bool isFloat() const;
    /*15*/ virtual bool isDouble() const;
    /*16*/ virtual bool asBool() const;
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual void __unk_vfn_18();
    /*19*/ virtual void __unk_vfn_19();
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual void __unk_vfn_21();
    /*22*/ virtual void __unk_vfn_22();
    /*23*/ virtual void __unk_vfn_23();
    /*24*/ virtual void __unk_vfn_24();
    /*25*/ virtual float asFloat() const;
    /*26*/ virtual double asDouble() const;
    /*27*/ virtual std::string asString() const;
    /*28*/ virtual unsigned __int64 members() const;
    /*29*/ virtual unsigned __int64 length() const;
    /*30*/ virtual std::string pushMember(unsigned __int64);
    /*31*/ virtual void pushElement(unsigned __int64);
    /*32*/ virtual void pop();
    /*
    inline bool isValid() const{
        bool (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?isValid@NBTSchemaReader@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~NBTSchemaReader(){
         (NBTSchemaReader::*rv)();
        *((void**)&rv) = dlsym("??1NBTSchemaReader@@UEAA@XZ");
        return (this->*rv)();
    }
    inline short asInt16() const{
        short (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?asInt16@NBTSchemaReader@@UEBAFXZ");
        return (this->*rv)();
    }
    inline unsigned short asUInt16() const{
        unsigned short (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?asUInt16@NBTSchemaReader@@UEBAGXZ");
        return (this->*rv)();
    }
    inline int asInt32() const{
        int (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?asInt32@NBTSchemaReader@@UEBAHXZ");
        return (this->*rv)();
    }
    inline unsigned int asUInt32() const{
        unsigned int (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?asUInt32@NBTSchemaReader@@UEBAIXZ");
        return (this->*rv)();
    }
    inline __int64 asInt64() const{
        __int64 (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?asInt64@NBTSchemaReader@@UEBA_JXZ");
        return (this->*rv)();
    }
    inline unsigned __int64 asUInt64() const{
        unsigned __int64 (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?asUInt64@NBTSchemaReader@@UEBA_KXZ");
        return (this->*rv)();
    }
    inline unsigned char asUInt8() const{
        unsigned char (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?asUInt8@NBTSchemaReader@@UEBAEXZ");
        return (this->*rv)();
    }
    inline signed char asInt8() const{
        signed char (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?asInt8@NBTSchemaReader@@UEBACXZ");
        return (this->*rv)();
    }
    inline bool isBool() const{
        bool (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?isBool@NBTSchemaReader@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isUInt8() const{
        bool (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?isUInt8@NBTSchemaReader@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isInt8() const{
        bool (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?isInt8@NBTSchemaReader@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isInt16() const{
        bool (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?isInt16@NBTSchemaReader@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isUInt16() const{
        bool (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?isUInt16@NBTSchemaReader@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isUInt32() const{
        bool (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?isUInt32@NBTSchemaReader@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isInt32() const{
        bool (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?isInt32@NBTSchemaReader@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isInt64() const{
        bool (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?isInt64@NBTSchemaReader@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isUInt64() const{
        bool (NBTSchemaReader::*rv)() const;
        *((void**)&rv) = dlsym("?isUInt64@NBTSchemaReader@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI NBTSchemaReader(class gsl::not_null<class CompoundTag const *>);

protected:

private:

};