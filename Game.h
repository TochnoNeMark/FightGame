#ifndef GAME_H
#define GAME_H
#include "Fighter.h"
class Game {
private:
    Fighter hero_;
    Fighter enemy_;
    int potions_;
    void printState() const;
public:
    Game();
    void run();
};
#endif
