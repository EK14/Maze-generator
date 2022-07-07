# Maze-generator

Implementation of the binary tree algorithm for constructing a randomly generated maze using the SFML library.

This code was used in the game <a href="https://github.com/EK14/Battle-Tanks">Battle Tanks</a>

## Description of the algorithm

The essence of the binary tree algorithm is to pave the path in a random direction from each cell of the field: in my implementation, either up or to the right (depending on the offset you choose). We process only 1 cell per unit of time, therefore we can generate mazes of infinite size, keeping only the final result (maze) without the need to store any side information.

This generation method has two side effects:

1. Labyrinths have a strong diagonal displacement and no dead ends in its direction. Look at the screenshots below and you will see that each of the corridors tends to the upper right cell, and, as a result, has exactly one path to it, and there is no dead end anywhere on the path:

2. Two empty corridors on the sides of the labyrinth. When the algorithm "digs" to the end of a row/column, it has no choice but to continue in one single direction, creating empty "boundaries".

By the way, the name does not just coincide with the data structure. The result of his work is a random binary tree, in which from each cell (vertex) there is exactly 1 path towards the root (parent vertex), and, accordingly, exactly 1 path to any other cell. As a consequence, any cell has at most 3 connections to its neighbors.

Formal algorithm (for northeast offset):

1) Select the initial cell;
2) Choose a random direction for paving the way. If an adjacent cell in that direction goes beyond the boundaries of the field, dig the cell in the only possible direction;
3) Go to the next cell;
4) Repeat 2-3 until all cells are processed;

<img src="https://user-images.githubusercontent.com/75206974/177643806-b892c1b5-2158-4e80-ae76-8cf9049b38a7.gif" width="600" height="400"/>
