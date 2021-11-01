#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char array[100];

    cout << "Please input 5 words: ";
    cin.getline(array, 100);

    char* tokenPtr;

    tokenPtr = strtok(array, " ");
    
    cout << "\n";

    while (tokenPtr != NULL) {
        cout << tokenPtr << "_test" << '\t';
        tokenPtr = strtok(NULL, " ");
    }
}
