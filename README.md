# Arduino Projects

These are a few simple 1-day projects I have undergone to learn about Arduino and explore electrical engineering.

## Project 1: Digits

This project was my first time using a 4 Digit 7 Segment LED Display. After using pinout diagrams to attach the module to my Arduino Uno, I discovered the nuances of coding each LED. I spent a long time struggling to figure out how to show multiple numbers at the same time while running a function similar to a stopwatch. The issue is that only one digit can be displayed at a time, so rather than hardcoding to make the program only show the digits required, I modularized the code and utilized a while loop. It came to my attention that although a delay is required when switching between digits, the delay can be as short as 1 millisecond (which is too fast for the human eye). This worked to my advantage as I created a while loop for one second to show each number as the time incremented.
