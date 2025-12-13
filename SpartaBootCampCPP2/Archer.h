// Copyright 2025 <SpartaClub>
#pragma once
#include "Player.h"
#include <string>
class Archer : public Player{
 public:
     explicit Archer(string nickName);

    // Inherited via Player
    void attack() override;

    void attack(Monster* monster) override;
};
