#include "Map.h"

void Map::init(){
    map_image.loadFromFile("images/textures.jpg");
    map_texture.loadFromImage(map_image);
    map_Sprite.setTexture(map_texture);
    player = new Player(Vector2f(0,0) , "images/player1.png");
    my_coin = new Coin(Vector2f(100,100) , "images/coin.png");

}

Map::Map(){
    init();
}

void Map::update(){
    player->update();

}

Player* Map::getPlayer(){
    return player;
}

void Map::map_draw(RenderWindow &window){
    for(int h = 0; h<HEIGHT_MAP; h++){
        for(int w = 0; w<WIDTH_MAP;w++){
            if(TileMap[h][w]=='s'){
                map_Sprite.setTextureRect(IntRect(SX,SY,BRICK_WIDTH,BRICK_HEIGHT));
            }

            if(TileMap[h][w]=='g'){
                map_Sprite.setTextureRect(IntRect(GX,GY,BRICK_WIDTH,BRICK_HEIGHT));
            }

            map_Sprite.setPosition(w*BRICK_WIDTH, h*BRICK_HEIGHT);

            window.draw(map_Sprite);



        }
    }
    window.draw(my_coin->getSprite());
    window.draw(player->getSprite());
}