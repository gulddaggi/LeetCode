#include <iostream>

int main()
{
	std::string haystack;
	std::string needle;

	std::cout << "haystack :";
	std::cin >> haystack;

	std::cout << "needle :";
	std::cin >> needle;

	int ans = -1;

	for (int i = 0; i < haystack.size();)
	{
		int a = i;
		int b = 0;

		while (b < needle.size())
		{
			if (haystack[a] == needle[b])
			{
				++a;
				++b;
			}
			else
			{
				//std::cout << "i = " << a << "���� ����ġ\n";
				int j = i+1;
				i += b + 1;
				for (;j <= a; j++)
				{
					std::cout << j << '\n';

					if (haystack[j] == needle[0])
					{
						//std::cout << "i = " << j << "���� ��Ž��\n";
						i = j;
						break;
					}
				}

				break;
			}
		}

		if (b == needle.size())
		{
			//std::cout << "���� �Ǻ�";
			i = a;
			ans = i - b;
			break;
		}
	}

	std::cout << ans;
}