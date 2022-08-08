#include "Engine.h"

Engine::Engine(){
    init();
}

void Engine::update(){
    movement.action();
    my_map.update();
}

void Engine::draw(){
    window.clear(Color(0,255,0));
    my_map.map_draw(window);
    window.display();
}

void Engine::init(){
    window.create(VideoMode(1000, 600), "Super Mario Remake from India ");
    movement.setPlayer(my_map.getPlayer());

}

void Engine::loop(){
    while(window.isOpen()){
        Event event ;
        while(window.pollEvent(event)){
            if(event.type==Event::Closed){
                window.close();
                
            }

         } 
         draw();
         update();
    }   
}