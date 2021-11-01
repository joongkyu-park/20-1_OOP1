#include <iostream>

using namespace std;

int main()
{
	// 1번

	/*char input[100];
	char myArray[100];
	int temp = 0;
	int flag = 0;
	cin >> input;

	for (int i = 0; i < 100;i++)
	{
		flag = 0;
		for (int j = 0; j < 100; j++)
		{
			if (myArray[j] == input[i])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			myArray[temp] = input[i];
			temp += 1;
		}
	}
	
	cout << myArray;*/


	// 2번

	char input[11];

	char temp;

	cin >> input;

	for (int n = 0; n < 9; n++)
	{
		for (int i = 0; i < 9;i++)
		{
			if (input[i] > input[i + 1])
			{
				temp = input[i + 1];
				input[i + 1] = input[i];
				input[i] = temp;
			}
		}
	}

	cout << input;
}

