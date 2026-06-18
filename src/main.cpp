#include <iostream>
#include "ladder.h"

#ifdef _WIN32
#include <windows.h>
#endif

void runTUI();

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    system("cls");
#endif
    std::cout << "LDmicro TUI + Keil Compiler (UTF-8) شروع شد...\n";
    runTUI();
    return 0;
}
