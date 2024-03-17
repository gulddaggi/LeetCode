#include <iostream>

int main()
{
	std::string s;

	std::cout << "input s :";
	std::cin >> s;

	int thr = 1;
	bool ans = false;

	while (thr < s.size())
	{
		std::cout << thr << '\n';

		if (s.size() % thr != 0)
		{
			++thr;
			continue;
		}

		std::string a = s.substr(0, thr);
		std::cout << "string :" << a << '\n';

		for (int i = 1; i < s.size() / thr; i++)
		{
			std::string tmp = s.substr(i * thr, thr);

			for (int j = 0; j < a.size(); j++)
			{
				std::cout << a[j] << "¿Í " << tmp[j] << '\n';
				if (a[j] != tmp[j])
				{
					ans = false;
					break;
				}
				else
				{
					ans = true;
				}
			}

			if (!ans)
			{
				break;
			}
		}


		if (ans)
		{
			std::cout << "substring\n";
			break;
		}
		else
		{
			++thr;
		}
	}

	if (ans)
	{
		std::cout << "true";
	}
	else
	{
		std::cout << "false";
	}
}