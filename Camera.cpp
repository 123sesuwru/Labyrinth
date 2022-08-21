#include "Camera.h"
using namespace sf;
using namespace std;
#include <iostream>


void Camera::init(){
    view.reset(FloatRect(0,0,800,500));

}

Camera::Camera(Player* player){
    this ->player = player;
    init();
}

void Camera::setCenter(){
    int player_x = player-> getPosition().x;
    int player_y = player-> getPosition().y;
    /*if(player_x <LEFT_BORDER){
        player_x = LEFT_BORDER;
    }

    if(player_x <RIGHT_BORDER){
        player_x = RIGHT_BORDER;
    }

    if(player_y <UP_BORDER){
        player_y = UP_BORDER;
    }

    if(player_y <DOWN_BORDER){
        player_y = DOWN_BORDER;
    }*/

    cout<<"X : "<<player_x<<endl;
    cout<<"Y : "<<player_y<<endl;


    view.setCenter(player_x, player_y);
}

void Camera::update(){
    setCenter();
}

View Camera::getView(){
    return view;
}