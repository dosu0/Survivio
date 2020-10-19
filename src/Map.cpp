#include <SFML/Graphics.hpp>
#include "Global.hpp"
#include "Map.hpp"

Map::Map()
{
    mainView.setCenter(sf::Vector2f(0, 0));
    mainView.setSize(sf::Vector2f(surviv::view_dim_X, surviv::view_dim_Y));
}
