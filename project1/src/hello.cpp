#include "hello.h"

#include <iostream>

// Print a formatted welcome banner for FHTW devcontainer
void hello_fhtw() {
    std::cout << "┌─────────────────────────────────────────┐" << std::endl;
    std::cout << "│  🎓 Welcome to FHTW Development! 🎓     │" << std::endl;
    std::cout << "│  🤖 Running in devcontainer 🤖          │" << std::endl;
    std::cout << "│  💻 C++ Programming Environment 💻      │" << std::endl;
    std::cout << "└─────────────────────────────────────────┘" << std::endl;
}
