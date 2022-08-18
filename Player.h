
#pragma once
#include <SFML/Graphics.hpp>



using namespace sf;

class Player{
private:
    Vector2f position;
    Vector2f speed;
    Sprite sprite;
    Texture texture;
    void init();
public:
    Player();//constructor
    void setPosition(Vector2f pos);
    void setTextureRect(IntRect rect);
    Vector2f getPosition();
    void setSpeed(Vector2f speed);
    Vector2f getSpeed();
    Sprite getSprite();
    float current_frame = 0;
    void update();

};