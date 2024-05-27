#include <iostream>
using namespace std;

int values[6] = {500, 100, 50, 10, 5, 1};
int coins[6];

// 関数の宣言を修正し、適切な場所に移動
void func(int index, int &pay)
{
    if (pay >= values[index])
    {
        coins[index] = pay / values[index];  // 支払うコインの数を計算
        pay -= coins[index] * values[index]; // 残りの支払額を更新
    }
    cout << coins[index] << " ";
}

int main()
{
    int pay;
    cin >> pay;

    for (int i = 0; i < 6; i++)
    {
        func(i, pay); // 'func' 関数の呼び出しにセミコロンを追加し、参照として 'pay' を渡す
    }

    return 0; // 正常終了を示すために 0 を返却
}
