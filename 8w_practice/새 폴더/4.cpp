#include <iostream>
#include <ctime>


using namespace std;

int main()
{
    // quiz 4

    cout << "Enter char one by one, type \";\" to end." << endl;

    char input = ' ';
    char arr[100] = {};
    int size = 0;
    while (true) {
        cin >> input;
        if (input == ';') break;
        arr[size] = input;
        size++;
        if (size >= 100) break;
    }

    char inversed_arr[100] = {};
    int j = size - 1;
    for (int i = 0; i < size; i++) {
        inversed_arr[i] = arr[j--];
    }

    cout << "Input char array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }

    cout << "\ninversed result: ";
    for (int i = 0; i < size; i++) {
        cout << inversed_arr[i];
    }
    cout << endl;

    system("pause");
    return 0;

}
