// Copyright 20205 <SpartaClub>
#pragma once
#include "Player.h"
#include <string>

class Magician :public Player {
 public:
    explicit Magician(string nickName);

    // Inherited via Player
    void attack() override;

    void attack(Monster* monster) override;
};
