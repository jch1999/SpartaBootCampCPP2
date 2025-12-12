// Copyright 2025 <SpartaClub>
#include "Thief.h"
#include "Monster.h"
#include <iostream>
#include <string>
using namespace std;    // NOLINT

Thief::Thief(string nickName):Player(nickName) {
}

void Thief::attack() {
    cout << getNickname() << "이 공격. Shadow Knife.\n";
}

void Thief::attack(Monster* monster) {
    int damage = (getPower() - monster->getDefence()) / 5;
    if (damage <= 0)damage = 1;
    for (int i = 0; i < 5; i++) {
        monster->setHP(monster->getHP() - damage);
        cout << monster->getName() << "에게 " << damage << "데미지!!!\n";

        if (monster->getHP() <= 0) {
            cout << monster->getName() << "는 "
                << getNickname() << "에 의해 영원히 잠들었다.\n";
        } else {
            cout << monster->getName() << "의 남은 HP는 "
                << monster->getHP() << "입니다.\n"
                << getNickname() << ": 칫! 얕았나.\n\n";
        }
    }
}
