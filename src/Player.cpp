#include <SFML/Graphics.hpp>
#include "Player.hpp"

Player::Player()
{
    texture.loadFromFile("res/Creator-Kit/custom/character.png");
    texture.setSmooth(true);
    texture.setRepeated(false);
    sprite.setTexture(texture);
}