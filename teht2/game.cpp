#include "game.h"
#include <cstdlib>
#include <ctime>

Game::Game(int max) : maxNumber(max), numOfGuesses(0) {
    srand(time(0));
    randomNumber = rand() % maxNumber + 1;
}

Game::~Game() {}

void Game::play() {
    int guess = 0;
    std::cout << "Arvaa luku 1-" << maxNumber << ": ";

    while (true) {
        std::cin >> guess;
        numOfGuesses++;

        if (guess < randomNumber) {
            std::cout << "Luku on suurempi. Kokeile uudelleen: ";
        } else if (guess > randomNumber) {
            std::cout << "Luku on pienempi. Kokeile uudelleen: ";
        } else {
            printGameResult();
            break;
        }
    }
}

void Game::printGameResult() {
    std::cout << "Oikea Vastaus! Voitit pelin!";
    std::cout << "\nArvauksia: " << numOfGuesses << std::endl;
}
