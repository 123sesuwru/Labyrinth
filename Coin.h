#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;

class Coin{
private:
    Vector2f position;
    Sprite sprite;
    Texture texture;
    void init();
    int width = 32;
    int height = 32;
public:
    Coin(Vector2f position);
    void setPosition(Vector2f position);
    void setTextureRect(IntRect rect);
    void setWidth(int width);
    void setHeight(int height);

    Sprite getSprite();
    int getWidth();
    int getHeight();
    

};