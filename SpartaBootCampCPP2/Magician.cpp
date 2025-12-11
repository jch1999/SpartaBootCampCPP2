#include "Magician.h"
#include "Monster.h"
#include <iostream>
using namespace std;    // NOLINT

Magician::Magician():Player("Magician") {
    cout << getNickname() << "의 공격. .\n";
}

void Magician::attack() {
}

void Magician::attack(Monster* monster) {
    int damage = getPower() - monster->getDefence();
    if (damage <= 0) {
        monster->setHP(monster->getHP() - 1);
        cout << monster->getName() << "에게 " << damage << "데미지!!!\n";

        if (monster->getHP() <= 0) {
            cout << monster->getName() << " 는 " << getNickname() << "에 의해 영원히 잠들었다.\n";
        }
    }
}
