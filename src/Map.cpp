#include <SFML/Graphics.hpp>
#include <iostream>
#include "Global.hpp"
#include "Map.hpp"

Map::Map()
{
    mainView.setCenter (sf::Vector2f (0, 0));
    mainView.setSize (sf::Vector2f (surviv::view_dim_X, surviv::view_dim_Y));

    if (!texture.loadFromFile ("graphics/custom/map-ground.png"))
    {
        std::cerr << "Exiting, resources not found" << std::endl;
        abort();
    }
    
    texture.setSmooth (true);
    texture.setRepeated (false);
    sprite.setTexture (texture);
}
