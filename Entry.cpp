#include "Entry.h"

Entry::Entry(String image_path){
    setImagePath(image_path);
    init();

}

void Entry::init(){
    Image image;
    image.loadFromFile(image_path);
    texture.loadFromImage(image);
    Sprite.setTexture(texture);
}

void Entry::setPosition(Vector2f position){
   this-> position = position;
   sprite.setPosition(position.x, position.y);
}

void Entry::setTextureRect(IntRect rect){
    sprite.setTextureRect(rect);
}

void Entry::setWidth(int width){
    this-> width= width;
}

void Entry::setHeight(int height){
    this-> height=height;
}

void Entry::setImagePath(String image_path){
    this->image_path = image_path;
}

Vector2f Entry::getPosition(){
    return sprite.getPosition();
}

Sprite Entry::getSprite(){
    return sprite;
}

int Entry::getWidth(){
    return width;
}

int Entry::getHeight(){
    return height;
}

String  Entry::getImagePath(){
    return image_path;
}

Entry::OnKeyPress(Vector2f position , String image_path):Entry(image_path){
    setPosition(position);
}

void Entry::setSpeed(Vector2f speed){
    this->speed = speed;
}

Vector2f Entry::getSpeed(){
    return speed;
}






