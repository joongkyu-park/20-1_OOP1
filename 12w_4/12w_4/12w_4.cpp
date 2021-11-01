#include <iostream>

using namespace std;

int find(char str[], char target, int index) {
    if (str[index] == target)
        return index;
    else
        return -1;
}

int main(){

    char str[11];
    char target = 'a'; // taget is 'a'
    int count = 1;
    cout << "str : ";
    cin >> str;  // abcdabcda

    for (int index=0; index < 10; index++) {
        if (find(str, target, index) != -1) {
            if (count == 1)
                cout << "index of " << count << "st " << target << " : " << find(str, target, index) << endl;
            else if (count == 2)
                cout << "index of " << count << "nd " << target << " : " << find(str, target, index) << endl;
            else
                cout << "index of " << count << "rd " << target << " : " << find(str, target, index) << endl;

            count++;
        }
        if (find(str, target, index) == -1 && index == 9)
            cout << "index of " << count << "rd " << target << " : " << find(str, target, index) << " (not existed)" <<endl;
    }
    
    return 0;
}
