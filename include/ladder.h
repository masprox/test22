#pragma once
#include <vector>
#include <string>

enum class ElementType { CONTACT, COIL, TIMER_ON, TIMER_OFF, COUNTER };

struct LadderElement {
    ElementType type;
    std::string name;
    int param = 0;
};

struct Rung {
    std::vector<LadderElement> elements;
};

class LadderProgram {
public:
    std::vector<Rung> rungs;
    void addRung(const Rung& rung);
    std::string toString() const;
};