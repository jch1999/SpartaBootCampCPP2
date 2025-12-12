// Copyright 2025 <SpartaClub>
#pragma once
#include "Player.h"
#include <string>

class Thief :public Player {
 public:
    explicit Thief(string nickName);

    // Inherited via Player
    void attack() override;

    void attack(Monster* monster) override;
};
