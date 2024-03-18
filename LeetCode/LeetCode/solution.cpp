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

	int end = nums.size();

	for (int i = 0; i < nums.size(); i++)
	{
		if (i > 0 && nums[i-1] == 0)
		{
			--i;
		}

		if (nums[i] == 0)
		{
			for (int j = i; j < end-1; j++)
			{
				std::cout << j << "와 " << j + 1 << " 인덱스 교환\n";
				int tmp = nums[j+1];
				nums[j+1] = nums[j];
				nums[j] = tmp;
			}

			std::cout << "정렬 결과 :";
			for (int j = 0; j < nums.size(); j++)
			{
				std::cout << nums[j] << ' ';
			}
			std::cout << '\n';

			--end;
		}

		std::cout << "정렬 결과 :";
		for (int j = 0; j < nums.size(); j++)
		{
			std::cout << nums[j] << ' ';
		}
		std::cout << '\n';

		if (end == 0)
		{
			break;
		}

	}
}