#include <iostream>
#include <string>
using namespace std;

int main()
{

    // 三角形判定関数

    int angle1, angle2, angle3;
    cin >> angle1 >> angle2 >> angle3; // 三角形の角度を入力

    if (angle1 + angle2 + angle3 != 180) // 三角形の角度の合計が180度でない場合
    {
        cout << "三角形ではない" << endl; // 三角形にならない場合
        return 0;
    }
    else if (angle1 == 90 || angle2 == 90 || angle3 == 90) // 三角形の角度が60度の場合
    {
        cout << "直角三角形" << endl; // 直角三角形の場合
        return 0;
    }
    else if (angle1 < 90 && angle2 < 90 && angle3 < 90) // 三角形の角度が60度の場合
    {
        cout << "鋭角三角形" << endl; // 鋭角三角形の場合
        return 0;
    }
    else // 三角形の角度が60度の場合
    {
        cout << "鈍角三角形" << endl; // 鈍角三角形の場合
        return 0;
    }
}