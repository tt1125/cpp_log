#include <iostream>
#include <vector>
#include <cmath>

// 素因数分解を行う関数
std::vector<int> primeFactors(int n)
{
    std::vector<int> factors;

    // 2で割り続ける
    while (n % 2 == 0)
    {
        factors.push_back(2);
        n /= 2;
    }

    // 奇数で割り続ける
    for (int i = 3; i <= std::sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            factors.push_back(i);
            n /= i;
        }
    }

    // 最後に残った数が素数である場合
    if (n > 2)
    {
        factors.push_back(n);
    }

    return factors;
}

// 素因数を一意にする関数
std::vector<int> uniquePrimeFactors(const std::vector<int> &factors)
{
    std::vector<int> uniqueFactors;
    for (int factor : factors)
    {
        if (std::find(uniqueFactors.begin(), uniqueFactors.end(), factor) == uniqueFactors.end())
        {
            uniqueFactors.push_back(factor);
        }
    }
    return uniqueFactors;
}

int main()
{
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    std::vector<int> factors = primeFactors(n);
    std::vector<int> uniqueFactors = uniquePrimeFactors(factors);

    std::cout << "Prime factors of " << n << " are: ";
    for (int factor : uniqueFactors)
    {
        std::cout << factor << " ";
    }
    std::cout << std::endl;

    return 0;
}
