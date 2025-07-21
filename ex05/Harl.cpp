#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug(void) {
    std::cout << GRAY << "[ DEBUG ]" << DEFAULT << std::endl;
    std::cout << GRAY << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << YELLOW << "[ INFO ]" << DEFAULT << std::endl;
    std::cout << YELLOW << "I cannot believe adding extra bacon costs more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::warning(void) {
    std::cout << MAGENTA << "[ WARNING ]" << DEFAULT << std::endl;
    std::cout << MAGENTA << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << RED << "[ ERROR ]" << DEFAULT << std::endl;
    std::cout << RED << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    void (Harl::*ptr_complain[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

    for (size_t i = 0; i < 4; ++i) {
        if (level == levels[i]) {
            (this->*ptr_complain[i])();
            return;
        }
    }
}       
