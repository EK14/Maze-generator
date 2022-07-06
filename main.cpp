#include <iostream>
#include "maze.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>


int main() {
    std::srand(static_cast<unsigned>(time(NULL)));
    Maze maze;
    sf::RenderWindow* window;
    sf::VideoMode videoMode;
    sf::Event event;
    videoMode.width = 1420;
    videoMode.height = 1020 + 550;
    window = new sf::RenderWindow(videoMode, "Maze", sf::Style::Titlebar | sf::Style::Close);
    window->setFramerateLimit(120);
    window->setVerticalSyncEnabled(false);

    while(window->isOpen()){

        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
        }
        window->clear(sf::Color(192, 192, 192));

        //Render
        maze.render(window);
        window->display();
    }
    delete window;
}
