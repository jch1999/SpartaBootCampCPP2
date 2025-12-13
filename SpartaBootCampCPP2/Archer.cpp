// Copyright 2025 <SpartaClub>
#include "Archer.h"
#include "Monster.h"
#include <iostream>
#include <string>
using namespace std;    // NOLINT

Archer::Archer(string nickName) : Player(nickName) {
    setHP(60);
    setMP(50);
    setPower(11);
    setDefence(10);
    setAccuracy(12);
    setSpeed(12);
}

void Archer::attack() {
    cout << getNickname() << "의 공격! Spread Arrow!\n";
}

void Archer::attack(Monster* monster) {
    int damage = (getPower() - monster->getDefence()) / 3;
    if (damage <= 0)damage = 1;
    for (int i = 0; i < 3; i++) {
        monster->setHP(monster->getHP() - damage);
        cout << monster->getName() << "에게 " << damage << "데미지!!!\n";

        if (monster->getHP() <= 0) {
            cout << monster->getName() << "는 "
            << getNickname() << "의 바람같은 화살에 의해 쓰러졌다.\n";
        } else {
            cout << monster->getName() << "는 남은 HP는"
            << monster->getHP() << "입니다.\n";
            cout << getNickname() << ": 살짝 빗맞았네~\n\n";
        }
    }
}
