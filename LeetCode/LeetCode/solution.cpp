#include <iostream>
#include <math.h>

bool zeroCheck(int num)
{
    while (num != 0)
    {
        if (num % 10 == 0)
        {
            return false;
        }
        else
        {
            num /= 10;
        }
    }
    return true;
}

int main()
{
    int n;
    std::cout << "정수 입력 : ";
    std::cin >> n;

    int a = 1;
    int b = n - a;

    while (true)
    {
        if (zeroCheck(a) && zeroCheck(b))
        {
            std::cout << "a = " << a << ", b = " << b;
            return 0;
        }
        else
        {
            ++a;
            b = n - a;
        }
    }
}
