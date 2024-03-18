#include <iostream>
#include <math.h>

int main()
{
	int input = 0;
	// �ڸ���
	int unit = -1;
	bool product_minus = false;

	if (input >= 2147483647 || input <= -2147483648) input = 0;

	std::cout << "input : ";
	std::cin >> input;

	// ���� �ľ�
	if (input < 0)
	{
		input = abs(input);
		product_minus = true;
	}

	// �ڸ��� �Ǵ�
	for (int i = 10; i >= 0; i--)
	{
		if ((int)(input / pow(10, i)) > 0)
		{
			unit = i;
			std::cout << "�ڸ��� : 10^" << unit << '\n';
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
		// �ش� �ڸ��� ���� ����
		int target = input / pow(10, i);
		std::cout << "target : " << target << '\n';

		// ��� �ڸ��� ���ο� ���� ��ȯ �۾� ����
		if (i == pass_num)
		{
			std::cout << pow(10, i) << "�ڸ��� ����\n";
			ans += target * pow(10, i);
			std::cout << "��ȯ�� : " << ans << '\n';
		}
		else
		{
			std::cout << pow(10, i) << "�ڸ��� ����\n";

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

			std::cout << target * pow(10, i) << "�� " << target * pow(10, abs(i - unit)) << "�� ��ȯ\n";
			std::cout << "��ȯ�� : " << ans << '\n';
		}
		
		// ���� ���� ����
		input = input - (target * pow(10, i));
		std::cout << "���� ���� : " << input << '\n';
	}

	if (product_minus)
	{
		ans = -ans;
	}

	std::cout << "ans : " << ans;
}