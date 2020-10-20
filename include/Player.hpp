#pragma once

#include "Map.hpp"

class Player
{
    public:
        sf::Sprite sprite;

        Player();
        void move (Map &map, int x, int y);

    private:
        sf::Texture texture;

        void defaultInit();
};
