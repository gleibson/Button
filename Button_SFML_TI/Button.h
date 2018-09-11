#pragma once
#include <SFML\Graphics.hpp>

#define Max_Number_Items 4

class Button
{

private:

    int SelectItemIndex;
    sf::Font font;
    sf::Text button[Max_Number_Items];

public:

    Button(float width, float height); //constructor
    ~Button(); //destructor


    void MoveLeft(); //Function to moveup on keyboard
    void MoveRight(); //Function to movedown on keyboard

                      //void MouseMovement(); // Function to move the mouse

    void draw(sf::RenderWindow &window); //draw the window

    int getPressedItem() // Press button on keyboard
    {
        return SelectItemIndex;
    }

};