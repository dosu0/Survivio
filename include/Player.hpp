#pragma once

#include "Map.hpp"

class Player // Abstract Base Class for SuperPlayer, NetPlayer, BotPlayer
{
    public:
        sf::Sprite sprite;
        static unsigned int player_count;

        virtual ~Player() {};
        virtual void move (Map &map) = 0;

    private:
        sf::Texture texture;
        
    protected:
        virtual void defaultInit() = 0;
};
