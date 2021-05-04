# Raise the terrain

## Requirements
**General**

* The OS of your choice
* A README.md file, at the root of the folder of the project is mandatory
* All your functions must be commented and respect the Betty style
* Your functions should be maximum 60 lines long (one statement per line)
* Your functions should be maximum 80 column long
* No more than 5 functions per file
* There is no forbidden function for this project. You are allowed to use any system call and/or standard library function.
* You are allowed to use [all the functions provided by SDL2](https://wiki.libsdl.org/CategoryAPI)

## Tasks
**0. Isometric projection:**

**Requirements**

* Usage: terrain file
* Draw a grid using an isometric projection
* The grid must be described in a file
* The color used to draw the grid doesn’t matter
* The grid doesn’t need to be exactly the same as the one shown above. But make sure you have a coherent isometric projection.
* Your grid must be centered and takes as much space as possible on the screen. We should be able to see the whole screen.
* Your program should end when the user is pressing the ESC key

**1. Rotation:**

* Rotate the grid when the user is using left or right arrows
* Please use the M_PI macro defined in math.h
* Link with the gcc -m flag to be able to use the math library

