#include <iostream>
#include <cmath>
using namespace std;

#define ROWNO 5
#define COLNO 5

float calculateSquaredError(int matrix1[ROWNO][COLNO], int matrix2[ROWNO][COLNO])
{
    float squaredError = 0.0;
    for (int i = 0; i < ROWNO; ++i)
    {
        for (int j = 0; j < COLNO; ++j)
        {
            squaredError += pow(matrix1[i][j] - matrix2[i][j], 2); // 二乗誤差を加算
        }
    }
    return squaredError;
}

int main()
{
    int matrix[ROWNO][COLNO];
    for (int i = 0; i < ROWNO; ++i)
    {
        for (int j = 0; j < COLNO; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    int matrix1[ROWNO][COLNO] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}};

    int matrix2[ROWNO][COLNO] = {
        {1, 1, 1, 1, 0},
        {1, 0, 0, 0, 1},
        {0, 0, 1, 1, 0},
        {0, 1, 0, 0, 0},
        {1, 1, 1, 1, 1}};

    int matrix3[ROWNO][COLNO] = {
        {1, 1, 1, 1, 0},
        {0, 0, 0, 0, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 0, 0, 1},
        {1, 1, 1, 1, 0}};

    float results[3];

    results[0] = calculateSquaredError(matrix, matrix1);
    results[1] = calculateSquaredError(matrix, matrix2);
    results[2] = calculateSquaredError(matrix, matrix3);

    int ans = 1;

    float minError = results[0];

    for (int i = 0; i < 3; i++)
    {
        if (minError > results[i])
        {
            minError = results[i];
            ans = i + 1;
        };
    }

    cout << ans;

    return 0;
}