#include <iostream>
#include <ctime>


using namespace std;

int main()
{

    // quiz 2

    srand((unsigned int)time(NULL));

    char str1[5];
    char str2[5];

    for (int i = 0; i <= 3; i++) {
        int a = (rand() % 10 + 48);
        int b = (rand() % 10 + 48);
        str1[i] = (char)a;
        str2[i] = (char)b;
    }
    cout << str1;

}
