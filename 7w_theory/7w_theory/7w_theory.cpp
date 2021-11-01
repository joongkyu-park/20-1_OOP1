#include <iostream>
using namespace std;


// 1번

//void callbyV(int var) {
//    cout << "add of var in calbyV(): " << &var << endl;
//}
//void callbyR(int& var) {
//    cout << "add of var in callbyR(): " << &var << endl;
//}
//
//int main()
//{
//    int var = 10;
//    cout << "add of local value var: " << &var << endl;
//    callbyV(var);
//    cout << "add of local value var after callbyV(): " << &var << endl;
//    callbyR(var);
//    cout << "add of local value var after callbyR(): " << &var << endl;
//    return 0;
//}


// 2번
//void swap(int& a, int&b) 
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int a;
//	int b;
//	cin >> a >> b;
//	cout << "Before swapping - a:" << a << ", b:" << b << endl;
//	swap(a, b);
//	cout << "After swapping - a:" << a << ", b:" << b;
//}


// 3번

//int Abs(int x)
//{
//	int a = x;
//	if (x < 0)
//	{
//		a = -x;
//	}
//
//	return a;
//}
//double Abs(double x)
//{
//	double a = x;
//	if (x < 0)
//	{
//		a = -x;
//	}
//
//	return a;
//}
//long Abs(long x)
//{
//	long a = x;
//	if (x < 0)
//	{
//		a = -x;
//	}
//
//	return a;
//}
//int main()
//{
//	int a;
//	double b;
//	long c;
//
//	cin >> a >> b >> c;
//
//	cout << "abs int num of " << a << " = " << Abs(a) << endl;
//	cout << "abs double num of " << b << " = " << Abs(b) << endl;
//	cout << "abs long num of " << c << " = " << Abs(c) << endl;
//}


// 4번

template < typename T>
T Abs(T value1)
{
	T value2 = value1;
	if (value1 < 0)
		{
			value2 = -value1;
		}

	return value2;
}
int main()
{
	int a;
	double b;
	long c;

	cin >> a >> b >> c;

	cout << "abs int num of " << a << " = " << Abs(a) << endl;
	cout << "abs double num of " << b << " = " << Abs(b) << endl;
	cout << "abs long num of " << c << " = " << Abs(c) << endl;
}
