#include <iostream>
#include <vector>

int main()
{
	int count;
	std::vector<int> digits;

	std::cout << "count : ";
	std::cin >> count;

	for (int i = 0; i < count; i++)
	{
		int a = 0;
		std::cin >> a;
		digits.push_back(a);
	}

	std::cout << "digits : ";
	for (int i = 0; i < digits.size(); i++)
	{
		std::cout << digits[i] << " ";
	}
	std::cout << '\n';

	int right = digits.size() - 1;

	while (true)
	{
		++digits[right];

		if (digits[right] == 10)
		{
			digits[right] = 0;
			if (right == 0)
			{
				digits[right] = 1;
				digits.push_back(0);
				break;
			}
			else
			{
				--right;
			}
		}
		else
		{
			break;
		}
	}

	std::cout << "output : ";
	for (int i = 0; i < digits.size(); i++)
	{
		std::cout << digits[i] << " ";
	}
	std::cout << '\n';

}