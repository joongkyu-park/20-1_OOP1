#include <iostream>

using namespace std;

int main()
{
    //1번

    int a;
    int b;
    int c;

    cout << "3개의 값을 입력하세요 : ";
    cin >> a >> b >> c;

    if (a > b)
        if (b > c)
            cout << "정렬 후 : " << c << ", " << b << ", " << a;
        else if (c > a)
            cout << "정렬 후 : " << b << ", " << a << ", " << c;
        else
            cout << "정렬 후 : " << b << ", " << c << ", " << a;
    else
        if (a > c)
            cout << "정렬 후 : " << c << ", " << a << ", " << b;
        else if (b < c)
            cout << "정렬 후 : " << a << ", " << b << ", " << c;
        else
            cout << "정렬 후 : " << a << ", " << c << ", " << b;

    // min, mid, max 값을 초기화해서 이용하는 풀이도 확인 권장


    //2번

    int total;
    int gradeCounter;
    int grade;
    int average;
    int min;
    int max;

    total = 0;
    gradeCounter = 1;
    min = 101;
    max = 0;

    while (gradeCounter <= 10) {
        cout << "점수를 입력하세요 : ";
        cin >> grade;
        total = total + grade;
        gradeCounter = gradeCounter + 1;

        if (min > grade)
            min = grade;
        if (max < grade)
            max = grade;
    }
    average = total / 10;
    cout << "반 평균은 " << average << " 입니다. " << endl;
    cout << "최소값은 " << min << "입니다. " << endl;
    cout << "최대값은 " << max << "입니다. " << endl;

    //nim와 max를 구하는 방법 !!

   //3번

    int totalOver60;
    int totalUnder60;
    int gradeCounter;
    int gradeCounterOver60;
    int gradeCounterUnder60;
    int grade;
    int averageOver60;
    int averageUnder60;

    totalOver60 = 0;
    totalUnder60 = 0;

    gradeCounter = 0;
    gradeCounterOver60 = 0;
    gradeCounterUnder60 = 0;


    while (gradeCounter <= 9) {
        cout << "점수를 입력하세요 : ";
        cin >> grade;
        if (grade >= 60) {
            totalOver60 = totalOver60 + grade;
            gradeCounterOver60 = gradeCounterOver60 + 1;
        }
        else {
            totalUnder60 = totalUnder60 + grade;
            gradeCounterUnder60 = gradeCounterUnder60 + 1;
        }
        gradeCounter = gradeCounter + 1;
    }
    cout << "60점 이상인 학생들의 학생 수는 " << gradeCounterOver60 << "명 입니다." << endl;
    cout << "60점 이상인 학생들의 평균점수는 " << totalOver60 / gradeCounterOver60 << "입니다." << endl;
    cout << "60점 이하인 학생들의 학생 수는 " << gradeCounterUnder60 << "명 입니다." << endl;
    cout << "60점 이하인 학생들의 평균점수는 " << totalUnder60 / gradeCounterUnder60 << "입니다." << endl;





}
