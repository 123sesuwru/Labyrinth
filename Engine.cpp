#include "Engine.h"

Engine::Engine(){
    init();
}

void Engine::draw(){
    window.clear(Color(0,255,0));
    my_map.map_draw(window);
    window.display();
}

void Engine::init(){
    window.create(VideoMode(1260, 720), "Super Mario Remake from India ");

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
    }   
}