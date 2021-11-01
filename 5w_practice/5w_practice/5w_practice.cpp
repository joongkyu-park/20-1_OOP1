#include <iostream>
#include <cmath>

using namespace std;


void printstar(int);
void printstar(int x)
{
    int layer_up;
    int layer_down;
    //up
    for (int k = 1; k <= x; k++)
    {
        layer_up = k;
        for (int i = x - layer_up + 1; i > 1;i--)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2*layer_up - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    //down
    for (int k = 1; k <= x-1; k++)
    {
        layer_down = k;
        for (int i = 1; i <= layer_down; i++)
        {
            cout << " ";
        }
        for (int j = 2*(x-layer_down)-1; j > 0;j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void factorial(int);
void factorial(int x)
{
    int temp=1;
    for (int i = x; i > 0 ; i--) 
    {
        temp *= i;
    }
    cout << temp;
}

void printCmath(double);
void printCmath(double x)
{
    cout << "ceil(x) : " << ceil(x) << endl
        << "exp(x) : " << exp(x) << endl
        << "log(x) : " << log(x) << endl
        << "sqrt(x) : " << sqrt(x) << endl
        << "fabs(x) : " << fabs(x) << endl
        << "pow(x,2) : " << pow(x, 2) << endl;
}

float sum(float, float);
float sum(float x, float y)
{
    return x + y;
}
float multiply(float, float);
float multiply(float x, float y)
{
    return x * y;
}
float substract(float, float);
float substract(float x, float y)
{
    return x - y;
}
float division(float, float);
float division(float x, float y)
{
    return x / y;
}

void calculator(float, float, int);
void calculator(float x, float y, int z)
{
   
    switch(z)
    {
        case 1:
            cout << x << "+" << y << " = " << sum(x, y);
            break;
        case 2:
            cout << x << "-" << y << " = " << substract(x, y);
            break;
        case 3:
            cout << x << "*" << y << " = " << multiply(x, y);
            break;
        case 4:
            cout << x << "/" << y << " = " << division(x, y);
            break;
        default:
            cout << "Enter integer number between 1~4.";
            break;

    }

}

void starprogram(int, char);
void starprogram(int x, char y)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << y << " ";
        }
        cout << endl;
    }

}

void fibonacci_program(int);
void fibonacci_program(int x)
{
    int tem1 = 1;
    int tem2 = 1;
    int tem3;
    if (x == 1)
    {
        cout << 1;
    }
    else if (x == 2)
    {
        cout << 1;
    }
    else
    {
        for (int i = 3; i <= x;i++)
        {
            tem3 = tem1 + tem2;
            tem1 = tem2;
            tem2 = tem3;
        }
        cout << tem3;
    }

}
int main()
{
    //quiz1-1
    /*int num;
    cin >> num;
    printstar(num);*/

    //quiz1-2
   /* int num;
    cin >> num;
    factorial(num);*/


    //quiz2
    /*double num;
    cout << "Input x : ";
    cin >> num;
    printCmath(num);*/


    //quiz3
    float x, y;
    int z;

    cout << "input 2 floats : ";
    cin >> x >> y;
    cout << "Select sum - 1, substract - 2, multiply - 3, division - 4 : ";
    cin >> z;
   
    calculator(x, y, z);

    //quiz4
   /* int x;
    char y;

    cout << "input row : ";
    cin >> x;
    cout << "input sym : ";
    cin >> y;
    
    starprogram(x, y);*/
    

    //quiz5
   /* int num;
    cout << "Input n-th fibo num : ";
    cin >> num;
    cout << "n-th fibo num : ";
    fibonacci_program(num);*/

}
