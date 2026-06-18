#include "ladder.h"
#include <sstream>

void LadderProgram::addRung(const Rung& rung) {
    rungs.push_back(rung);
}

std::string LadderProgram::toString() const {
    std::stringstream ss;
    for (const auto& rung : rungs) {
        ss << "| ";
        for (const auto& el : rung.elements) {
            if (el.type == ElementType::CONTACT) ss << el.name << " --| |--> ";
            else if (el.type == ElementType::COIL) ss << el.name << " --( )--> ";
            else if (el.type == ElementType::TIMER_ON) ss << "TON(" << el.name << ") ";
        }
        ss << "\n";
    }
    return ss.str();
}