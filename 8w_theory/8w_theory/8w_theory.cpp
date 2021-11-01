#include <iostream>
#include <iomanip>
#include<ctime>

using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    // 1번

    /*int n[20] = { 0 };

    for (int i = 0; i < 20; i++)
    {
        n[i] = rand() % 20 + 1;
    }

    cout << "Element" << setw(13) << "Value"
        << setw(17) << "Histogram" << endl;

    for (int i = 0; i < 20; i++) {
        cout << setw(7) << i << setw(13)
            << n[i] << setw(9);
        for (int j = 0; j < n[i]; j++)
            cout << '*';
        cout << endl;
    }*/
       

    // 2번

    //int n[100] = { 0 };

    //for (int i = 0; i < 100; i++) {
    //    n[i] = rand() % 11 + 5;
    //}
    //int frequency[16] = { 0 };
    //
    //for (int answer = 0; answer < 100; answer++)
    //    ++frequency[n[answer]];

    //cout << "Rating" << setw(17) << "Frequency" << endl;

    //for (int rating = 5; rating < 16; rating++)
    //    cout << setw(6) << rating
    //    << setw(17) << frequency[rating] << endl;

    //int max = 0;
    //int number = 0;
    //for (int i = 5; i < 16; i++) {
    //    if (max < frequency[i]) {
    //        max = frequency[i];
    //        number = i;
    //    }
    //}
    //cout << "가장 많이 출현된 수는 " << number <<"이고, 출현 횟수는 " << max <<"회 입니다.";


    // 3번

    char string1[20];
    char string2[] = "string literal";

    cout << "Enter the string \"hello there\": ";
    cin >> string1;

    cout << "string1 is: " << string1
        << "\nstring2 is: " << string2;

    cout << "\nstring1 with spaces between characters is:\n";

    for (int i = 0; string1[i] != '\0'; i++)
        cout << string1[i] << ' ';

    cin >> string1;
    cout << "\nstring1 is: " << string1 << endl;

}