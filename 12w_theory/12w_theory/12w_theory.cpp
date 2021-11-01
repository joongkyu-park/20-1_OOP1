#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;


int main()
{
    // 1번
    /*char x[] = "Happy Birthday to You";
    char y[25];
    char z[15];

    strcpy_s(y, x);

    cout << "The string in array x is : " << x
        << "\nThe string in array y is : " << y << endl;

    strncpy_s(z, x, 14);
    z[14] = '\0';

    cout << "The string in array z is : " << z << endl;*/

    // z의 사이즈를 10으로 줄였을 때는 오류가 발생한다.


    // 2번
   /* char s1[20] = "Happy ";
    char s2[] = "New Year ";
    char s3[40] = "";

    cout << "s1 = " << s1 << "\ns2 = " << s2;

    strcat_s(s1, s2);

    cout << "\n\nAfter strcat(s1, s2):\ns1 = " << s1
        << "\ns2 = " << s2;

    strncat(s3, s1, 6);

    cout << "\n\nAter strcat(s3, s1):\ns1 = " << s1
        << "\ns3 = " << s3;

    strcat(s3, s1);
    cout << "\n\nAfter strcat(s3, s1):\ns1 = " << s1
        << "\ns3 = " << s3 << endl;

    return 0;*/


    // 3번

    /*const char* s1 = "Happy New Year";
    const char* s2 = "Happy New Year";
    const char* s3 = "Happy Holidays";

    cout << "s1 = " << s1 << "\ns2 = " << s2
        << "\ns3 = " << s3 << "\n\nstrcmp(s1, s2) = "
        << setw(2) << strcmp(s1, s2)
        << "\nstrcmp(s1, s3) = " << setw(2)
        << strcmp(s1, s3) << "\nstrcmp(s3, s1) = "
        << setw(2) << strcmp(s3, s1);

    cout << "\n\nstrncmp(s1, s3, 6) = " << setw(2)
        << strncmp(s1, s3, 6) << "\nstrncmp(s1, s3, 7) = "
        << setw(2) << strncmp(s1, s3, 7)
        << "\nstrncmp(s3, s1, 7) = "
        << setw(2) << strncmp(s3, s1, 7) << endl;

    return 0;*/


    // 4번

    //char sentence[] = "This is a sentence with 7 tokens";
    //char* tokenPtr;
    //char* array1[10];
    //tokenPtr = strtok(sentence, " ");
    //int i = 0; // 추가된것
    //while (tokenPtr != NULL) {
    //    cout << tokenPtr << '\n';
    //    array1[i] = tokenPtr; //추가된것
    //    tokenPtr = strtok(NULL, " ");
    //    i++;
    //}

    ////추가된것
    //int j = 0;
    //while (i--) {
    //    cout << array1[j] << " ";
    //    j++;
    //}


    // 5번

    const char *string1 = "abcdefghijklmnopqrstuvwxyz";
    const char* string2 = "four";
    const char* string3 = "Boston";

    cout << "The length of \"" << string1
        << "\" is " << strlen(string1)
        << "\nThe length of \"" << string2
        << "\" is " << strlen(string2)
        << "\nThe length of \"" << string3
        << "\" is " << strlen(string3) << endl;
 }
