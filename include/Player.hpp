#pragma once

#include "Map.hpp"

class Player
{
    public:
        sf::Sprite sprite;
        static unsigned int player_count;

        Player();
        ~Player();
        void move (Map &map);

    private:
        sf::Texture texture;

        void defaultInit();
};
