#include <iostream>
#include <ctime>


using namespace std;

int main()
{
    

    // quiz 4

    char *str = NULL;
    const int size = strlen(str);

    cout << "char 배열을 입력하세요 : ";
    cin >> str;

    char reverse[size];

    int j = 0;



    for (int i = 99; i>=0 ;i--) {
        if (str[i] == '\0')
            continue;
        else{
            str_reverse[j] = str[i];
            j++;
        }
    }
    cout << "거꾸로 배열을 생성하였고 배열은 : " << str_reverse;


}
