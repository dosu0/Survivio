#include <SFML/Graphics.hpp>
#include "Global.hpp"
#include "Player.hpp"
#include "Map.hpp"

int main()
{
    bool key_pressed = false;
    sf::RenderWindow window (sf::VideoMode (surviv::view_dim_X, surviv::view_dim_Y), "Main Menu");
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



        if (key_pressed)
        {
            if (sf::Keyboard::isKeyPressed (sf::Keyboard::Right) || sf::Keyboard::isKeyPressed (sf::Keyboard::D))
            {
                player.move (map, 1, 0);
            }
            else if (sf::Keyboard::isKeyPressed (sf::Keyboard::Left) || sf::Keyboard::isKeyPressed (sf::Keyboard::A))
            {
                player.move (map, -1, 0);
            }
            else if (sf::Keyboard::isKeyPressed (sf::Keyboard::Up) || sf::Keyboard::isKeyPressed (sf::Keyboard::W))
            {
                player.move (map, 0, -1);
            }
            else if (sf::Keyboard::isKeyPressed (sf::Keyboard::Down) || sf::Keyboard::isKeyPressed (sf::Keyboard::S))
            {
                player.move (map, 0, 1);
            }
        }



        window.clear();

        //draw stuff from here
        window.setView (map.mainView);
        window.draw (map.sprite);
        window.draw (player.sprite);
        
        window.display();
    }



    return EXIT_SUCCESS;
}
