#include <iostream>
#include "game.h"

int main() {
    srand(time(0));
    int maxnum = rand() % 50 + 1;
    Game game(maxnum);
    game.play();

    return 0;
}

