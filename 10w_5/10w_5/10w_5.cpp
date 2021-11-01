#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // quiz 5

    srand((unsigned int)time(NULL));

    int arr[5][4];
    int sum = 0;

    int forDev[5];
    double dev = 0;

    for (int i = 0; i <= 4;i++)
    {
        int avr = 0;

        cout << i + 1 << "번 학생의 점수 :";
        for (int j = 0; j <= 3; j++)
        {
            arr[i][j] = rand() % 11;
            cout << setw(3) << arr[i][j];
            
            avr += arr[i][j];
            sum += arr[i][j];
        }
        forDev[i] = double(double(avr) / 4);
        cout << " / 평균점수 : " << double(double(avr) / 4) << endl;
    }
    
    for (int i = 0; i <= 4; i++)
    {
        forDev[i] = pow(forDev[i] - double(double(sum) / 20), 2);

        dev += forDev[i];
    }

    dev = dev / 5;
    
    cout << "총 평균 : " << double(double(sum) / 20) << endl;
    cout << "표준편차 : " << dev;
   
    
}

