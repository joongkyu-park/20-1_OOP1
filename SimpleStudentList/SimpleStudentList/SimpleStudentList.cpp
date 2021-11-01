#include <iostream>
#include "StudentNode.h"

using namespace std;


class StudentList
{
private:
    StudentNode* head;
public:
    StudentList() {
        head = NULL;
    }
    void addToFront(StudentNode*);
    void printAllName();
};

void StudentList::addToFront(StudentNode* node) {
    StudentNode* temp = head;
    
    if (node->getNext() == NULL) {
        head = node;
        return;
    }
    else {
        temp = temp->getNext();
        if (temp == NULL)
            temp->setNext(node);
        else
            temp = temp->getNext();
    }
}
void StudentList::printAllName() {
    StudentNode* temp = head;
    cout << temp->getName() << endl;
    while (temp->getNext() != NULL) {
        temp = temp->getNext();
        cout << temp->getName() << endl;
        
    }

}



int main()
{
    StudentNode s1{ "Park", 1111, "Dev." };
    StudentNode s2{ "Kim", 2222, "Dev." };
    StudentNode s3{ "Choi", 3333, "Dev." };

    StudentList x;
    x.addToFront(&s1);
    x.addToFront(&s2);
    x.addToFront(&s3);

    x.printAllName();
}
