#include <iostream>
#include <vector>

int main()
{
	int count = 0;

	std::cout << "count :";
	std::cin >> count;

	std::vector<int> nums;

	std::cout << "input :";
	for (int i = 0; i < count; i++)
	{
		int a = 0;
		std::cin >> a;
		nums.push_back(a);
	}

	std::cout << "nums : ";

	for (int i = 0; i < nums.size(); i++)
	{
		std::cout << nums[i] << ' ';
	}

	std::cout << '\n';

	int left = 0;
	for (int right = 0; right < nums.size(); right++)
	{
		if (nums[right] != 0)
		{
			std::swap(nums[left], nums[right]);
			++left;
		}
	}
}