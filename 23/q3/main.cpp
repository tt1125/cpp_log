#include <iostream>
#define N 10
using namespace std;

int main()
{
    int nums[N];

    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    // 奇数を昇順にソートして出力
    for (int i = 0; i < N; i++)
    {
        if (nums[i] % 2 == 1)
        {
            int minIndex = i;
            for (int j = i + 1; j < N; j++)
            {
                if (nums[j] % 2 == 1 && nums[j] < nums[minIndex])
                {
                    minIndex = j;
                }
            }
            int temp = nums[i];
            nums[i] = nums[minIndex];
            nums[minIndex] = temp;
            cout << nums[i] << ",";
        }
    }

    // 偶数を降順にソートして出力
    for (int i = N - 1; i >= 0; i--)
    {
        if (nums[i] % 2 == 0)
        {
            int maxIndex = i;
            for (int j = i - 1; j >= 0; j--)
            {
                if (nums[j] % 2 == 0 && nums[j] > nums[maxIndex])
                {
                    maxIndex = j;
                }
            }
            int temp = nums[i];
            nums[i] = nums[maxIndex];
            nums[maxIndex] = temp;
            cout << nums[i] << ",";
        }
    }
}