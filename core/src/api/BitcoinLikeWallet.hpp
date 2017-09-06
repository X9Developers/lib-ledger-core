// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKEWALLET_HPP
#define DJINNI_GENERATED_BITCOINLIKEWALLET_HPP

#include <cstdint>
#include <memory>

namespace ledger { namespace core { namespace api {

class AccountCallback;
class BitcoinLikeExtendedPublicKeyProvider;
class BitcoinLikeNextAccountInfoCallback;

class BitcoinLikeWallet {
public:
    virtual ~BitcoinLikeWallet() {}

    virtual void createNewAccount(int32_t index, const std::shared_ptr<BitcoinLikeExtendedPublicKeyProvider> & xpubProvider, const std::shared_ptr<AccountCallback> & callback) = 0;

    virtual void createNextAccount(const std::shared_ptr<BitcoinLikeExtendedPublicKeyProvider> & xpubProvider, const std::shared_ptr<AccountCallback> & callback) = 0;

    virtual void getNextAccountInfo(const std::shared_ptr<BitcoinLikeNextAccountInfoCallback> & callback) = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_BITCOINLIKEWALLET_HPP
