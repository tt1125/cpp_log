#include <iostream>
#include <string>
using namespace std;

int main()
{
    int can1 = 0;
    int can2 = 0;
    int can3 = 0;
    int other = 0;

    while (true)
    {
        int holder;
        cin >> holder;
        if (holder == 1)
        {
            can1++;
        }
        else if (holder == 2)
        {
            can2++;
        }
        else if (holder == 3)
        {
            can3++;
        }
        else if (holder == 999)
        {
            break; // ループを抜ける
        }
        else
        {
            other++;
        }
    }

    // 各候補者の票数を '*' で表示
    cout << string(can1, '*') << endl;
    cout << string(can2, '*') << endl;
    cout << string(can3, '*') << endl;
    // その他の票数を '+' で表示
    cout << string(other, '+') << endl;

    return 0;
}
