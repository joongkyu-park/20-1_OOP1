#include <iostream>
#include <cmath>

using namespace std;


// 1번

//class Car {
//
//public:
//    Car();
//    int getSpeed();
//
//    void setSpeed(int);
//    void setGear(int);
//    void speedUp();
//private:
//    int speed;
//    int gear;
//};
//
//Car::Car()
//{
//    speed = gear = 0;
//}
//int Car::getSpeed()
//{
//    return speed;
//}
//void Car::setSpeed(int a)
//{
//    speed = a;
//}
//void Car::setGear(int a)
//{
//    gear = a;
//}
//void Car::speedUp()
//{
//    speed = speed + gear;
//}
//int main()
//{
//    Car myCar;
//    Car yourCar;
//
//    myCar.setSpeed(20);
//    myCar.setGear(2);
//
//    yourCar.setSpeed(15);
//    yourCar.setGear(3);
//
//    int second = 0;
//
//    while (myCar.getSpeed() >= yourCar.getSpeed())
//    {
//        cout << "Current time : " << second << "sec" << endl;
//        cout << "Speed of mycar is " << myCar.getSpeed() << endl;
//        cout << "Speed of yourcar is " << yourCar.getSpeed() << endl << endl;
//
//        myCar.speedUp();
//        yourCar.speedUp();
//
//        second += 1;
//    }
//    cout << "Current time : " << second << "sec" << endl;
//    cout << "Speed of mycar is " << myCar.getSpeed() << endl;
//    cout << "Speed of yourcar is " << yourCar.getSpeed() << endl << endl;
//    cout << "Now, youcar is faster than mycar." << endl;
//}


// 2번

//class Circle {
//
//public:
//	double r;
//	double getarea()
//	{
//		return r * r * 3.141592;
//	};
//};
//
//class Rectangle {
//
//public:
//	double h, d;
//	double getarea()
//	{
//		return h * d;
//	};
//};
//
//int main()
//{
//	int userNum;
//
//	cout << "도형의 넓이를 계산합니다. 1은 circle, 2는 rectangle, 둘 중 하나를 선택하세요 : ";
//	cin >> userNum;
//
//	if (userNum == 1)
//	{
//		Circle user;
//		cout << "원의 r값을 입력하세요 : ";
//		cin >> user.r;
//		cout << "원의 area는 : " << user.getarea() << " 입니다." << endl;
//	}
//	if (userNum == 2)
//	{
//		Rectangle user;
//		cout << "직사각형의의 h, d값을 입력하세요 : ";
//		cin >> user.h >> user.d;
//		cout << "직사각형의 area는 : " << user.getarea() << " 입니다. " << endl;
//	}
//}
