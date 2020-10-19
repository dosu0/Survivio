#pragma once

class Player
{
    public:
        sf::Sprite sprite;

        Player();
        void move (int x, int y);

    private:
        sf::Texture texture;
};
