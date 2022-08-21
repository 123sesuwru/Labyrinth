#include "Coin.h"
Coin::Coin(Vector2f position){
    init();
    setPosition(position);
    
}

void Coin::init(){
    Image image;
    image.loadFromFile("images/coin.png");
    texture.loadFromImage(image);
    sprite.setTexture(texture);

}

void Coin::setPosition(Vector2f position){
    this-> position = position;
    sprite.setPosition(position.x , position.y);
}

void Coin:: setTextureRect(IntRect rect ){
    sprite.setTextureRect(rect);

}

void Coin::setHeight(int height){
    this-> height = height;
}

void Coin::setWidth(int width){
    this-> width= width;
}

int Coin::getHeight(){
    return height;
}

int Coin::getWidth(){
    return width;
}

Sprite Coin::getSprite(){
    return sprite;
}
