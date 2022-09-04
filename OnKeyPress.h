#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
using namespace sf;
class OnKeyPress{
protected:
    Player* player;
public:
    OnKeyPress();
    void setSpeed(Vector2f speed);
    void setPlayer(Player* player);
    void action();
}
