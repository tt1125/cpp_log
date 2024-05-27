#include <iostream>
using namespace std;

int main()
{
    int points;           // 違反点数
    int totalPoints = 0;  // これまでの違反点数の累積点数
    int noViolations = 0; // 無違反年数（違反0点の年数）

    for (int year = 1; year <= 10; year++)
    {
        cout << year << "年目　違反点数 ";
        cin >> points;
        totalPoints += points;

        if (points == 0)
        {
            noViolations++;

            if (noViolations >= 3)
            {
                totalPoints = 0;
                cout << "_______状態：ゴールドドライバー";
            }
            else
            {
                cout << "_______状態：優良ドライバー";
            }
        }
        else if (points > 0)
        {
            noViolations = 0;

            if (totalPoints <= 4)
            {
                cout << "_______状態：一般ドライバー";
            }
            else if (totalPoints <= 9)
            {
                cout << "_______状態：免停ドライバー" << "，累積点数：" << totalPoints << endl;
                totalPoints = 0; // 免停中に累積点数をリセット
                year++;
                if (year <= 10)
                {
                    cout << year << "年目　状態：免停中________" << endl;
                }
            }
            else if (totalPoints >= 10)
            {
                cout << "免許取消";
                return 0;
            }
        }

        cout << "，累積点数：" << totalPoints << endl;
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int points;           // 違反点数
//     int totalPoints = 0;  // これまでの違反点数の累積点数
//     int noViolations = 0; // 無違反年数（違反0点の年数）

//     for (int year = 1; year <= 10; year++)
//     {
//         cout << year << "年目　違反点数 ";
//         cin >> points;
//         totalPoints += points;

//         if (points == 0)
//         {
//             noViolations++;
//         }
//         if (noViolations >= 3)
//         {
//             cout << "_______状態：ゴールドドライバー";
//             totalPoints = 0;
//         }
//         else if (points == 0)
//         {
//             cout << "_______状態：優良ドライバー";
//         }
//         else if (points >= 1 && totalPoints <= 4)
//         {
//             cout << "_______状態：一般ドライバー";
//         }
//         else if (totalPoints >= 5 && totalPoints <= 9)
//         {
//             totalPoints = 0;
//             cout << "_______状態：免停ドライバー" << "，累積点数：" << totalPoints << endl;
//             year++;
//             cout << year << "年目　状態：免停中________";
//         }
//         else if (totalPoints >= 10)
//         {
//             cout << "免許取消";
//             return 0;
//         }

//         cout << "，累積点数：" << totalPoints << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int points;           // 違反点数
//     int totalPoints = 0;  // これまでの違反点数の累積点数
//     int noViolations = 0; // 無違反年数（違反0点の年数）

//     for (int year = 1; year <= 10; year++)
//     {

//         cout << year << "年目　違反点数 ";
//         cin >> points;
//         totalPoints += points;

//         if (points == 0)
//         {
//             noViolations++;
//             if (noViolations >= 3)
//             {
//                 cout << "_______状態：ゴールドドライバー";
//                 totalPoints = 0;
//             }
//             else
//             {
//                 cout << "_______状態：優良ドライバー";
//             }
//         }

//         else if (totalPoints >= 10)
//         {

//             cout << "免許取消";
//             return 0;
//         }

//         else if (totalPoints >= 5 && totalPoints <= 9)
//         {

//             totalPoints = 0;
//             cout << "_______状態：免停ドライバー" << "，累積点数：" << totalPoints << endl;
//             year++;
//             cout << year << "年目　状態：免停中________";
//         }

//         else
//         {
//             cout << "_______状態：一般ドライバー";
//         }
//         cout << "，累積点数：" << totalPoints << endl;
//     }
//     return 0;
// }