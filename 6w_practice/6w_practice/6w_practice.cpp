#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

// 6주차 실습 퀴즈 12150981 박중규

//quiz 1

bool isPrimeNumber(int n) {
	for (int i = 2; i < n; i++)
		if (n % i == 0) return false;
	return true;
}
int getNextPrime() {
	static int prime = 1;
	while (isPrimeNumber(++prime) == false);
	return prime;
}
void main()
{
	for (int i = 0; i < 10; i++) {
		cout << getNextPrime() << endl;
	}

}


//quiz 2

//void sumofsquares(int, int);
//
//int main()
//{
//	int mean = 2;
//	for (int x = 2; x < 10; x++){
//		sumofsquares(x, mean);
//	}
//
//	return 0;
//}
//
//void sumofsquares(int x, int mean) {
//	static int nStatic = 0;
//
//	nStatic	+= (x - mean) * (x - mean);
//
//		cout << "Sum of squares in " << x << ": " << nStatic << endl;
//}


//quiz 3

//void sumofsquares(int, int);
//
//int main()
//{
//	srand(time(0));
//
//	int mean;
//	cout << "Input your mean : ";
//	cin >> mean;
//
//	for (int i = 1; i <= 10; i++) {
//		int x = (1 + rand() % 100);
//		sumofsquares(x, mean);
//	}
//
//	return 0;
//}
//
//void sumofsquares(int x, int mean) {
//	static int nStatic = 0;
//
//	nStatic += (x - mean) * (x - mean);
//
//	cout << "Sum of squares in " << x << ": " << nStatic << endl;
//}


//quiz 4

//void decimalToBinary(int);
//
//int main()
//{
//	int num;
//	cout << "Input decimal num : ";
//	cin >> num;
//
//	decimalToBinary(num);
//
//}
//
//void decimalToBinary(int x)
//{
//	cout << "to binary.. : ";
//	int result = 0;
//	for (int i = 1; x > 0; i *= 10)
//	{
//		int binary = x % 2;
//		result += binary * i;
//		x = x / 2;
//	}
//	cout << result;
//	
//}


//quiz 5

//void reverse(int);
//
//int main()
//{
//	int num;
//	cout << "임의의 정수를 입력하세요 : ";
//	cin >> num;
//
//	reverse(num);
//	
//}
//
//void reverse(int x)
//{
//	cout << x << "를 거꾸로 출력하면 ";
//	while (x) {
//		cout << ("%d", x % 10);
//		x = x / 10;
//	}
//	cout << "입니다." << endl;
//}


//quiz 6

//void numberTop(int);
//
//int main()
//{
//	int num;
//	cout << "Input integer number : ";
//	cin >> num;
//	
//	numberTop(num);
//}
//
//void numberTop(int x)
//{
//	for (int i = 1;i <= x;i++)
//	{
//		for (int j = 1; j <= x - i; j++)
//		{
//			cout << " ";
//		}
//		for (int k = i; k > 0; k--)
//		{
//			cout << k;
//		}
//		for (int l = 2; l <= i;l++)
//		{
//			cout << l;
//		}
//		cout << endl;
//	}
//}