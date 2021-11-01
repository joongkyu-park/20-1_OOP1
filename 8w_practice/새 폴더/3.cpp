#include <iostream>
#include <ctime>


using namespace std;

int main()
{

    // quiz 3

    srand((unsigned int)time(NULL));

    int a[10] = { 0 };
    int max1{ 0 }, max2{ 0 }, max3{ 0 };
    for (int i = 0; i <= 9; i++) {
        a[i] = rand() % 97 + 3;
    }

    for (int i = 0; i <= 9; i++) {
        if (max1 < a[i]) {
            max1 = a[i];
        }
    }
    for (int i = 0; i <= 9; i++) {
        if (max2 < a[i] && a[i] < max1) {
            max2 = a[i];
        }
    }
    for (int i = 0; i <= 9; i++) {
        if (max3 < a[i] && a[i] < max2) {
            max3 = a[i];
        }
    }
    cout << "생성된 int 배열은 : ";
    for (int i = 0; i <= 9; i++) {
        cout << a[i] << ", ";
    }
    cout << "\n그 중 가장 큰 3개의 값은 " << max1 << ", " << max2 << ", " << max3 << " 입니다.";


}
