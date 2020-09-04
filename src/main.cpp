#include "OS-specific.hpp"
#include "Player.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Main Menu");
    
    window.setVerticalSyncEnabled(true);
    window.setKeyRepeatEnabled(false);

    //////////////////////////// test case
    sf::Texture player_texture;
    player_texture.loadFromFile("res/sprites/character.png");
    player_texture.setSmooth(true);
    player_texture.setRepeated(false);

    sf::Sprite player_sprite;
    player_sprite.setTexture(texture);
    ////////////////////////////

    while (window.isOpen())  //game loop
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;

                case sf::Event::KeyPressed:
                    break;

                default:
                    break;
            }
        }

        window.clear();

        //draw stuff here
        window.draw(player_sprite);
        
        window.display();
    }

    return EXIT_SUCCESS;
}