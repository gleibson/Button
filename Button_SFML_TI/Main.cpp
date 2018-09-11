#include <SFML\Graphics.hpp>
#include <iostream>
#include "Button.h"

int main()
{

    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML BUTTON");

    Button button(window.getSize().x, window.getSize().y);

    while (window.isOpen())
    {

        sf::Event event;

        while (window.pollEvent(event)) // error in this condition see later SFML-WINDOW-D-2.dll
        {

            switch (event.type)
            {
            case sf::Event::KeyReleased:
                switch (event.key.code)
                {
                case sf::Keyboard::Left:
                    button.MoveLeft();
                    break;
                case sf::Keyboard::Right:
                    button.MoveRight();
                    break;
                case sf::Keyboard::Return:
                    switch (button.getPressedItem())
                    {
                    case 0:
                        std::cout << "Play" << std::endl;
                        break;
                    case 1:
                        std::cout << "Play" << std::endl;
                        break;
                    case 2:
                        std::cout << "Prev" << std::endl;
                        break;
                    case 3:
                        std::cout << "Next" << std::endl;
                        break;
                    case 4:
                        window.close();
                        break;
                    }

                    break;
                }
            case sf::Event::KeyPressed:
                break;


            case sf::Event::Closed:
                window.close();
                break;
            }
        }
    }
    window.clear();

    button.draw(window);

    window.display();

    return 0;
}