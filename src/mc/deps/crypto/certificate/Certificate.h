#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/certificate/Encoding.h"
#include "mc/deps/crypto/certificate/ISystemInterface.h"
#include "mc/deps/crypto/certificate/ThumbprintFormat.h"
#include "mc/deps/crypto/hash/HashType.h"

namespace Crypto::Certificate {

class Certificate : public ::Crypto::Certificate::ISystemInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7286b8;
    // NOLINTEND

public:
    // prevent constructor by default
    Certificate& operator=(Certificate const&);
    Certificate(Certificate const&);
    Certificate();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Certificate() /*override*/ = default;

    // vIndex: 1
    virtual ::std::string serialize(::Crypto::Certificate::Encoding) const /*override*/;

    // vIndex: 2
    virtual ::std::string extractPublicKey(::Crypto::Certificate::Encoding) const /*override*/;

    // vIndex: 3
    virtual ::std::string extractPrivateKey(::Crypto::Certificate::Encoding) const /*override*/;

    // vIndex: 4
    virtual ::std::string getIssuer() const /*override*/;

    // vIndex: 5
    virtual bool hasValidCertChain() const /*override*/;

    // vIndex: 6
    virtual ::std::string
        generateCertificateThumbprint(::Crypto::Hash::HashType, ::Crypto::Certificate::ThumbprintFormat) const
        /*override*/;

    // vIndex: 7
    virtual ::std::string
        generatePublicKeyThumbprint(::Crypto::Hash::HashType, ::Crypto::Certificate::ThumbprintFormat) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Crypto::Certificate
