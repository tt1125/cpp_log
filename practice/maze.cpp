#include <iostream>
#include <string>
using namespace std;

#define SIZE 9
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

void showMaze();
bool checkMaze();
void move();

int maze[SIZE][SIZE] = {
    {3, 3, 3, 3, 3, 3, 3, 3, 3},
    {3, 0, 0, 0, 0, 3, 0, 0, 3},
    {3, 3, 3, 3, 0, 3, 3, 0, 3},
    {3, 0, 0, 0, 0, 0, 0, 0, 3},
    {3, 0, 3, 0, 3, 3, 3, 3, 3},
    {3, 0, 3, 0, 3, 0, 0, 0, 3},
    {3, 3, 3, 0, 3, 0, 3, 0, 3},
    {3, 0, 0, 0, 0, 0, 3, 0, 3},
    {3, 3, 3, 3, 3, 3, 3, 3, 3}};

int vStart, hStart;
int vGoal, hGoal;
int vCurrent;
int hCurrent;
int currentDirection = RIGHT;

int main()
{
    int i = 0;

    cin >> vStart >> hStart;
    cin >> vGoal >> hGoal;

    if (checkMaze())
    {
        cout << "error";
        return 1;
    }

    vCurrent = vStart;
    hCurrent = hStart;

    while (!(vCurrent == vGoal && hCurrent == hGoal) && (i < 100))
    {
        move();
        i++;
    }
    showMaze();
}

void showMaze()
{
    int v, h;
    for (v = 0; v < SIZE; v++)
    {
        for (h = 0; h < SIZE; h++)
        {
            if (v == vCurrent && h == hCurrent)
                cout << "＠";
            else if (maze[v][h] == 0)
                cout << "　";
            else if (maze[v][h] == 1)
                cout << "・";
            else if (maze[v][h] == 2)
                cout << "＊"; // 不使用
            else if (maze[v][h] == 3)
                cout << "■ ";
        }
        cout << endl;
    }
    cout << endl;
}

bool checkMaze()
{
    if ((maze[vStart][hStart] != 0) || (maze[vGoal][hGoal] != 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void move()
{
    maze[vCurrent][hCurrent] = 1;

    // Function to check if a move is valid
    auto isFree = [&](int direction) -> bool
    {
        switch (direction)
        {
        case UP:
            return maze[vCurrent - 1][hCurrent] != 3;
        case DOWN:
            return maze[vCurrent + 1][hCurrent] != 3;
        case LEFT:
            return maze[vCurrent][hCurrent - 1] != 3;
        case RIGHT:
            return maze[vCurrent][hCurrent + 1] != 3;
        }
        return false;
    };

    // Function to move in the current direction
    auto moveForward = [&]()
    {
        switch (currentDirection)
        {
        case UP:
            vCurrent--;
            break;
        case DOWN:
            vCurrent++;
            break;
        case LEFT:
            hCurrent--;
            break;
        case RIGHT:
            hCurrent++;
            break;
        }
    };

    // Determine left-hand direction based on the current direction
    int leftDirection;
    switch (currentDirection)
    {
    case UP:
        leftDirection = LEFT;
        break;
    case DOWN:
        leftDirection = RIGHT;
        break;
    case LEFT:
        leftDirection = DOWN;
        break;
    case RIGHT:
        leftDirection = UP;
        break;
    }

    // Determine if the left side is free
    if (isFree(leftDirection))
    {
        currentDirection = leftDirection;
        moveForward();
    }
    else if (isFree(currentDirection))
    {
        moveForward();
    }
    else
    {
        // If both left and forward are blocked, turn right
        int rightDirection;
        switch (currentDirection)
        {
        case UP:
            rightDirection = RIGHT;
            break;
        case DOWN:
            rightDirection = LEFT;
            break;
        case LEFT:
            rightDirection = UP;
            break;
        case RIGHT:
            rightDirection = DOWN;
            break;
        }
        if (isFree(rightDirection))
        {
            currentDirection = rightDirection;
            moveForward();
        }
        else
        {
            // If left, forward, and right are all blocked, turn around
            switch (currentDirection)
            {
            case UP:
                currentDirection = DOWN;
                break;
            case DOWN:
                currentDirection = UP;
                break;
            case LEFT:
                currentDirection = RIGHT;
                break;
            case RIGHT:
                currentDirection = LEFT;
                break;
            }
            moveForward();
        }
    }
}
