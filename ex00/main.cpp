#include "Zombie.hpp"

int main()
{
    std::cout << "Creating a new Zombie using the constructor." << std::endl;
    std::cout << "Insert the name of the Zombie: ";
    std::string name;
    std::getline(std::cin, name);
    Zombie zombie = Zombie(name);
    zombie.announce();

    std::cout << "Creating a Zombie named 'Zombie1' using newZombie function." << std::endl;
    Zombie* zombie1 = newZombie("Zombie1");
    zombie1->announce();
    delete zombie1;

    std::cout << "Creating a Zombie named 'Zombie2' using randomChump function." << std::endl;
    randomChump("Zombie2");
}
