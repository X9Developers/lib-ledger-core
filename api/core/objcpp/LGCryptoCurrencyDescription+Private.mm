// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from crypto_currency_description.djinni

#import "LGCryptoCurrencyDescription+Private.h"
#import "LGCryptoCurrencyDescription.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "LGCryptoCurrencyUnit+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface LGCryptoCurrencyDescription ()

- (id)initWithCpp:(const std::shared_ptr<::ledger::core::api::CryptoCurrencyDescription>&)cppRef;

@end

@implementation LGCryptoCurrencyDescription {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::ledger::core::api::CryptoCurrencyDescription>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::ledger::core::api::CryptoCurrencyDescription>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (nonnull NSString *)getIdentifier {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getIdentifier();
        return ::djinni::String::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull NSString *)getName {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getName();
        return ::djinni::String::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull NSArray<LGCryptoCurrencyUnit *> *)getUnits {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getUnits();
        return ::djinni::List<::djinni_generated::CryptoCurrencyUnit>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (int32_t)getDecimalPlaceOfSmallestUnit {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getDecimalPlaceOfSmallestUnit();
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull NSString *)getBolosApplicationName {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getBolosApplicationName();
        return ::djinni::String::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull NSString *)getDerivationScheme {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getDerivationScheme();
        return ::djinni::String::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto CryptoCurrencyDescription::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto CryptoCurrencyDescription::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<LGCryptoCurrencyDescription>(cpp);
}

}  // namespace djinni_generated

@end