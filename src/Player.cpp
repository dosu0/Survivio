#include <SFML/Graphics.hpp>
#include <iostream>
#include "Player.hpp"

Player::Player()
{
    if !texture.loadFromFile("res/Creator-Kit/custom/character.png"):
        std::cerr << "Exiting, resourses not found";
    texture.setSmooth(true);
    texture.setRepeated(false);
    sprite.setTexture(texture);
}