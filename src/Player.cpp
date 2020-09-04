#include "OS-specific.hpp"
#include "Player.hpp"

Player::Player()
{
    texture.loadFromFile("res/sprites/character.png");
    texture.setSmooth(true);
    texture.setRepeated(false);

    sprite.setTexture(texture);
}