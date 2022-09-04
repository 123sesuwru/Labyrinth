#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;


class Entry{
protected:
    Vector2f position;
    Sprite sprite;
    Texture texture;
    void init();
    int width;
    int height;
    String image_path;
    virtual void init();
public:
    Entry(String image_path);
    void setPosition(Vector2f position);
    void setTextureRect(IntRect rect);
    void setWidth(int width);
    void setHeight(int height);

    Sprite getSprite();
    int getWidth();
    int getHeight();
    void setImagePath(String image_path);
    Vector2f getPosition();
    String getImagePath();

    
    

};