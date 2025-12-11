#pragma once
#include "Player.h"
class Magician :public Player
{
public:
    Magician();

    // Inherited via Player
    void attack() override;

    void attack(Monster* monster) override;

};