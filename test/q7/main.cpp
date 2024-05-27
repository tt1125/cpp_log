/* CやC++などシェルに実行結果コード返却を明示する言語を利用する場合 基本的に0を返却してください。 */
#include <iostream>
#include <string>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (array[i] < array[j])
            {
                int tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
    }

    if (n % 2 == 0)
    {
        cout << (array[n / 2 - 1] + array[n / 2]) / 2;
    }
    else
    {
        cout << array[n / 2 + 1];
    }
    return 0;
}