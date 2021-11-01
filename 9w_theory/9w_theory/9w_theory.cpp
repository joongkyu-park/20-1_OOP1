#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

// 1번

//void bubblesort(int a[], int arraySize, int hold)
//{
//    for (int i = 0; i < arraySize; i++)
//        cout << setw(4) << a[i];
//
//    for (int pass = 0; pass < arraySize - 1; pass++)
//
//        for (int j = 0; j < arraySize - 1; j++)
//        {
//            if (a[j] > a[j + 1]) {
//                hold = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = hold;
//            }
//            if (hold == a[arraySize])
//            {
//                pass = arraySize;
//                break;
//            }
//        }
//    cout << "\nData items in ascending order\n";
//
//    for (int k = 0; k < arraySize; k++)
//        cout << setw(4) << a[k];
//}
//int main()
//{
//    const int arraySize = 10;
//    int a[arraySize] = { 2,6,4,8,10,12,89,68,45,37 };
//    int hold=0;
//
//    cout << "Data items in original order\n";
//    
//    bubblesort(a, arraySize, hold);
//    
//    cout << endl;
//
//    return 0;
//
//}


// 2번

int maxNumber(const int[], int, int);
void printArray(int[], int);

int main()
{
	srand((unsigned int)time(NULL));

	const int arraySize = 100;
	int a[arraySize];
	int searchKey=0;

	for (int i = 0; i < arraySize; i++)
		a[i] = rand() % 100 + 1;

	cout << "The array is [";
	printArray(a, arraySize);
	cout << "]" << endl;

	cout << "The max number is " << maxNumber(a, searchKey, arraySize);
}
void printArray(int array[], int sizeOfArray)
{
	for (int i = 0; i < sizeOfArray; i++)
		cout << array[i] << " ";
}
int maxNumber(const int array[], int key, int sizeOfArray)
{
	for (int j = 0; j < sizeOfArray; j++)
		if (array[j] > key)
			key = array[j];
	return key;
}
