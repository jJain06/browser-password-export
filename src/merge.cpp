// merge.cpp — part of browser-password-export.

#include "browserpasswordexport/merge.h"

#include <cstdio>

namespace browserpasswordexport {

Merge::Merge(const std::string& config_path)
    : config_path_(config_path) {}

void Merge::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Merge::run() {
    if (verbose_) std::fprintf(stderr, "[browser-password-export] merge: run\n");
    // core logic lives here
    return true;
}

}  // namespace browserpasswordexport
