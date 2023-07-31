#ifndef GAME_H
#define GAME_H

class Game {
private:
    int totalTrees;
    int targetTree;
    int remainingShots;

public:
    Game(int trees);
    void play();
};

#endif

