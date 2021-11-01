#ifndef STUDENTNODE_H
#define STUDENTNODE_H

class StudentNode
{
private:
	const char* name;
	int studentId;
	const char* major;

	StudentNode* next;

public:
	StudentNode(const char*, int, const const char*);

	void setNext(StudentNode* );
	StudentNode* getNext() {
		return next;
	}
	const char* getName();
	int getStudentId();
	const char* getMajor();
};

#endif