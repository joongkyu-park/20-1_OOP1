#include <iostream>
#include <ctime>

using namespace std;

int main()
{

    // quiz 2

    srand((unsigned int)time(NULL));

    char arr1[5] = {};
    char arr2[5] = {};

    for (int i = 0; i <= 5; i++) {
        arr1[i] = '0' + rand() % 10;
        arr2[i] = '0' + rand() % 10;
    }

    int compareResult = 0;

    for (int i = 0; i < 5; i++) {
        if (arr1[i] > arr2[i]) {
            compareResult = 1;
            break;
        }
        else if (arr1[i] < arr2[i]) {
            compareResult = -1;
            break;
        }
    }

    cout << "char1 = ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i];
    }
    cout << ", char2 = ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i];
    }

    if (compareResult == 0) {
        cout << ", char1 == char2" << endl;
    }
    else if (compareResult == -1) {
        cout << ", char1 < char2" << endl;
    }
    else if (compareResult == 1) {
        cout << ", char1 > char2" << endl;
    }

    system("pause");
}
