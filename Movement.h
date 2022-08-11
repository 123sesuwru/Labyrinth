#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
using namespace sf;

class Movement{
private:
    Player* player;
public:
    Movement();
    void setPlayer(Player* player);
    void action();


};