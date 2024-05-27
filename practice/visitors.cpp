#include <iostream>
#include <string>
using namespace std;

int main()
{
    int visitors;
    cin >> visitors;
    int in[visitors], out[visitors], max_count = 0;
    for (int i = 0; i < visitors; i++)
    {
        cin >> in[i] >> out[i];
    }

    for (int i = 0; i < 480; i++)
    {
        int count = 0; // count変数の宣言と初期化を追加しました
        for (int j = 0; j < visitors; j++)
        {
            if ((in[j] <= i) && (out[j] >= i))
            {
                count++;
            }
        }
        if (max_count < count)
        {
            max_count = count;
        }
    }

    // 結果を出力します
    cout << max_count << endl;

    return 0;
}
