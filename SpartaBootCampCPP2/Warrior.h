// Copyright 2025 <SpartaClub>
#pragma once
#include "Player.h"
#include <string>

class Warrior :public Player {
 public:
    explicit Warrior(string nickName);

    // Inherited via Player
    void attack() override;

    void attack(Monster* monster) override;
};
