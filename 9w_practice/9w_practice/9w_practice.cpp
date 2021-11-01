#include <iostream>
#include <cmath>

using namespace std;

// quiz 1

//template<typename T>
//void copyAndPrint(T a, T b, int c)
//{
//	cout << "befoe copy,\na : ";
//	for (int i = 0; i <= c-1; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << "\n" << "b : ";
//	for (int i = 0; i <= c-1; i++)
//	{
//		cout << b[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i<=c-1; i++)
//	{
//		b[i] = a[i];
//	}
//	cout << "after copy,\na : ";
//	for (int i = 0; i <= c - 1; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << "\n" << "b : ";
//	for (int i = 0; i <= c - 1; i++)
//	{
//		cout << b[i] << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	const int arraysize = 5;
//	int a[] = { 1,2,3,4,5 };
//	int b[arraysize] = { 0 };
//
//	copyAndPrint(a, b, arraysize);
//
//}


// quiz 2

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//
//	for (int i = 0; i <= 4; i++)
//	{
//		for (int j = 0; j <= 4; j++)
//		{
//			for (int k = 0; k <= 4; k++)
//			{
//				cout << a[i] << a[j] << a[k] << " ";
//			}
//		}
//
//	}
//}


// quiz 3

//void progression(char x, int a, int d, int n)
//{
//	if (x == 'A')
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			cout << a + (i - 1) * d << " ";
//		}
//		
//	}
//	else if (x == 'G')
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			cout << a * pow(d,i-1) << " ";
//		}
//	}
//}
//int main()
//{
//	int a, d, n;
//	char x;
//
//	cout << "Arithmetic(A)과 Geometric(G) 중 하나를 선택 하세요 : ";
//	cin >> x;
//	cout << "int 타입의 a, d, n 값을 순차적으로 입력하세요 : ";
//	cin >> a >> d >> n;
//
//	progression(x, a, d, n);
//}


// quiz 4

bool checkend(char array[])
{
	for (int i = 0;i < 10;i++)
		if (array[i] == ';')
			return false;
}
int main()
{
	char a[10]; // 10개로 제한한다5
	int coun = 0;
	cout << "Please input sentence: ";
	while (cin >> a) {
		if (checkend(a)) { // 단순히 끝인지 아닌지 판단. (;이 입력되었는지 안되었는지)
			if (a[0] == 's') {
				if (a[1] == 'u') {
					if (a[2] == 'n') {
						if (a[3] == 'n') {
							if (a[4] == 'y') {
								coun++;
							}
						}
					}
				}
			}
		}
		else break;
	}
	cout << "there are " << coun << " sunny" << endl;
	return 0;
}
	