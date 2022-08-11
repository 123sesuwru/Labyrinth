#include "Movement.h"

Movement::Movement(){

};

void Movement::setPlayer(Player* player){
    this->player = player;
}

void Movement::action(){
    if(Keyboard::isKeyPressed(Keyboard::Right)){
        player-> setSpeed(Vector2f(0.1,0));
        player-> setTextureRect(IntRect(int(player-> current_frame)*80, 3*120, 80, 120));
    }

    if(Keyboard::isKeyPressed(Keyboard::Left)){
        player-> setSpeed(Vector2f(-0.1,0));
        player-> setTextureRect(IntRect(int(player-> current_frame)*80, 2*120, 80, 120));
    }

    if(Keyboard::isKeyPressed(Keyboard::Up)){
        player-> setSpeed(Vector2f(0,-0.1));
        player-> setTextureRect(IntRect(int(player-> current_frame)*80, 1*120, 80, 120));
    }

    if(Keyboard::isKeyPressed(Keyboard::Down)){
        player-> setSpeed(Vector2f(0,0.1));
        player-> setTextureRect(IntRect(int(player-> current_frame)*80, 0*120, 80, 120));
    }

    else{
        player->setSpeed(Vector2f(0,0));
    }

    player->current_frame=player->current_frame + 0.005;

    if(player->current_frame>4){
        player->current_frame= 0;
    }
}