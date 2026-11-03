#include "Fighter.h"

Fighter::Fighter(int maxHp) : hp_(maxHp), maxHp_(maxHp) {}

void Fighter::takeDamage(int amount) {
    if (amount > 0) {
        hp_ = amount >= hp_ ? 0 : hp_ - amount;
    }
}

void Fighter::heal(int amount) {
    if (amount > 0) {
        hp_ = amount >= maxHp_ - hp_ ? maxHp_ : hp_ + amount;
    }
}

int Fighter::hp() const {
    return hp_;
}

bool Fighter::alive() const {
    return hp_ > 0;
}
