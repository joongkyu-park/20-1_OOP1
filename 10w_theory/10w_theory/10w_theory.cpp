#include <iostream>
#include <iomanip>

using namespace std;

//// 1번
//
//int binarySearch(const int[], int, int, int, int);
//void printHeader(int);
//void printRow(const int[], int, int, int, int);
//int binarySearch_r(const int b[], int searchKey, int low, int high, int size);
//
//int main()
//{
//    const int arraySize = 15;
//    int a[arraySize];
//    int key;
//
//    for (int i = 0; i < arraySize; i++)
//        a[i] = 2 * i;
//    
//    cout << "Enter a number between 0 and 28: ";
//    cin >> key;
//
//    printHeader(arraySize);
//
//    // 일반 바이너리서치
//    /*int result =
//        binarySearch(a, key, 0, arraySize - 1, arraySize);*/
//    
//    // 재귀 바이너리 서치
//    int result = binarySearch_r(a, key, 0, arraySize - 1, arraySize);
//
//    if (result != -1)
//        cout << '\n' << key << " found in array element "
//        << result << endl;
//    else
//        cout << '\n' << key << " not found" << endl;
//
//    return 0;
//}
//
//int binarySearch(const int b[], int searchKey, int low, int high, int size)
//{
//    int middle;
//    while (low <= high) {
//        middle = (low + high) / 2;
//        printRow(b, low, middle, high, size);
//
//        if (searchKey == b[middle])
//            return middle;
//        else
//            if (searchKey < b[middle])
//                high = middle - 1;
//            else
//                low = middle + 1;
//    }
//    return -1;
//} 
//
//void printHeader(int size)
//{
//    cout << "\nSubscripts:\n";
//
//    for (int j = 0; j < size; j++)
//        cout << setw(3) << j << ' ';
//
//    cout << '\n';
//
//    for (int k = 1; k <= 4 * size; k++)
//        cout << '-';
//
//    cout << endl;
//}
//
//void printRow(const int b[], int low, int mid, int high, int size)
//{
//    for (int m = 0; m < size; m++)
//        if (m<low || m>high)
//            cout << "    ";
//        else
//            if (m == mid)
//                cout << setw(3) << b[m] << '*';
//            else
//                cout << setw(3) << b[m] << ' ';
//    cout << endl;
//}
//
//// 바이너리서치 재귀함수
//
//int binarySearch_r(const int b[], int searchKey, int low, int high, int size) {
//    if (low <= high) {
//        int middle = (low + high) / 2;
//        printRow(b, low, middle, high, size);
//        if (b[middle] == searchKey) {
//            return middle;
//        }
//        else if (searchKey < b[middle]) {
//            return binarySearch_r(b, searchKey, low, middle - 1, size);
//        }
//        else {
//            return binarySearch_r(b, searchKey, middle + 1, high, size);
//        }
//    }
//    else if (low > high)
//        return -1;
//}


// 2번

//const int students = 3;
//const int exams = 4;
//
//int minimum(int[][exams], int, int);
//int maximum(int[][exams], int, int);
//double average(int[], int);
//void printArray(int[][exams], int, int);
//
//double average_exam(int[][exams], int);
//
//int main()
//{
//	int studentGrades[students][exams] =
//	{ {77,68,86,73},
//		{96,87,89,78},
//		{70,90,86,81} };
//
//	cout << "The array is : \n";
//	printArray(studentGrades, students, exams);
//
//	cout << "\n\nLowst grade: "
//		<< minimum(studentGrades, students, exams)
//		<< "\nHighest grade: "
//		<< maximum(studentGrades, students, exams) << '\n';
//
//	cout << fixed << setprecision(2);
//
//	for (int person = 0; person < students; person++)
//		cout << "The average grade for student " << person
//		<< " is "
//		<< average(studentGrades[person], exams)
//		<< endl;
//
//	cout << endl;
//
//	// 퀴즈별 평균 출력
//	int exam_count = 4;
//	for (int exam_index = 0; exam_index < exam_count; exam_index++) {
//		cout << "The average grade for exam " << exam_index
//			<< " is "
//			<< average_exam(studentGrades, exam_index)
//			<< endl;
//	}
//	return 0;
//}
//
//int minimum(int grades[][exams], int pupils, int tests)
//{
//	int lowGrade = 100;
//
//	for (int i = 0; i < pupils; i++)
//		for (int j = 0; j < tests; j++)
//			if (grades[i][j] < lowGrade)
//				lowGrade = grades[i][j];
//
//	return lowGrade;
//}
//
//int maximum(int grades[][exams], int pupils, int tests)
//{
//	int highGrade = 0;
//
//	for (int i = 0; i < pupils; i++)
//		for (int j = 0; j < tests; j++)
//			if (grades[i][j] > highGrade)
//				highGrade = grades[i][j];
//
//	return highGrade;
//}
//
//double average(int setOfGrades[], int tests)
//{
//	int total = 0;
//
//	for (int i = 0; i < tests; i++)
//		total += setOfGrades[i];
//
//	return static_cast<double>(total) / tests;
//}
//
//// 퀴즈별 평균함수 추가
//
//double average_exam(int grades[][exams], int exam_index) {
//	int sum = 0;
//	for (int stu = 0; stu < students; stu++) {
//		sum += grades[stu][exam_index];
//	}
//
//	return static_cast<double>(sum) / students;
//}
//
//void printArray(int grades[][exams], int pupils, int tests)
//{
//	cout << left << "                 [0]  [1]  [2]  [3]";
//
//	for (int i = 0; i < pupils; i++) {
//		cout << "\nstudentGrades[" << i << "] ";
//
//		for (int j = 0; j < tests; j++)
//			cout << setw(5) << grades[i][j];
//	}
//}


// 매트릭스 합

//int main()
//{
//	int array1[3][3] = { 1,0,-1,2,2,-3,3,4,0 };
//	int array2[3][3] = { 3,4,-1,1,-3,0,-1,1,2 };
//	int array3[3][3];
//
//	for (int i=0;i<3;i++)
//		for (int j = 0;j < 3;j++) {
//			array3[i][j] = array1[i][j] + array2[i][j];
//		}
//
//	for (int i = 0;i < 3;i++) {
//		for (int j = 0;j < 3;j++) {
//			cout << setw(3) << array3[i][j];
//		}
//		cout << endl;
//	}
//
//}