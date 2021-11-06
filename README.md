# Navy
You must code a terminal version of the famous Battleship game

Authors:
* [Kattalin Ocariz](https://github.com/kocariz)
# Project
The two players are ONLY allowed to comunicate using the signals SIGUSER1 and SIGUSER2.
The map size is 8x8. On each turn, you must display your positions, and then your enemy’s positions.
At the end of the game, you must display whether “I won” or “Enemy won”.

The file passed as parameter must contain lines formatted the following way:
LENGTH : FIRST_SQUARE : LAST_SQUARE
where LENGTH is the length of the ship, FIRST_SQUARE and LAST_SQUARE its first and last positions.
In this file, you must have 4 ships (of lengths 2,3,4 and 5).
If the navy file is invalid, you have to quit the program and consider it as an error.
# Usage
```
terminal 1:
    ./navy test/pos1
terminal 2:
    ./navy num_pid test/pos2
```