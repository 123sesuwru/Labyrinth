#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Map.h"
#include "Movement.h"
#include "Camera.h"


using namespace sf;
using namespace std;

class Engine{
    public:
        Map my_map;
        Movement movement;
        Camera* my_camera;
        RenderWindow window;
        Engine();
        void init();
        void loop();
        void draw();
        void update();


        
};
