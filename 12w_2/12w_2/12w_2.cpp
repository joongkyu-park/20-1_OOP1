#include <iostream>
#include <cstring>

using namespace std;

void typing(char* x, char* y) {

    if (strcmp(x, y) == 0)
        cout << "\nCorrect Answer!" << endl;
    else
        cout << "\nIncorrect Answer!" << endl;
}
int main()
{
    char helloWorld[] = "Hello World!";
    int size = strlen(helloWorld);

    char array[50];

    cout << helloWorld;
    cout << "\ntype sentence above:";

    cin.getline(array, size+1);

    typing(helloWorld, array);

}

