// Copyright 2025 <SpartaClub>
#include "Warrior.h"
#include "Monster.h"
#include <iostream>
#include <string>

using namespace std;    // NOLINT

Warrior::Warrior(string nickName) :Player(nickName) {
    power = 20;
    defence = 40;
}

void Warrior::attack() {
    cout << getNickname() << "의 공격! Heavy Strike!\n";
}

void Warrior::attack(Monster* monster) {
    int damage = getPower() - monster->getDefence();

    if (damage <= 0) damage = 1;

    monster->setHP(monster->getHP() - damage);
    cout << getNickname() << "의 공격! Heavy Strike!\n"
        << monster->getName() << "에게 " << damage << "데미지!!!\n";

    if (monster->getHP() <= 0) {
        cout << monster->getName() << "는 "
            << getNickname() << "의 대검에 산산히 부서졌다.\n";
    } else {
        cout << monster->getName() << "의 남은 HP는 "
            << monster->getHP() << "입니다.\n"
            << getNickname() << ": 힘이 덜 들어갔군!\n\n";
    }
}
