#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int arrsize = 3;

    const char* arr[arrsize] = { "abc", "def", "ghi" };

    char temp[20]= "";

    for (int i = 0; i < 3;i++) {
        strcat(temp, arr[i]);
    }

    cout << "char* arr[arrsize] = { \"abc\", \"def\", \"ghi\" };" << endl;
    cout << "temp[20]= " << temp;
}
