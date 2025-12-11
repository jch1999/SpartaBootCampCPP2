#pragma once
#include "Player.h"
class Archer :public Player
{
public:
    Archer();

    // Inherited via Player
    void attack() override;

    void attack(Monster* monster) override;

};