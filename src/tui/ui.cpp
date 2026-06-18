#include <iostream>
#include "ladder.h"

void generateKeilCode(const LadderProgram& program, const std::string& filename);

void showMenu() {
    std::cout << "\n=== LDmicro TUI (Fungal-UI Style) ===\n";
    std::cout << "1. اضافه کردن Rung\n";
    std::cout << "2. نمایش برنامه\n";
    std::cout << "3. تولید کد Keil\n";
    std::cout << "4. خروج\n";
}

void runTUI() {
    LadderProgram prog;
    int choice;
    while (true) {
        showMenu();
        std::cin >> choice;
        if (choice == 1) {
            Rung r;
            LadderElement e{ElementType::CONTACT, "X1", 0};
            r.elements.push_back(e);
            e = {ElementType::COIL, "Y1", 0};
            r.elements.push_back(e);
            prog.addRung(r);
            std::cout << "Rung اضافه شد!\n";
        } else if (choice == 2) {
            std::cout << prog.toString();
        } else if (choice == 3) {
            generateKeilCode(prog, "output.c");
            std::cout << "کد Keil در output.c ذخیره شد.\n";
        } else if (choice == 4) {
            break;
        }
    }
}
