#include <iostream>
#include <iomanip>

using namespace std;

// 1번

//struct Time {
//    int hour;
//    int minute;
//    int second; // 구조체 안에서 member의 default 값을 정할 수 도 있다.
//};
//
//void printUniversal(const Time&);
//void printStandard(const Time&);
//
//int main()
//{
//    Time dinnerTime;
//
//    dinnerTime.hour = 18;
//    dinnerTime.minute = 30;
//    dinnerTime.second = 0;
//
//    cout << "Dinner will be held at ";
//    printUniversal(dinnerTime);
//    cout << " universal time, \nwhich is ";
//    printStandard(dinnerTime);
//    cout << " standard time.\n";
//
//    dinnerTime.hour = 29;
//    dinnerTime.minute = 73;
//
//    cout << "\nTime with invalid values: ";
//    printUniversal(dinnerTime);
//    cout << endl;
//
//    return 0;
//}
//
//void printUniversal(const Time& t)
//{
//    cout << setfill('0') << setw(2) << t.hour << ":"
//        << setw(2) << t.minute << ":"
//        << setw(2) << t.second;
//
//}
//
//void printStandard(const Time& t)
//{
//    cout << ((t.hour == 0 || t.hour == 12) ?
//        12 : t.hour % 12) << ":" << setfill('0')
//        << setw(2) << t.minute << ":"
//        << setw(2) << t.second
//        << (t.hour < 12 ? " AM" : " PM");
//
//}


// 2번

class Time {

public:
	Time(); //생성자 함수, 아래에서 정의한다.
	void setTime(int, int, int);
	void printUniversal();
	void printStandard();

	int gethour();
	int getmin();
	int getsec();

private:
	int hour;
	int minute;
	int second;
};

Time::Time()
{
	hour = minute = second = 0;
}
int Time::gethour() {
	return hour;
}
int Time::getmin() {
	return minute;
}
int Time::getsec() {
	return second;
}
void Time::setTime(int h, int m, int s) // 호출한 객체 인스턴스의 멤버 세팅
{
	hour = (h >= 0 && h < 24) ? h : 0;
	minute = (m >= 0 && m < 60) ? m : 0;
	second = (s >= 0 && s < 60) ? s : 0;
}

void Time::printUniversal()
{
	cout << setfill('0') << setw(2) << hour << ":"
		<< setw(2) << minute << ":"
		<< setw(2) << second;

}

void Time::printStandard()
{
	cout << ((hour == 0 || hour == 12) ?
		12 : hour % 12) << ":" << setfill('0')
		<< setw(2) << minute << ":"
		<< setw(2) << second
		<< (hour < 12 ? " AM" : " PM");
}

int main()
{
	Time t; // 객체 인스턴스를 만들 때 초기화함수(construct 함수)가 호출

	cout << "The initial universal time is ";
	t.printUniversal();

	cout << "\nThe inital standard time is ";
	t.printStandard();

	t.setTime(13, 27, 6);

	cout << "\n\nUniversal time after setTime is ";
	t.printUniversal();

	cout << "\nStandard time after setTime is ";
	t.printStandard();

	t.setTime(99, 99, 99);

	cout << "\n\nAfter attempting invalid settings:"
		<< "\nUniversal time: ";
	t.printUniversal();

	cout << "\nStandard time: ";
	t.printStandard();
	cout << endl;


	Time t2;
	t2.setTime(16, 45, 10);

	cout << t2.gethour() << endl;
	cout << t2.getmin() << endl;
	cout << t2.getsec() << endl;
	return 0;
}