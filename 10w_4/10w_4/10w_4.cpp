#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    char arr[100];
    int num;

    cout << "input a word : ";
    cin >> arr;

    for (int i = 0; i <= 100 ; i++)
    {
        if (arr[i] == '\0')
        {
            num = i;
            break;
        }
    }

    cout << "reversed : ";
    for (int j = num-1; j >= 0; j--)
    {
        cout << arr[j];
    }
  
}
