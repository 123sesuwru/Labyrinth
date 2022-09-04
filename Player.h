
#pragma once
#include <SFML/Graphics.hpp>
#include "Entry.h"



using namespace sf;

class Player::public Entry{
private:
    void init();
public:
    Player(Vector2f position , String image_path);//constructor
    float current_frame = 0;
    void update();

};