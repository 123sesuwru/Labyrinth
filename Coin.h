#pragma once
#include <SFML/Graphics.hpp>
#include "Entry.h"
using namespace sf;
using namespace std;

class Coin:public Entry{
private:
    void init();
public:
    Coin(Vector2f position);
};