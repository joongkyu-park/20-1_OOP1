#include <iostream>
#include <ctime>


using namespace std;

int main()
{
     //quiz 1
    
    char arr1[] = { '1','2','3','4','\0' };
    char arr2[] = { '5','6','7','8','\0' };

    char result[10] = {};

    for (int i = 0; i < 8; i++)
    {
        if (i < 4) {
            result[i] = arr1[i];
        }
        else {
            result[i] = arr2[i - 4];
        }
    }
    result[8] = '\0';

    for (int i = 0; i < 10; i++) {
        cout << result[i];
    }
    cout << endl;
   
}
 