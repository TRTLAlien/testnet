// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

namespace CryptoNote
{
  // uncomnment below and put in some new vals for the first three bytes
  // mainnet:  0xb5, 0x0c, 0x4a < so don't use these values
  // vico-7xT: 0x42, 0x1c, 0x1a < don't use these either
  // main-clone: 0x22, 0x4c, 0x2f < don't use these either

   const static boost::uuids::uuid BYTECOIN_NETWORK = { {  0x22, 0x4c, 0x2f, 0x6c, 0xcf, 0x52, 0x57, 0x41, 0x65, 0xf9, 0x91, 0xa4, 0xb6, 0xc1, 0x43, 0xe9  } };

}

