#include <iostream>

using namespace std;

#include "Time2.h"

int main()
{
	//1번

	Time t1;
	Time t2(3);
	Time t3(21, 34);
	Time t4(12, 25, 42);
	Time t5(27, 74, 99);

	cout << "Constructed with:\n\n"
		<< "all default arguments:\n  ";
	t1.printUniversal();
	cout << "\n  ";
	t1.printStandard();
	cout << "\n\nhour specified; default minute and second:\n  ";
	t2.printUniversal();  
	cout << "\n  ";
	t2.printStandard();  

	cout << "\n\nhour and minute specified; default second:\n  ";
	t3.printUniversal();  
	cout << "\n  ";
	t3.printStandard();   

	cout << "\n\nhour, minute, and second specified:\n  ";
	t4.printUniversal(); 
	cout << "\n  ";
	t4.printStandard();  

	cout << "\n\nall invalid values specified:\n  ";
	t5.printUniversal();               
	cout << "\n  ";
	t5.printStandard();         
	cout << endl;

	return 0;
}