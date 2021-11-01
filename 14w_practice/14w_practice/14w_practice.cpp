#include <iostream>

using namespace std;

class StudentNode {
public:
	StudentNode(const char*, int, const char*, StudentNode*);
	StudentNode(const char*, int, const char*);
	void setNext(StudentNode*);
	StudentNode* getNext();
	const char* getName();
	const char* getMajor();

private:
	const char* name;
	int studentID;
	const char* major;

	StudentNode* next;
};

StudentNode::StudentNode(const char* n, int i, const char* m) {
	name = n;
	studentID = i;
	major = m;
	next = NULL;
}

void StudentNode::setNext(StudentNode* s) {
	next = s;
}
StudentNode* StudentNode::getNext() {
	return next;
}
const char* StudentNode::getName() {
	return name;
}
const char* StudentNode::getMajor() {
	return major;
}


int main()
{
	const char* name[10] = { "Kim", "Min", "Lee", "Hwang", "Park","Kim", "Min", "Lee", "Hwang", "Park", };
	const char* major[3] = { "Computer", "Machanic", "Environment" };
	StudentNode studentA(name[0], 12190000, major[0]);
	StudentNode studentB(name[1], 12190001, major[0]);
	StudentNode studentC(name[2], 12190002, major[0]);
	StudentNode studentD(name[3], 12190003, major[0]);
	StudentNode studentE(name[4], 12190004, major[0]);
	StudentNode studentF(name[5], 12190005, major[1]);
	StudentNode studentG(name[6], 12190006, major[1]);
	StudentNode studentH(name[7], 12190007, major[1]);
	StudentNode studentI(name[8], 12190008, major[2]);
	StudentNode studentJ(name[9], 12190009, major[2]);

	studentA.setNext(&studentB);
	studentB.setNext(&studentC);
	studentC.setNext(&studentD);
	studentD.setNext(&studentE);
	studentE.setNext(&studentF);
	studentF.setNext(&studentG);
	studentG.setNext(&studentH);
	studentH.setNext(&studentI);
	studentI.setNext(&studentJ);

	StudentNode* temp = &studentA;
	while (true) {
		cout << temp->getName() << endl;
		if (temp->getNext() == NULL) break;
		else temp = temp->getNext();
	}


}
