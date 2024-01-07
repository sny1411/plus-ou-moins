#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));

    int nombreMystere = std::rand() % 100 + 1; // nbre entre 1 et 100

    int resp;
    int tentatives = 0;

    std::cout << "Bienvenue dans plus ou moins !" << std::endl;

    do {
        std::cout << "Devinez le nombre (entre 1 et 100) : ";
        std::cin >> resp;

        if (resp < nombreMystere) {
            std::cout << "Trop bas ! Essayez encore." << std::endl;
        } else if (resp > nombreMystere) {
            std::cout << "Trop haut ! Essayez encore." << std::endl;
        } else {
            std::cout << "Félicitations ! Vous avez deviné le nombre en " << tentatives + 1 << " tentatives." << std::endl;
        }
        tentatives++;

    } while (resp != nombreMystere);

    return 0;
}