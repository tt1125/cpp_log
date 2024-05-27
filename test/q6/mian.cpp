/* CやC++などシェルに実行結果コード返却を明示する言語を利用する場合 基本的に0を返却してください。 */
#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int max;
    cin >> max;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        if (max < x)
        {
            max = x;
        }
    }
    cout << max << endl;
    return 0;
}