#pragma once
#include "Player.h"
class Thief :public Player
{
public:
    Thief();

    // Inherited via Player
    void attack() override;

    void attack(Monster* monster) override;

};