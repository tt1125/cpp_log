#include <iostream>
using namespace std;

int main()
{
    int point, pattern = 0;

    // Read the input point value
    cin >> point;

    // Initialize the dartboard points array
    int board[62];
    for (int i = 0; i <= 20; i++)
    {
        board[i] = i; // Single points 0 to 20
    }
    for (int i = 21; i <= 40; i++)
    {
        board[i] = (i - 20) * 2; // Double points 2 to 40
    }
    for (int i = 41; i <= 60; i++)
    {
        board[i] = (i - 40) * 3; // Triple points 3 to 60
    }
    board[61] = 50; // Bullseye worth 50 points

    // Check all combinations of three darts
    for (int i = 0; i < 62; i++)
    {
        for (int j = 0; j < 62; j++)
        {
            for (int k = 0; k < 62; k++)
            {
                if (board[i] + board[j] + board[k] == point)
                {
                    pattern++;
                }
            }
        }
    }

    // Output the number of patterns found
    cout << pattern << endl;

    return 0;
}
