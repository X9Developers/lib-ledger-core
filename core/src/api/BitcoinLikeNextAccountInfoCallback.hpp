// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKENEXTACCOUNTINFOCALLBACK_HPP
#define DJINNI_GENERATED_BITCOINLIKENEXTACCOUNTINFOCALLBACK_HPP

#include "../utils/optional.hpp"

namespace ledger { namespace core { namespace api {

struct BitcoinLikeNextAccountInfo;
struct Error;

class BitcoinLikeNextAccountInfoCallback {
public:
    virtual ~BitcoinLikeNextAccountInfoCallback() {}

    virtual void onCallback(const std::experimental::optional<BitcoinLikeNextAccountInfo> & result, const std::experimental::optional<Error> & error) = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_BITCOINLIKENEXTACCOUNTINFOCALLBACK_HPP
