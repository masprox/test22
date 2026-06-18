#include <iostream>
#include "ladder.h"

void runTUI();
void generateKeilCode(const LadderProgram& program, const std::string& filename);

int main() {
    std::cout << "LDmicro TUI شروع شد...\n";
    runTUI();
    return 0;
}