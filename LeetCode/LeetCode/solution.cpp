#include <iostream>
#include <istream>
#include <string>
#include <vector>
#include <sstream>

int main()
{
	std::string s;
	std::string buffer;
	
	std::getline(std::cin, s, '\n');

	std::istringstream ss(s);
	std::vector<std::string> sts;

	int ans = 0;

	while (std::getline(ss, buffer,' '))
	{
		if (buffer.length() != 0)
		{
			ans = buffer.length();
		}
	}

	std::cout << ans;
}