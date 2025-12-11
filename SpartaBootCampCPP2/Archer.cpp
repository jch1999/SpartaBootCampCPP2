#include "Archer.h"
#include "Monster.h"
#include <iostream>
using namespace std;    // NOLINT

Archer::Archer():Player("Archer") {
}

void Archer::attack() {
    cout << getNickname() << "의 공격! Spread Arrow!\n";
}

void Archer::attack(Monster* monster) {
    int damage = getPower() - monster->getDefence();
    if (damage <= 0) {
        monster->setHP(monster->getHP() - 1);
        cout << monster->getName() << "에게 " << damage << "데미지!!!\n";

        if (monster->getHP() <= 0) {
            cout << monster->getName() << " 는 " << getNickname() << "의 바람같은 화살에 의해 쓰러졌다\n";
        }
    }
}
