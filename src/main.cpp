// main.cpp — entry point. Wires config and subsystems together.

#include "browserpasswordexport/settings.h"
#include "browserpasswordexport/readers.h"
#include "browserpasswordexport/merge.h"
#include "browserpasswordexport/encrypt.h"
#include "browserpasswordexport/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    browserpasswordexport::Settings settings = browserpasswordexport::Settings::load_default();
    browserpasswordexport::Readers readers(settings.store_path);
    browserpasswordexport::Merge merge(settings.store_path);
    browserpasswordexport::Encrypt encrypt(settings.store_path);
    browserpasswordexport::Cli cli(settings.store_path);
    std::fprintf(stderr, "[browser-password-export] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
