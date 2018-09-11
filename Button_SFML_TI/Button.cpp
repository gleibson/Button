#include "Button.h"

Button::Button(float width, float height)
{
    if (!font.loadFromFile("arial.ttf"))
    {
        //handle error
    }

    // (width / (Max_Number_Items + 1) * 1), height / 2)

    button[0].setFont(font); //font of the name button
    button[0].setFillColor(sf::Color::Red); // color of the font 
    button[0].setString("Play"); //name on the button
    button[0].setPosition(sf::Vector2f(width / 2, height / (Max_Number_Items + 1) * 1)); //positon vertically

    button[1].setFont(font);
    button[1].setFillColor(sf::Color::White);
    button[1].setString("Stop");
    button[1].setPosition(sf::Vector2f(width / 2, height / (Max_Number_Items + 1) * 2));

    button[2].setFont(font);
    button[2].setFillColor(sf::Color::White);
    button[2].setString("Prev");
    button[2].setPosition(sf::Vector2f(width / 2, height / (Max_Number_Items + 1) * 3));

    button[3].setFont(font);
    button[3].setFillColor(sf::Color::White);
    button[3].setString("Next");
    button[3].setPosition(sf::Vector2f(width / 2, height / (Max_Number_Items + 1) * 4));

    button[4].setFont(font);
    button[4].setFillColor(sf::Color::White);
    button[4].setString("Exit");
    button[4].setPosition(sf::Vector2f(width / 2, height / (Max_Number_Items + 1) * 5));

    SelectItemIndex = 0;
}

Button::~Button()
{

}

void Button::MoveLeft()
{
    if (SelectItemIndex - 1 >= 0)
    {
        button[SelectItemIndex].setFillColor(sf::Color::White);
        SelectItemIndex--;
        button[SelectItemIndex].setFillColor(sf::Color::Red);
    }


}

void Button::MoveRight()
{
    if (SelectItemIndex + 1 < Max_Number_Items)
    {
        button[SelectItemIndex].setFillColor(sf::Color::White);
        SelectItemIndex++;
        button[SelectItemIndex].setFillColor(sf::Color::Red);
    }

}

void Button::draw(sf::RenderWindow &window)
{

    for (int i = 0; i < Max_Number_Items; i++)
    {
        window.draw(button[i]);
    }

}
/*
void Button::MouseMovement()
{

if (event.type == sf::Event::MouseMoved)
{

}
}
*/