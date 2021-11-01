#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	// quiz 1

	srand((unsigned int)time(NULL));

	int arr[20];

	for (int i = 0; i <= 19; i++)
	{
		arr[i] = rand() % 11 - 5;
	}
	
	for (int i = 0; i <= 19; i++)
	{
		for (int j = 0; j <= 19; j++)
		{
			for (int k = 0; k <= 19; k++)
			{
				if (i != j && i != k && j != k)
				{
					if (arr[i] + arr[j] + arr[k] == 1)
					{
						cout << "[" << arr[i] << ", " << arr[j] << ", " << arr[k] << "] ";
					}
				}
			}
		}
	}

}