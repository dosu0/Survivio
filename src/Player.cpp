#include <SFML/Graphics.hpp>
#include <iostream>
#include "Global.hpp"
#include "Player.hpp"

Player::Player()
{
    defaultInit();
}

void Player::move (Map &map, int x, int y)
{
    int mul = surviv::default_player_speed; //multiply by speed coefficients
    sprite.move (x * mul, y * mul);
    map.mainView.move (x * mul, y * mul);
}

void Player::defaultInit()
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
