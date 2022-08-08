#include "Movement.h"

Movement::Movement(){

};

void Movement::setPlayer(Player* player){
    this->player = player;
}

void Movement::action(){
    if(Keyboard::isKeyPressed(Keyboard::Right)){
        player-> setSpeed(Vector2f(0.1,0));
    }
}