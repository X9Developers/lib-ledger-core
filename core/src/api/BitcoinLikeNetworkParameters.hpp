// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#pragma once

#include "BitcoinLikeFeePolicy.hpp"
#include <cstdint>
#include <string>
#include <utility>
#include <vector>

namespace ledger { namespace core { namespace api {

struct BitcoinLikeNetworkParameters final {
    std::string Identifier;
    std::vector<uint8_t> P2PKHVersion;
    std::vector<uint8_t> P2SHVersion;
    std::vector<uint8_t> XPUBVersion;
    BitcoinLikeFeePolicy FeePolicy;
    int64_t BIP44CoinType;
    std::string PaymentUriScheme;
    int64_t DustAmount;
    std::string MessagePrefix;
    bool UsesTimestampedTransaction;

    BitcoinLikeNetworkParameters(std::string Identifier_,
                                 std::vector<uint8_t> P2PKHVersion_,
                                 std::vector<uint8_t> P2SHVersion_,
                                 std::vector<uint8_t> XPUBVersion_,
                                 BitcoinLikeFeePolicy FeePolicy_,
                                 int64_t BIP44CoinType_,
                                 std::string PaymentUriScheme_,
                                 int64_t DustAmount_,
                                 std::string MessagePrefix_,
                                 bool UsesTimestampedTransaction_)
    : Identifier(std::move(Identifier_))
    , P2PKHVersion(std::move(P2PKHVersion_))
    , P2SHVersion(std::move(P2SHVersion_))
    , XPUBVersion(std::move(XPUBVersion_))
    , FeePolicy(std::move(FeePolicy_))
    , BIP44CoinType(std::move(BIP44CoinType_))
    , PaymentUriScheme(std::move(PaymentUriScheme_))
    , DustAmount(std::move(DustAmount_))
    , MessagePrefix(std::move(MessagePrefix_))
    , UsesTimestampedTransaction(std::move(UsesTimestampedTransaction_))
    {}

    BitcoinLikeNetworkParameters(const BitcoinLikeNetworkParameters& cpy) {
       this->Identifier = cpy.Identifier;
       this->P2PKHVersion = cpy.P2PKHVersion;
       this->P2SHVersion = cpy.P2SHVersion;
       this->XPUBVersion = cpy.XPUBVersion;
       this->FeePolicy = cpy.FeePolicy;
       this->BIP44CoinType = cpy.BIP44CoinType;
       this->PaymentUriScheme = cpy.PaymentUriScheme;
       this->DustAmount = cpy.DustAmount;
       this->MessagePrefix = cpy.MessagePrefix;
       this->UsesTimestampedTransaction = cpy.UsesTimestampedTransaction;
    }

    BitcoinLikeNetworkParameters() = default;


    BitcoinLikeNetworkParameters& operator=(const BitcoinLikeNetworkParameters& cpy) {
       this->Identifier = cpy.Identifier;
       this->P2PKHVersion = cpy.P2PKHVersion;
       this->P2SHVersion = cpy.P2SHVersion;
       this->XPUBVersion = cpy.XPUBVersion;
       this->FeePolicy = cpy.FeePolicy;
       this->BIP44CoinType = cpy.BIP44CoinType;
       this->PaymentUriScheme = cpy.PaymentUriScheme;
       this->DustAmount = cpy.DustAmount;
       this->MessagePrefix = cpy.MessagePrefix;
       this->UsesTimestampedTransaction = cpy.UsesTimestampedTransaction;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(Identifier, P2PKHVersion, P2SHVersion, XPUBVersion, FeePolicy, BIP44CoinType, PaymentUriScheme, DustAmount, MessagePrefix, UsesTimestampedTransaction);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(Identifier, P2PKHVersion, P2SHVersion, XPUBVersion, FeePolicy, BIP44CoinType, PaymentUriScheme, DustAmount, MessagePrefix, UsesTimestampedTransaction);
    }
};

} } }  // namespace ledger::core::api
