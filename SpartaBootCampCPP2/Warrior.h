#pragma once
#include "Player.h"
class Warrior :public Player
{
public:
    Warrior();
    
    // Inherited via Player
    void attack() override;

    void attack(Monster* monster) override;

};