#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : _name(name), _weapon(&weapon) {}

HumanA::~HumanA() {
    // Destructor does not need to do anything specific for this class
}

void HumanA::attack() {
    if (_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " has no weapon to attack with!" << std::endl;
}
