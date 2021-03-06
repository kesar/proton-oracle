#pragma once
#include <eosio/testing/tester.hpp>

namespace eosio { namespace testing {

struct contracts {
   static std::vector<uint8_t> system_wasm() { return read_wasm("/Users/jafri/proton-boilerplate/tests/system_wasms/eosio.system.wasm"); }
   static std::vector<char>    system_abi() { return read_abi("/Users/jafri/proton-boilerplate/tests/system_wasms/eosio.system.abi"); }
   static std::vector<uint8_t> token_wasm() { return read_wasm("/Users/jafri/proton-boilerplate/tests/system_wasms/eosio.token.wasm"); }
   static std::vector<char>    token_abi() { return read_abi("/Users/jafri/proton-boilerplate/tests/system_wasms/eosio.token.abi"); }

   static std::vector<uint8_t> atom_wasm() { return read_wasm("/Users/jafri/proton-boilerplate/tests/../atom/atom.wasm"); }
   static std::vector<char>    atom_abi() { return read_abi("/Users/jafri/proton-boilerplate/tests/../atom/atom.abi"); }

   struct util {

   };
};
}} //ns eosio::testing
