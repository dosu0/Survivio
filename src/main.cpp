#include <SFML/Graphics.hpp>
#include "Global.hpp"
#include "Player.hpp"
#include "Map.hpp"

int main()
{
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
                    break;

                default:
                    break;
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
