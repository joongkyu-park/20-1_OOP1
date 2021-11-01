#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	// quiz 2

	srand((unsigned int)time(NULL));

	int arr1[10];
	int arr2[5] = { -1,-1,-1,-1,-1 };

	for (int i = 0; i <= 9; i++)
	{
		arr1[i] = rand() % 5;
	}

	arr2[0] = arr1[0];

	for (int j = 1; j <= 4; j++)
	{
		for (int i = 1; i <= 9; i++)
		{
			int flag = 0;

			for (int k = 0;k <= 4; k++)
			{
				if (arr1[i] == arr2[k]) {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				arr2[j] = arr1[i];
				break;
			}
		}
	}

	for (int i = 0; i < 10; i++)
		cout << arr1[i] << " ";
	cout << endl;

	for (int i = 0; i <= 4; i++)
	{
		if (arr2[i] != -1)
			cout << arr2[i] << " ";
	}


}
