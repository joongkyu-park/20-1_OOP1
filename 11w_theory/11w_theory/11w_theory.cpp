#include <iostream>
#include <iomanip>

using namespace std;


// 1번

//void bubbleSort(int*, const int);
//void swap(int* const, int* const);
//
//int main()
//{
//	const int arraySize = 10;
//	int a[arraySize] = { 2,6,4,8,10,12,89,68,45,37 };
//
//	cout << "Data items in original order\n";
//
//	for (int i = 0; i < arraySize; i++)
//		cout << setw(4) << a[i];
//
//	bubbleSort(a, arraySize);
//
//	cout << "\nData items in ascending order\n";
//
//	for (int j = 0; j < arraySize; j++)
//		cout << setw(4) << a[j];
//
//	cout << endl;
//
//	return 0;
//}
//
//void bubbleSort(int* array, const int size)
//{
//	for (int pass = 0; pass < size - 1; pass++)
//		for (int k = 0; k < size - 1; k++)
//			if (array[k] > array[k + 1])
//				swap(&array[k], &array[k + 1]);
//}
//
//void swap(int* const element1Ptr, int* const element2Ptr)
//{
//	int hold = *element1Ptr;
//	*element1Ptr = *element2Ptr;
//	*element2Ptr = hold;
//}


// 2번

//int main()
//{
//	int b[4] = { 10,20,30,40 };
//	int* bPtr = b;
//
//	cout << "Array b printed with:\n\n\n";
//
//	cout << "Array subscript notation";
//	for(int i=0;i<4;i++)
//		cout << "b[" << i << "] = " << b[i] << endl;
//
//	cout << "\n\nPointer/offset notation where the pointer is thr array name" << endl;
//	for (int i = 0;i < 4;i++)
//		cout << "*(b + " << i << ") = " << *(b + i) << endl;
//
//	cout << "\n\nPointer subscript notation" << endl;
//	for (int i = 0;i < 4;i++)
//		cout << "bPtr[" << i << "] = " << bPtr[i] << endl;
//
//	cout << "\n\nPointer/offset notation" << endl;
//	for (int i = 0;i < 4;i++)
//		cout << "*(bPtr + " << i << ") = " << *(bPtr + i) << endl;
//	
//}


// 3번

int main() {
	char array1[6];
	char array2[6];

	cin >> array1 >> array2;

	char array3[15];

	for (int i = 0; i < 15; i++) {
		if (i < 5)
			array3[i] = array1[i];

		if (i == 5)
			array3[i] = ' ';

		if (i > 5)
			array3[i] = array2[i - 6];
	}

	cout << array3;
}
