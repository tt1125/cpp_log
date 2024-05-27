#include <iostream>
using namespace std;

int judge(int x)
{
    for (int j = 2; j < x; j++)
    {
        if (x % j == 0)
        {
            return 0;
        }
    }

    return x;
}

int main()
{
    int number;

    // 2以上1000以下の自然数を入力
    cin >> number;

    // 入力された数字が条件を満たさない場合
    if (number > 1000 || number <= 1)
    {
        cout << "条件を満たさない数字が入力されました．" << endl;
        return 0;
    }

    // 入力した数字までの素数を足し合わせる
    int data = 0;

    /* 回答部分 */

    for (int i = 2; i <= number; i++)
    {
        data += judge(i);
    }

    // ループが完了したら、互いに素であると出力

    // 結果を表示する
    cout << data << endl;

    return 0;
}