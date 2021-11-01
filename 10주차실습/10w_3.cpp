#include <iostream>
#include <iomanip>

using namespace std;

static int C[4][2];

void multiplyMatrix(int[][3], int[][2], int, int);
void printMatrix(int[][3], int[][2], int, int);

int main()
{
    // quiz 3

    int A[4][3] = { {1,0,4},{2,1,1},{3,1,0},{0,2,2} };
    int B[3][2] = { {2,4},{1,1},{3,0} };

    multiplyMatrix(A, B, 4, 3);
    printMatrix(A, B, 4, 3);
}

void multiplyMatrix(int A[][3], int B[][2], int a, int b) {

    for (int i = 0; i < a; i++)
        for (int x = 0; x < 2; x++)
            for (int j = 0; j < b; j++)
                C[i][x] += A[i][j] * B[j][x];
}

void printMatrix(int A[][3], int B[][2], int a, int b)
{
    cout << "A : " << endl;
    for (int i = 0;i < a;i++) {
        for (int j = 0; j < b; j++)
            cout << setw(3) << A[i][j];
        cout << endl;
    }
    cout << endl;

    cout << "B : " << endl;
    for (int i = 0;i < b;i++) {
        for (int j = 0; j < 2; j++)
            cout << setw(3) << B[i][j];
        cout << endl;
    }
    cout << endl;

    cout << "A+B : " << endl;
    for (int i = 0;i < a;i++) {
        for (int j = 0; j < 2; j++)
            cout << setw(3) << C[i][j];
        cout << endl;
    }

}