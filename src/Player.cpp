#include <SFML/Graphics.hpp>
#include <iostream>
#include "Global.hpp"
#include "Player.hpp"

Player::Player()
{
    if (!texture.loadFromFile ("graphics/custom/character.png"))
    {
        std::cerr << "Exiting, resources not found" << std::endl;
        abort();
    }
    
    texture.setSmooth (true);
    texture.setRepeated (false);
    sprite.setTexture (texture);
}

void Player::move (int x, int y)
{
    int mul = surviv::default_player_speed;
    sprite.move (x * mul, y * mul);
}
