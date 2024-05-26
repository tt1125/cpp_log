#include <iostream>
using namespace std;

int main()
{
    double data[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> data[i];
    }

    /*回答部分*/

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {

            if (data[i] < data[j])
            {
                int tmp = data[j];
                data[j] = data[i];
                data[i] = tmp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << data[i] << endl;
    }
}
