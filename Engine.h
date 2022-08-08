#include <SFML/Graphics.hpp>
#include <iostream>
#include "Map.h"


using namespace sf;
using namespace std;

class Engine{
    public:
        Map my_map;
        RenderWindow window;
        Engine();
        void init();
        void loop();
        void draw();

        
};
