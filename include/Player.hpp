#pragma once

#include "Map.hpp"

class Player
{
    public:
        sf::Sprite sprite;

        Player();
        void move (Map &map, bool key_pressed);

    private:
        sf::Texture texture;

        void defaultInit();
};
