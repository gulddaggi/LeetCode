#include <iostream>
#include <vector>

int main()
{
	int count = 0;
	std::vector<int> nums;

	std::cout << "count : ";
	std::cin >> count;

	std::cout << "input : ";
	for (int i = 0; i < count; i++)
	{
		int a = 0;
		std::cin >> a;
		nums.push_back(a);
	}


	std::cout << "nums : ";
	for (int i = 0; i < nums.size(); i++)
	{
		std::cout << nums[i] << " ";
	}
	std::cout << '\n';

	int ans = 1;

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[i] < 0)
		{
			ans *= -1;
		}
		else if (nums[i] == 0)
		{
			ans = 0;
			break;
		}
	}

	std::cout << "output : " << ans;

}