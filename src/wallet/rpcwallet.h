// Copyright (c) 2016 The Bitcoin Core developers
// Copyright (c) 2017-2019 The Raven Core developers
// Copyright (c) 2020-2021 The Neoxa Core developers
// Copyright (c) 2022-2022 The CLORE.AI
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef CLORE_WALLET_RPCWALLET_H
#define CLORE_WALLET_RPCWALLET_H

#include <string>

class CRPCTable;
class CWallet;
class JSONRPCRequest;

void RegisterWalletRPCCommands(CRPCTable &t);

/**
 * Figures out what wallet, if any, to use for a JSONRPCRequest.
 *
 * @param[in] request JSONRPCRequest that wishes to access a wallet
 * @return nullptr if no wallet should be used, or a pointer to the CWallet
 */
CWallet *GetWalletForJSONRPCRequest(const JSONRPCRequest& request);

std::string HelpRequiringPassphrase(CWallet *);
void EnsureWalletIsUnlocked(CWallet *);
bool EnsureWalletIsAvailable(CWallet *, bool avoidException);

#endif //CLORE_WALLET_RPCWALLET_H
