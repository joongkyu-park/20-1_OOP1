#include <iostream>
#include <ctime>


using namespace std;

int main()
{

    // quiz 5
    srand((unsigned int)time(NULL));

    int char1[] = { 5, 10, 36, 42, 49, 53, 62, 71, 79, 82 };
    int char2[] = { 5, 10, 36, 42, 49, 53, 62, 71, 79, 82, 0};
    int num = rand() % 101;

    for (int i = 0; i < 10;i++) {
        if (char2[i] > num) {
            for (int j = 9; j >= i; j--) {
                char2[j + 1] = char2[j];
            }
            char2[i] = num;
            break;
        }
        else
            continue;
    }
    if(char2[9]< num)
        char2[10] = num;

    cout << "char is ";
    for (int i = 0; i < 10; i++) {
        if (i == 9) {
            cout << char1[i];
            break;
        }
        else
            cout << char1[i] << ", ";
    }
    cout << "\nrand number is : " << num << endl;

    cout << "new char is ";
    for (int i = 0; i < 11; i++) {
        if (i == 10) {
            cout << char2[i];
            break;
        }
        else
            cout << char2[i] << ", ";
    }

}
