// PE5-Windows.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include "pch.h";
#define SFML_STATIC
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
    RectangleShape shape3(Vector2f (66.9f, 420));
    shape3.setFillColor(Color(150, 50, 250));
    shape3.setPosition(100, 300);

    CircleShape shape1(50);
    // set the shape color to green
    shape1.setFillColor(Color(100, 250, 50));

    CircleShape shape2(150);
    // set the position of the shape to x and y coordinates
    shape2.setPosition(200, 100);
    shape2.setFillColor(Color(250, 250, 0));

    // create the window
    RenderWindow window(VideoMode(800, 600), "My window");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(Color::Black);
        // draw everything here...
        // window.draw(...);
        window.draw(shape1);
        window.draw(shape2);
        window.draw(shape3);



       




        // end the current frame
        window.display();
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
