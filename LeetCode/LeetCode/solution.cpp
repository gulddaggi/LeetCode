#include <iostream>
#include <math.h>

int main()
{
	int input = 0;
	// 자릿수
	int unit = -1;
	bool product_minus = false;

	if (input >= 2147483647 || input <= -2147483648) input = 0;

	std::cout << "input : ";
	std::cin >> input;

	// 음수 파악
	if (input < 0)
	{
		input = abs(input);
		product_minus = true;
	}

	// 자릿수 판단
	for (int i = 10; i >= 0; i--)
	{
		if ((int)(input / pow(10, i)) > 0)
		{
			unit = i;
			std::cout << "자릿수 : 10^" << unit << '\n';
			break;
		}
	}

	int ans = 0;
	int pass_num = -1;

	if (unit % 2 == 0)
	{
		pass_num = unit / 2;
	} 

	for (int i = unit; i >= 0 ; i--)
	{
		// 해당 자릿수 숫자 추출
		int target = input / pow(10, i);
		std::cout << "target : " << target << '\n';

		// 가운데 자릿수 여부에 따라 변환 작업 수행
		if (i == pass_num)
		{
			std::cout << pow(10, i) << "자릿수 유지\n";
			ans += target * pow(10, i);
			std::cout << "변환값 : " << ans << '\n';
		}
		else
		{
			std::cout << pow(10, i) << "자릿수 반전\n";

			if (target * pow(10, abs(i - unit)) > (pow(2, 31)-1))
			{
				ans = 0;
				break;
			}

			if (ans + (target * pow(10, abs(i - unit))) > (pow(2, 31)-1))
			{
				ans = 0;
				break;
			}

			ans += (target * pow(10, abs(i - unit)));

			std::cout << target * pow(10, i) << "를 " << target * pow(10, abs(i - unit)) << "로 변환\n";
			std::cout << "변환값 : " << ans << '\n';
		}
		
		// 계산된 숫자 차감
		input = input - (target * pow(10, i));
		std::cout << "현재 숫자 : " << input << '\n';
	}

	if (product_minus)
	{
		ans = -ans;
	}

	std::cout << "ans : " << ans;
}