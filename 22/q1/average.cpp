#include <iostream>
using namespace std;

int main()
{
    double point[3];
    double record;
    cin >> point[0] >> point[1] >> point[2];

    /*回答部分*/

    if (point[0] <= point[1] && point[0] <= point[2])
    {
        record = (point[1] + point[2]) / 2.0;
    }
    else if (point[1] <= point[0] && point[1] <= point[2])
    {
        record = (point[0] + point[2]) / 2.0;
    }
    else
    {
        record = (point[0] + point[1]) / 2.0;
    }

    cout << record << endl;
}