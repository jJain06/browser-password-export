// readers.cpp — part of browser-password-export.

#include "browserpasswordexport/readers.h"

#include <cstdio>

namespace browserpasswordexport {

Readers::Readers(const std::string& config_path)
    : config_path_(config_path) {}

void Readers::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Readers::run() {
    if (verbose_) std::fprintf(stderr, "[browser-password-export] readers: run\n");
    // core logic lives here
    return true;
}

}  // namespace browserpasswordexport
