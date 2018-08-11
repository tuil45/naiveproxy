// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "net/third_party/quic/tools/quic_simple_crypto_server_stream_helper.h"

namespace net {

QuicSimpleCryptoServerStreamHelper::QuicSimpleCryptoServerStreamHelper(
    QuicRandom* random)
    : random_(random) {}

QuicSimpleCryptoServerStreamHelper::~QuicSimpleCryptoServerStreamHelper() =
    default;

QuicConnectionId
QuicSimpleCryptoServerStreamHelper::GenerateConnectionIdForReject(
    QuicConnectionId /*connection_id*/) const {
  return random_->RandUint64();
}

bool QuicSimpleCryptoServerStreamHelper::CanAcceptClientHello(
    const CryptoHandshakeMessage& message,
    const QuicSocketAddress& client_address,
    const QuicSocketAddress& peer_address,
    const QuicSocketAddress& self_address,
    std::string* error_details) const {
  return true;
}

}  // namespace net
