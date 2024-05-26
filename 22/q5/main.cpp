#include <iostream>
using namespace std;

int main()
{
    double data[5][6] = {
        {0, 13, 19, 5, 7, 19},
        {16, 15, 3, 15, 20, 18},
        {1, 3, 14, 17, 11, 15},
        {13, 16, 19, 5, 18, 16},
        {19, 13, 10, 5, 10, 18}};
    int a, b, n;
    double answer = 0.0;
    cin >> a >> b >> n;

    /*回答部分*/

    switch (a)
    {
    case 1:
        switch (b)
        {
        case 1:
        {
            double sum = 0;
            for (int i = 0; i < 6; i++)
            {
                sum += data[n][i];
            }
            answer = sum / 6;
            break;
        }
        case 2:
        {
            double sum = 0;
            for (int i = 0; i < 5; i++)
            {
                sum += data[i][n];
            }
            answer = sum / 5;
            break;
        }
        }
        break;

    case 2:
        switch (b)
        {
        case 1:
        {
            for (int i = 0; i < 6 - 1; i++)
            {
                for (int j = 0; j < 6 - i - 1; j++)
                {
                    if (data[n][j] > data[n][j + 1])
                    {
                        double tmp = data[n][j];
                        data[n][j] = data[n][j + 1];
                        data[n][j + 1] = tmp;
                    }
                }
            }
            answer = (data[n][2] + data[n][3]) / 2; // Median for 6 elements
            break;
        }
        case 2:
        {
            for (int i = 0; i < 5 - 1; i++)
            {
                for (int j = 0; j < 5 - i - 1; j++)
                {
                    if (data[j][n] > data[j + 1][n])
                    {
                        double tmp = data[j][n];
                        data[j][n] = data[j + 1][n];
                        data[j + 1][n] = tmp;
                    }
                }
            }
            answer = data[2][n]; // Median for 5 elements
            break;
        }
        }
        break;
    }

    cout << answer;
    return 0;
}
