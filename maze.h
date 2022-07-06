//
// Created by Элина Карапетян on 06.07.2022.
//

#ifndef RANDOM_GENERATED_MAZE_MAZE_H
#define RANDOM_GENERATED_MAZE_MAZE_H


#include <iostream>
#include <vector>
#include <ctime>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Maze{
private:

    //Private functions
    void initVariables();
public:
    Maze();
    virtual ~Maze();

    std::vector<std::vector<bool>> *cells;

    void mazeGenerator();
    void render(sf::RenderTarget* target);
};


#endif //RANDOM_GENERATED_MAZE_MAZE_H
