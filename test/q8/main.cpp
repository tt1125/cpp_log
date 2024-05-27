/* CやC++などシェルに実行結果コード返却を明示する言語を利用する場合 基本的に0を返却してください。 */
#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;
    cin >> n;
    if (n >= 10 && n <= 30)
    {
        if (n == 20)
        {
            cout << "OK lucky" << endl;
        }
        else
        {
            cout << "OK" << endl;
        }
    }
    else if (n < 10)
    {
        cout << "too small" << endl;
    }
    else if (n > 30)
    {
        cout << "too large" << endl;
    }

    return 0;
}