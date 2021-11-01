#include <iostream>

using namespace std;

int main()
{

    // 1번

    /*char array1[] = "abadasdaeasds";

    char temp = 'x';
    int index = 0;
    int count = 0;

    while (temp != '\0')
    {
        temp = array1[index];
        if (temp == 'a')
            count += 1;

        index += 1;
    }
    cout << count;*/


    // 2번

    char array1[100];
    char array2[100];
    int flag = 0;
    cin >> array1 >> array2;

    for (int i = 0; i < 100; i++)
    {
        if (array1[i] != array2[i])
        {
            cout << "different";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "same";
}
