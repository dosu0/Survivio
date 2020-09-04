#include "OS-specific.hpp"
#include "Player.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "Main Menu");
    
    window.setVerticalSyncEnabled(true);
    window.setKeyRepeatEnabled(false);

    //////////////////////////// test case
    sf::Texture texture;
    texture.loadFromFile("res/sprites/character.png");
    texture.setSmooth(true);
    texture.setRepeated(false);

    sf::Sprite sprite;
    sprite.setTexture(texture);
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
        window.draw(sprite);
        window.display();
    }

    return EXIT_SUCCESS;
}