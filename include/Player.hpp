#pragma once

class Player
{
    public:
        sf::Sprite sprite;

        Player();
        move();

    private:
        sf::Texture texture;
};
