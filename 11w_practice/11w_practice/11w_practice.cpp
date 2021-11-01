#include <iostream>

using namespace std;


void charCall(char*);
void charCall(char&);

int* getPointer(int* x);
int* getPointer(int x);

void swap3elem(int*, int*, int*);

double PI = 3.14;
double getArea(double r);
double getArea(double*);

int wordsize(char*);

int main()
{
   // 1번

    /*int ele = 10;
    int* ptr;
    ptr = &ele;
    cout << "ele:" << ele << endl;
    cout << "&ele:" << &ele << endl;
    cout << "ptr:" << ptr << endl;
    cout << "&ptr:" << &ptr << endl;
    cout << "*ptr:" << *ptr << endl;
    cout << endl << endl;*/


    // 2번

   /* char ch = 'a';
    char& reference = ch;

    charCall(&ch);
    charCall(reference);
}

void charCall(char* c) {
    cout << "size of pointer c: "
        << sizeof(c) << endl;
}
void charCall(char& c) {
    cout << "size of refernce value c: "
        << sizeof(c) << endl;*/

    
    // 3번
    
    
    //int x = 10;
    //int* xptr = &x;
    //int* xptr2 = getPointer(&x);
    //cout << "x:" << x << endl;
    //cout << "xptr:" << xptr << "\t";
    //cout << "*xptr:" << *xptr << endl;
    //cout << "xptr2:" << xptr2 << "\t";
    //cout << "*xptr2:" << *xptr2 << endl;
    //int* xptr3 = getPointer(x);     // call by value 이므로 함수안에서의 x와 main의 변수x와 다르다,,!
    //cout << "xptr3:" << xptr3 << "\t";
    //cout << "*xptr3:" << *xptr3 << endl;
    //cout << endl << endl;


    // 4번

   /* int a = 10;
    int b = 20;
    int c = 30;

    cout << "before swap.. a=" << a << "b=" << b << "c=" << c << endl;
    swap3elem(&a, &b, &c);
    cout << "after swap.. a=" << a << "b=" << b << "c=" << c << endl;*/


    // 5번

    /*double r = 4;

    cout << getArea(r) << endl;
    cout << getArea(&r) << endl;*/
 

    // 6번

    char word[100];
    int num = 0;
    while (num++ < 20)
        word[num] = '0';
    cout << "Please input one sentence: ";
    cin >> word;  //space나 enter를 기준으로
    while (word[0] != '0') {
        cout << word << "\t The size of ";
        cout << wordsize(word) << "\n";
        cin >> word;
    }
    return 0;
}

int wordsize(char* word)
{
    int size = 0;

    while (word[size] != '\0') {
        size++;
    }
    return size;
}
double getArea(double r) {
    return r * r * PI;
}
double getArea(double *r) {
    return (*r) * (*r) * PI;
}

void swap3elem(int* a_adress, int*b_adress, int*c_adress) {
    int temp1 = *a_adress;
    int temp2 = *b_adress;

    *a_adress = *c_adress;
    *b_adress = temp1;
    *c_adress = temp2;
    
}

int* getPointer(int* x) {
    return x;
}
int* getPointer(int x) {
    return &x;
}
