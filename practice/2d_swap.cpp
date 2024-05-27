#include <iostream>
using namespace std;

#define ROWNO 5
#define COLNO 4

int main()
{
    int matrix[ROWNO][COLNO] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20},
    };

    int a, b, c;
    cin >> a;
    cin >> b >> c; // 複数の変数を入力するために >> 演算子を使います
    b -= 1;
    c -= 1;
    if (a == 0)
    {
        swap(matrix[b], matrix[c]); // swap関数を使って配列の要素を交換します
    }
    else
    {
        for (int i = 0; i < ROWNO; i++)
        {
            swap(matrix[i][b], matrix[i][c]); // swap関数を使って配列の要素を交換します
        }
    }

    for (int i = 0; i < ROWNO; i++)
    {
        for (int j = 0; j < COLNO; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
