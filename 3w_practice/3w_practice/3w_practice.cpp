#include <iostream>

using namespace std;

int main()
{
	// quiz 1

	int num1;  // first number to be read from user
	int num2;  // second number to be read from user

	cout << "Enter two integers, and I will tell you\n"
		<< "the relationships they satisfy: ";
	cin >> num1 >> num2;   // read two integers

	if (num1 == num2)
		cout << num1 << " is equal to " << num2 << endl;
	else if (num1 != num2)
		cout << num1 << " is not equal to " << num2 << endl;
	if (num1 < num2)
		cout << num1 << " is less than " << num2 << endl;
	else if (num1 > num2)
		cout << num1 << " is greater than " << num2 << endl;
	if (num1 <= num2)
		cout << num1 << " is less than or equal to "
		<< num2 << endl;
	else if (num1 >= num2)
		cout << num1 << " is greater than or equal to "
		<< num2 << endl;
	return 0;   // indicate that program ended successfully


// quiz 2

	int a, b, c;

	cout << "Enter 3 numbers : ";
	cin >> a >> b >> c;
	cout << "The largest number is : "
		<< ((a > b) ? ((a > c) ? a : c) :
			((b > c) ? b : c));

	// 3항 연산자로 max 찍기
	/* max 변수 만들어서 하나하나 비교하는 법도 가능(실습풀이)
	int max;
	max = a > b ? a : b;
	max = max > c ? max : c;
	*/


	// quiz 3

	int odd = 0;
	int even = 0;
	int oddSum = 0;
	int evenSum = 0;

	int num;

	cin >> num;

	if (num % 2 == 1) {
		odd = num;
		while (odd > 0) {
			oddSum = odd + oddSum;
			odd = odd - 2;
		}
		even = num - 1;
		while (even > 0) {
			evenSum = even + evenSum;
			even = even - 2;
		}
	}
	else {
		even = num;
		while (even > 0) {
			evenSum = even + evenSum;
			even = even - 2;
		}
		odd = num - 1;
		while (odd > 0) {
			oddSum = odd + oddSum;
			odd = odd - 2;
		}
	}

	cout << "Sum of all even num 1 to " << num << " : " << evenSum << endl;
	cout << "Sum of all odd num 1 to " << num << " : " << oddSum;

	/* 입력 숫자가 1이하일 때 경고문 출력 후 종료하기
	if (num <=1) {
		cout << " num should > 1" << endl;
		exit(1); // 해당 프로그램 종료
	}
	*/
	// 실습 풀이에선 1부터 num까지 쭉 더함. 전체를 While문으로.
		// unsigned int : 무조건 양의 정수


	// quiz 4

	int num;
	int num2;

	cout << "please enter one number : ";
	cin >> num;

	num2 = num;

	while (num > 0) { //num으로 순환 횟수 컨트롤
		while (num2 > 0) { //num2로 한 라인에 찍히는 별 컨트롤
			cout << "*";
			num2 = num2 - 1; //num2를 줄여서 별 갯수 컨트롤
		}
		cout << "\n";
		num = num - 1; //num을 줄여 순환이 멈추는 시점 컨트롤
		num2 = num;
	}
	// 입력받은 수로 while의 반복횟수를 결정하는 법


	// quiz 5


	int num;
	int blank;
	int star;
	int sub;

	cin >> num;

	blank = num;
	star = 1;
	sub = 1;

	while (num > 0) {
		while (blank > 1) {
			cout << " ";
			blank = blank - 1;
		}
		while (star > 0) {
			cout << "*";
			star = star - 1;
		}
		cout << "\n";
		num = num - 1;
		sub = sub + 1;
		star = sub * 2 - 1;
		blank = num;
	}

	// sub를 활용하여 홀수개의 별을 찍은 박중규.. 기억하자
	// 근데 그냥 while( star*2+1) 로 해도 됨 (실습풀이)

}
