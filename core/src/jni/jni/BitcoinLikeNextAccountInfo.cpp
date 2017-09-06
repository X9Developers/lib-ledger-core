// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "BitcoinLikeNextAccountInfo.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

BitcoinLikeNextAccountInfo::BitcoinLikeNextAccountInfo() = default;

BitcoinLikeNextAccountInfo::~BitcoinLikeNextAccountInfo() = default;

auto BitcoinLikeNextAccountInfo::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<BitcoinLikeNextAccountInfo>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.xpubPath)),
                                                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c.index)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.parentNodePath)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.accountNodePath)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto BitcoinLikeNextAccountInfo::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 5);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<BitcoinLikeNextAccountInfo>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_xpubPath)),
            ::djinni::I32::toCpp(jniEnv, jniEnv->GetIntField(j, data.field_index)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_parentNodePath)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_accountNodePath))};
}

}  // namespace djinni_generated
