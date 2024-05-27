#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        string out = ""; // 文字列を初期化する
        if (i % 3 == 0)
        {
            out += "Fizz";
        }
        if (i % 5 == 0)
        {
            out += "Buzz";
        }
        if (out.empty())
        {                        // FizzでもBuzzでもない場合
            out += to_string(i); // 数値を文字列に変換して追加する
        }

        cout << out << endl;
    }

    return 0;
}
