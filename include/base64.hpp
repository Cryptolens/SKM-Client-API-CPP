#pragma once

#include <string>

#include "optional.hpp"

namespace serialkeymanager_com {

// Internal functions used by the library for dealing with messages
// encoded with base64.

int
b64_pton(char const *src, unsigned char *target, size_t targsize);

optional<std::string>
b64_decode(std::string const& b64);

} // namespace serialkeymanager_com
