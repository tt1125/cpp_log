#include <iostream>
using namespace std;

int main()
{
    int array[10];

    // ユーザーからの入力を受け取る
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }

    bool swapped;

    do
    {
        swapped = false;

        for (int i = 0; i < 9; i++)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = true;
            }
        }
    } while (swapped);

    int left = 0;
    int right = 9;
    int key;
    cin >> key;

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (array[mid] == key)
        {
            cout << mid + 1 << endl;
            break;
        }
        else if (array[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return 0;
}
