#include <iostream>
#include<cstdlib>
#include<ctime>
#include<Windows.h>
#include<cassert>
using namespace std;


 // quiz 1

//int gcd(int a, int b) {
//    int result;
//    int temp;
//    if (a < b) {
//        //swap a and b
//        temp = a;
//        a = b;
//        b = temp;
//    }
//    //초기값
//    if (b == 0) {
//        return a;
//    }
//    else {
//        result = gcd(b, a % b); //gcd (a,b) = gcd(b, a%b)   (a > b)
//    }
//    return result;
//}
//int main() {
//    int num1, num2;
//    cout << "input two integers:";
//    cin >> num1 >> num2;
//    
//    //예외상황 방지
//    if (num1 <= 0 || num2 <= 0) {
//        cout << "should num1 >0 & num2 > 0";
//        exit(1);
//    }
//    cout << "gcd(recursion): ";
//    cout << gcd(num1, num2) << endl;
//}


// quiz2

//int rectangle(int x, int y)
//{
//
//}
//int circle(int x)
//{
//
//}
//int triangle(float x, int y)
//{
//
//}
//int main() {
//    int num;
//    cout << "Please select shape 1-rectangle, 2-circle, 3-triangle, : ";
//    cin >> num;
//    switch(num)
//        case 1:
//
//            break;
//        case 2:
//
//            break;
//
//        case 3:
//
//            break;
//        default:
//            break;
//}


// quiz3



// quiz 4

//void toBinary_recursion(int N) {
//    if (N == 0) return;
//    toBinary_recursion(N / 2);
//    cout << N % 2;
//}
//int main() {
//    int N = 0;
//    while (true) {
//        cout << endl << "input N: ";
//        cin >> N;
//
//        if (N < 1) {
//            cout << "should N > 0" << endl;
//            continue;
//        }
//        toBinary_recursion(N);
//    }
//}

// quiz 5

//int main() {
//	srand(unsigned int(NULL));
//
//	int aCount = 0, bCount = 0, cCount = 0, dCount = 0;
//	int x;
//	int count = 100;
//
//	while (count)
//	{
//		x = rand() % 4 + 1;
//		switch (x)
//		{
//		case 1:
//			++aCount;
//			break;
//		case 2:
//			++bCount;
//			break;
//		case 3:
//			++cCount;
//			break;
//		case 4:
//			++dCount;
//			break;
//		default:
//			break;
//		}
//		count -= 1;
//	}
//	cout << aCount << endl;
//	cout << bCount << endl;
//	cout << cCount << endl;
//	cout << dCount << endl;
//
//}


// quiz 6

int main() {

    while (true) {
        long int mytime = (long int)time(NULL);
        mytime %= (60 * 60 * 24);
        int hour, min, sec;
        hour = mytime / (60 * 60);
        mytime %= (60 * 60);
        min = mytime / 60;
        sec = mytime % 60;
        hour + 9 > 24 ? hour = hour + 9 - 24 : hour = hour + 9; //표준시간대라 한국시간대로 바꿔주는거
        cout << hour << "h " << min << "min " << sec << "sec" << "\r";

        Sleep(1000); //1000밀리세컨드 쉬고 다시 while문 돌아간다는 뜻
    }
}