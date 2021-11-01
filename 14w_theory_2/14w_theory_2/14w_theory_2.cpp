
#include <iostream>
#include "Create.h"

using namespace std;

void create(void);
static Create zero(0, "(global before main)");
Create first(1, "(global before main)");
int main()
{
    cout << "\nMAIN FUNCTION: EXECUTION BEGINS" << endl;

    Create second(2, "(local automatic in main)");

    static Create third(
    3, "(local static in main)");

    create();

    cout << "\nMAIN FUNCTION: EXECUTION RESUMES" << endl;

    Create fourth(4, "(local automatic in main)");

    cout << "\nMAIN FUNCTION: EXECUTION ENDS" << endl;

    return 0;

}

void create(void)
{
    cout << "\nCREATE FUNCTION: EXECUTION BEGINS" << endl;

    Create fifth(5, "(local automatic in create)");

    static Create sixth(
        6, "(local static in create)");

    Create seventh(
        7, "(local automatic in create)");
    cout << "\nCREATE FUNCTION: EXECUTION ENDS\n" << endl;
}