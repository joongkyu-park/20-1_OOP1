#include <iostream>
#include <cmath>

using namespace std;

void printsymbol(int, char);
void printsymbol(int x, char y)
{

    for (int i = x; i > 0; i--)
    {
        for (int j = i; j > 0;j--)
        {
            cout << y;
        }
        cout << "\n";
    }
}

double calcvolume(double);
double calcvolume(double x)
{
    double result=pow(x, 3) * 4 / 3;
    return result;
}

void prime(int);
void prime(int x)
{
    if (x == 1)
        cout << "1보다 큰 수를 입력하세요.";

    else if (x == 2)
        cout << x;
    else
        cout << 2 << " ";
        for (int i = 2; i <= x; i++)
        {
            for (int j = 2; j < i; j++)
            {
                if ((i % j) == 0)
                    break;
                else
                    cout << i << " ";
                break;
            }
       
        }
}
int main()
{
    //quiz 1
    /*int num;
    char sym;

    cout << "please enter one number : ";
    cin >> num;
    cout << "please enter one symbol : ";
    cin >> sym;

    printsymbol(num, sym);*/


    //quiz 2
    /*double num;
    cout << "please enter one number : ";
    cin >> num;
    cout << calcvolume(num);*/


    //quiz 3
    int num;
    cout << "임의의 정수를 입력하세요 : ";
    cin >> num;
    cout << num << "보다 작거나 같은 모든 소수는 : "<< endl;
    
    prime(num);

}
