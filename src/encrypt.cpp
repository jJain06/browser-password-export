// encrypt.cpp — part of browser-password-export.

#include "browserpasswordexport/encrypt.h"

#include <cstdio>

namespace browserpasswordexport {

Encrypt::Encrypt(const std::string& config_path)
    : config_path_(config_path) {}

void Encrypt::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Encrypt::run() {
    if (verbose_) std::fprintf(stderr, "[browser-password-export] encrypt: run\n");
    // core logic lives here
    return true;
}

}  // namespace browserpasswordexport
