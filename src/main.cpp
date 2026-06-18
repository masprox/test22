#include <iostream>
#include "../include/ladder.h"

extern void runTUI(); // declared in ui.cpp

int main() {
    std::cout << "LDmicro TUI + Keil Compiler (plcLib) شروع شد...\n\n";
    runTUI();
    return 0;
}