#include "Player.hpp"

Player::Player()
{
    sf::Texture player_texture;
    player_texture.loadFromFile("res/sprites/character.png");
    player_texture.setSmooth(true);
    player_texture.setRepeated(false);

    sf::Sprite player_sprite;
    player_sprite.setTexture(player_texture);
}