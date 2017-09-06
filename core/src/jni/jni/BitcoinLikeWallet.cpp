// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "BitcoinLikeWallet.hpp"  // my header
#include "AccountCallback.hpp"
#include "BitcoinLikeExtendedPublicKeyProvider.hpp"
#include "BitcoinLikeNextAccountInfoCallback.hpp"
#include "Marshal.hpp"

namespace djinni_generated {

BitcoinLikeWallet::BitcoinLikeWallet() : ::djinni::JniInterface<::ledger::core::api::BitcoinLikeWallet, BitcoinLikeWallet>("co/ledger/core/BitcoinLikeWallet$CppProxy") {}

BitcoinLikeWallet::~BitcoinLikeWallet() = default;


CJNIEXPORT void JNICALL Java_co_ledger_core_BitcoinLikeWallet_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::ledger::core::api::BitcoinLikeWallet>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_BitcoinLikeWallet_00024CppProxy_native_1createNewAccount(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_index, jobject j_xpubProvider, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeWallet>(nativeRef);
        ref->createNewAccount(::djinni::I32::toCpp(jniEnv, j_index),
                              ::djinni_generated::BitcoinLikeExtendedPublicKeyProvider::toCpp(jniEnv, j_xpubProvider),
                              ::djinni_generated::AccountCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_BitcoinLikeWallet_00024CppProxy_native_1createNextAccount(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_xpubProvider, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeWallet>(nativeRef);
        ref->createNextAccount(::djinni_generated::BitcoinLikeExtendedPublicKeyProvider::toCpp(jniEnv, j_xpubProvider),
                               ::djinni_generated::AccountCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_ledger_core_BitcoinLikeWallet_00024CppProxy_native_1getNextAccountInfo(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_callback)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::ledger::core::api::BitcoinLikeWallet>(nativeRef);
        ref->getNextAccountInfo(::djinni_generated::BitcoinLikeNextAccountInfoCallback::toCpp(jniEnv, j_callback));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
