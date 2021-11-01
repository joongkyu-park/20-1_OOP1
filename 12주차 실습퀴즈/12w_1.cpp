#include <iostream>

using namespace std;

void printarrAdv(int* arr, int length) {
    for (int i = 0; i < length; i++) {
        cout << "arr+" << i << " : " << arr + i << "\t"
            << "&arr[" << i << "] : " << &arr[i] << endl;
    }
    for (int i = 0; i < length; i++) {
        cout << "*(arr+" << i << ") : " << *(arr + i) << "\t"
            << "arr[" << i << "] : " << arr[i] << endl;
    }
}
int main()
{
    const int length = 5;

    int arr[length] = { 10, 20, 30, 40, 50 };

    printarrAdv(arr, length);
}

