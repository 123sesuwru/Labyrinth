#include <SFML/Graphics.hpp>
#pragma once
#include "Player.h"
using namespace sf;

const int WINDOW_WIDTH = 1260;
const int WINDOW_HEIGHT = 720;
const int WIDTH_MAP = 21;
const int HEIGHT_MAP = 12;
const int BRICK_HEIGHT = 60;
const int BRICK_WIDTH = 60;
const int SX = 0;
const int SY = 0;
const int GX = 0;
const int GY = 60;

class Map{
public: 
    Map();
    void map_draw(RenderWindow& window);
    Player* getPlayer();
    void update();

private:
    Image map_image;
    Texture map_texture;
    Sprite map_Sprite;
    void init();
    Player* player;


String TileMap[HEIGHT_MAP] = {

"sssssssssssssssssssss",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sgggggggggggggggggggs",

"sssssssssssssssssssss"

};


};
