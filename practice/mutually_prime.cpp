#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    // 1でない最小の数までチェック
    for (int i = 2; i <= min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            cout << "互いに素でない";
            return 0; // 互いに素でない場合、プログラムを終了
        }
    }

    // ループが完了したら、互いに素であると出力
    cout << "互いに素である";
    return 0;
}
