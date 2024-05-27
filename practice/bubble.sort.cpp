#include <iostream>
using namespace std;

int main()
{
    int array[10];

    // ユーザーからの入力を受け取る
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }

    // バブルソートアルゴリズム
    bool swapped;
    do
    {
        swapped = false;
        for (int i = 0; i < 9; i++)
        { // 配列の長さ-1まで繰り返す
            if (array[i] > array[i + 1])
            {
                // 隣接要素を交換
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
            }
        }
    } while (swapped); // 交換が発生しなくなるまで繰り返す

    // ソートされた配列を出力
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
