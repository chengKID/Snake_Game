# Project: Capstone Snake Game

This repo includes the solution to [Capstone project](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). 

<img src="snake_game.gif"/>

## The Capstone project (Snake-Game) meets following project requirements:

### A. Introduction:
The Game interfeces with the player by simplified MAIN MENU. On the main menu the user is allowed to perform 3 different choices:
1. Start the new game which can be abandoned by pressing the END key. Before starting the game, the player will be asked for the player name. When the game is finished the name and the score is saved on the disk (game_record.txt). Additional information about snake head distance (x and y direction) is provided by the end of the game. However this information is not saved.
2. Check history of the game (sorted list of the 10 best playeres is displayed). If the history of the game does not exist (game_record.txt) so the file will be created automatically. The following text will be generated.
3. Quit the game (terminates the game without possibility for return).

On the main menu the player can press keys 1,2 and 3. Other configuration is not allowed and suppressed.


### B. Criterias which support the Capstone Project:

1. Loops, Functions --> The project code is OOP with the security mechanism in order to avoid fail states
2. I/O --> Application read and write the file (or creates new one if the specified not exist.). DataManager.h class
3. The project accepts user input and processes the input --> User Main Manu is the interactive interface with the game. GameManger.h class
4. The project uses Object Oriented Programming techniques. --> The Capstopn project supports OOP technique and uses its dedicated principles.
5. Classes use appropriate access specifiers for class members. --> The classes uses dedicted class members to access class memebers. Class objects communicates with memebes by setters and getters.
6. The project makes use of references in function declarations- --> Project definies the function where references in declaraton are used: HeadDistanceTravel() in snake.h.


## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.
