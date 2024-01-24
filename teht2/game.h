#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>

using namespace std;

class Game
{
public:
    Game(int max);
    ~Game();
    void play();
    void printGameResult();

private:
    int maxNumber;
    int randomNumber;
    int numOfGuesses;
};

#endif // GAME_H
