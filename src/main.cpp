#include <SFML/Graphics.hpp>
#include "Global.hpp"
#include "Player.hpp"
#include "Map.hpp"

int main()
{
    bool key_pressed = false;
    sf::RenderWindow window (sf::VideoMode(surviv::view_dim_X, surviv::view_dim_Y), "Main Menu");
    Player player;
    Map map;

    window.setVerticalSyncEnabled (true);
    window.setKeyRepeatEnabled (false);

    while (window.isOpen())  //Main Game Loop
    {
        sf::Event event;
        while (window.pollEvent (event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;

                case sf::Event::KeyPressed:
                    key_pressed = true;
                    break;

                case sf::Event::KeyReleased:
                    key_pressed = false;
                    break;

                default:
                    break;
            }
        }

        window.clear();

        if (key_pressed)
        {
            if (event.key.code == sf::Keyboard::Right || event.key.code == sf::Keyboard::D)
            {
                player.move (1, 0);
            }
            else if (event.key.code == sf::Keyboard::Left || event.key.code == sf::Keyboard::A)
            {
                player.move (-1, 0);
            }
            else if (event.key.code == sf::Keyboard::Up || event.key.code == sf::Keyboard::W)
            {
                player.move (0, 1);
            }
            else if (event.key.code == sf::Keyboard::Down || event.key.code == sf::Keyboard::S)
            {
                player.move (0, -1);
            }
        }

        //draw stuff from here
        window.setView (map.mainView);
        window.draw (map.sprite);
        window.draw (player.sprite);
        
        window.display();
    }

    return EXIT_SUCCESS;
}
