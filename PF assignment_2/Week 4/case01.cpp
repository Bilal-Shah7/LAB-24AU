#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;


const int MAZE_SIZE = 5;


int robotX = 0, robotY = 0;


int maze[MAZE_SIZE][MAZE_SIZE] = {
    {0, 1, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {0, 0, 0, 1, 0},
    {0, 1, 0, 0, 0},
    {0, 0, 0, 1, 9}  // Goal at (4, 4)
};

void printMaze() {
    for (int i = 0; i < MAZE_SIZE; i++) {
        for (int j = 0; j < MAZE_SIZE; j++) {
            if (i == robotX && j == robotY)
                cout << "R ";  // Robot position
            else if (maze[i][j] == 1)
                cout << "# ";  // Wall
            else if (maze[i][j] == 9)
                cout << "G ";  // Goal
            else
                cout << ". ";  // Empty space
        }
        cout << endl;
    }
}


void moveUp() {
    if (robotX > 0 && maze[robotX - 1][robotY] != 1) {
        robotX--;
    } else {
        cout << "Can't move up, there's a wall!\n";
    }
}


void moveDown() {
    if (robotX < MAZE_SIZE - 1 && maze[robotX + 1][robotY] != 1) {
        robotX++;
    } else {
        cout << "Can't move down, there's a wall!\n";
    }
}


void moveLeft() {
    if (robotY > 0 && maze[robotX][robotY - 1] != 1) {
        robotY--;
    } else {
        cout << "Can't move left, there's a wall!\n";
    }
}


void moveRight() {
    if (robotY < MAZE_SIZE - 1 && maze[robotX][robotY + 1] != 1) {
        robotY++;
    } else {
        cout << "Can't move right, there's a wall!\n";
    }
}


bool hasReachedGoal() {
    return maze[robotX][robotY] == 9;
}


void simulateRobot() {
    string command;
    
    
    while (!hasReachedGoal()) {
        cout << "\nCurrent Maze Status: \n";
        printMaze();
        
        
        cout << "What should the robot do? (up/down/left/right): ";
        getline(cin, command);
        
        if (command == "up") {
            moveUp();
        } else if (command == "down") {
            moveDown();
        } else if (command == "left") {
            moveLeft();
        } else if (command == "right") {
            moveRight();
        } else {
            cout << "Invalid command. Please try again.\n";
        }
        
       
        if (hasReachedGoal()) {
            cout << "Congratulations! The robot has reached the goal!\n";
        }
    }
}

int main() {
    srand(time(0));  
    
    cout << "Robot Simulation Start!\n";
    
    
    simulateRobot();
    
    return 0;
}
