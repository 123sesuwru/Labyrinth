#include "Player.h"


Player::Player(Vector2f position , String image_path):Entry(position , image_path){
    init();
    setPosition(postion); 
    
}

void Player::init(){
    setSpeed(Vector2f(0,0));
    int width = 80;
    int height = 120;
    setTextureRect(IntRect(0,0,80,120)); 
}

Vector2f Player::getPosition(){
    return sprite.getPosition();
}

void Player::setPosition(Vector2f pos){
   position = pos;
   sprite.setPosition(position.x, position.y);
}

Sprite Player::getSprite(){
    return sprite;
}

void Player::setTextureRect(IntRect rect){
    sprite.setTextureRect(rect);
}

void Player::setSpeed(Vector2f speed){
    this -> speed = speed;

}

Vector2f Player::getSpeed(){
    return speed;

}

void Player::update(){
    sprite.move(speed.x , speed.y);
    position = sprite.getPosition();
}