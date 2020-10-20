#pragma once

class Map
{
    public:
        sf::View mainView;
        sf::Sprite sprite;
        
        Map();

    private:
        sf::Texture texture;

        void defaultInit();
};
