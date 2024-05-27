/* CやC++などシェルに実行結果コード返却を明示する言語を利用する場合 基本的に0を返却してください。 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int s;
    cin >> s;

    if (s < 18)
    {
        cout << "未成年" << endl
             << "飲酒・喫煙不可" << endl;
    }
    else if (s < 20)
    {
        cout << "成人" << endl
             << "飲酒・喫煙不可" << endl;
    }
    else
    {
        cout << "成人" << endl
             << "飲酒・喫煙可" << endl;
    }

    return 0;
}