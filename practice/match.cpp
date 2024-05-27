#include <iostream>
#include <string>
using namespace std;

int main()
{
    int match1 = 0, match2 = 0;
    int answer[4], input[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> answer[i];
    }
    while (match1 != 4)
    {
        match1 = 0;
        match2 = 0;

        for (int i = 0; i < 4; i++)
        {
            cin >> input[i];
        }

        // 一致する数字の数をカウントします
        for (int i = 0; i < 4; i++)
        {
            if (answer[i] == input[i])
            {
                match1++;
            }
            for (int j = 0; j < 4; j++)
            {
                if (i != j && answer[i] == input[j])
                { // iとjが異なる場合のみ一致をカウントします
                    match2++;
                }
            }
        }

        // 結果を出力します
        cout << match1 << endl
             << match2 << endl;
    }

    cout << "Hit!" << endl;
    return 0;
}