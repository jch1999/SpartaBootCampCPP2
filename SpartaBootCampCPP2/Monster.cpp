// Copyright 2025 <SpartaClub>
#include <iostream>
#include <string>
#include "Monster.h"
#include "Player.h"
using namespace std;     //NOLINT
Monster::Monster(string name) : name(name), HP(10),
power(30), defence(10), speed(10) {
}

void Monster::attack(Player* player) {
    int damage = getPower() - player->getDefence();

    if (damage <= 0) damage = 1;

    player->setHP(player->getHP() - damage);
    cout << getName() << "의 공격! Heavy Strike!\n"
        << player->getNickname() << "에게 " << damage << "데미지!!!\n";

    if (player->getHP() <= 0) {
        cout << player->getNickname() << "는 쓰러졌다\n\n";
    } else {
        cout << player->getNickname() << "의 남은 HP는 "
            << player->getHP() << "입니다.\n"
            << getName() << ": 힘이 덜 들어갔군!\n\n";
    }
}

string Monster::getName() {
    return name;
}

int Monster::getHP() {
    return HP;
}

int Monster::getPower() {
    return power;
}

int Monster::getDefence() {
    return defence;
}

int Monster::getSpeed() {
    return speed;
}

void Monster::setName(string name) {
    this->name = name;
}

bool Monster::setHP(int HP) {
    this->HP = HP;
    if (HP <= 0) return false;
    return true;
}

void Monster::setPower(int power) {
    this->power = power;
}

void Monster::setDefence(int defence) {
    this->defence = defence;
}

void Monster::setSpeed(int speed) {
    this->speed = speed;
}
