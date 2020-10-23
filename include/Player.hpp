#pragma once

#include "Map.hpp"

class Player
{
    public:
        sf::Sprite sprite;

        Player();
        void move (Map &map);

    private:
        sf::Texture texture;

        void defaultInit();
};
