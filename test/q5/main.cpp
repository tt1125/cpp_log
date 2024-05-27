#include <iostream>
using namespace std;

int main()
{
    int num2, num1, num3;
    cin >> num3;
    for (num2 = 1000; num2 <= num3; num2++)
    {
        int isPrimeNumber = true;
        for (int i = 2; i <= num2 / 2; i++)
        {
            if (num2 % i == 0)
            {
                isPrimeNumber = false;
                break;
            }
        }
        if (isPrimeNumber == true)
        {
            num1 = num2 / 10;
            if (num1 == 1)
            {
                isPrimeNumber = false;
            }
            for (int i = 2; i <= num1 / 2; i++)
            {
                if (num1 % i == 0)
                {
                    isPrimeNumber = false;
                    break;
                }
            }
            num1 = num2 / 100;
            if (num1 == 1)
            {
                isPrimeNumber = false;
            }
            for (int i = 2; i <= num1 / 2; i++)
            {
                if (num1 % i == 0)
                {
                    isPrimeNumber = false;
                    break;
                }
            }
            num1 = num2 / 1000;
            if (num1 == 1)
            {
                isPrimeNumber = false;
            }
            for (int i = 2; i <= num1 / 2; i++)
            {
                if (num1 % i == 0)
                {
                    isPrimeNumber = false;
                    break;
                }
            }
        }
        if (isPrimeNumber == true)
        {
            cout << num2 << endl;
        }
    }
    return 0;
}