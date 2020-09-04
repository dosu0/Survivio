#include "OS-specific.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "Main Menu");
    
    window.setVerticalSyncEnabled(true);
    window.setKeyRepeatEnabled(false);

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
        window.display();
    }

    return EXIT_SUCCESS;
}