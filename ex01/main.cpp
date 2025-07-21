#include "Zombie.hpp"


int main()
{
    std::cout << "Creating a horde of zombies..." << std::endl;
    std::cout << "Enter the number of zombies: ";
    int N;
    std::cin >> N;
    std::cout << "Enter the base name for the zombies: ";
    std::string baseName;
    std::cin >> baseName;
    Zombie* horde = zombieHorde(N, baseName);
    if (horde == nullptr)
    {
        std::cout << "Failed to create a horde of zombies." << std::endl;
        return 1;
    }
    std::cout << "Zombies are ready to announce themselves!" << std::endl;
    for (int i = 0; i < N; ++i)
    {
        horde[i].announce();
    }
    delete[] horde; // Clean up the allocated memory
    std::cout << "Horde destroyed." << std::endl;
    return 0;
}
