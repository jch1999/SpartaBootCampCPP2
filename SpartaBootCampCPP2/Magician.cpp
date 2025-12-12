// Copyright 2025 <SpartaClub>
#include "Magician.h"
#include "Monster.h"
#include <iostream>
#include <string>
using namespace std;    // NOLINT

Magician::Magician(string nickName):Player(nickName) {
}

void Magician::attack() {
    cout << getNickname() << "의 공격. .\n";
}

void Magician::attack(Monster* monster) {
    int damage = getPower() - monster->getDefence();
    if (damage <= 0) damage = 1;

    monster->setHP(monster->getHP() - damage);
    cout << monster->getName() << "에게 " << damage << "데미지!!!\n";

    if (monster->getHP() <= 0) {
        cout << monster->getName() << "는 "
            << getNickname() << "의 계산대로 영원히 침묵했다.\n";
    } else {
        cout << monster->getName() << "의 남은 HP는 "
            << monster->getHP() << "입니다.\n";
        cout << getNickname() << ": 예상했던 것보다 튼튼하군.\n\n";
    }
}
