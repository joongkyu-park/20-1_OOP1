#include "StudentNode.h"
#include <iostream>

using namespace std;

StudentNode::StudentNode(const char* n, int id, const char* ma) {
	name = n;
	studentId = id;
	major = ma;

	next = NULL;
}

void StudentNode::setNext(StudentNode* node) {
	next = node;
}
const char* StudentNode::getName() {
	return name;
}
int StudentNode::getStudentId() {
	return studentId;
}
const char* StudentNode::getMajor() {
	return major;
}