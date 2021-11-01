#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    int data; // Node에 저장할 원소값
    Node* next; // 다음 Node 주소

    Node(int e) {
        this->data = e;
        this->next = NULL;
    }
};

class SLinkedList {
public:
    Node* head; // Linkedlist의 head
    Node* tail; // Linkedlist의 tail

    SLinkedList() {
        head = NULL;
        tail = NULL;
    }

    void addFront(int X) { // LinkedList에서 가장 앞의 node에 새로운 node 삽입
        Node* newNode = new Node(X);// 새로운 node 할당
        if (empty() == 1) { // List가 비어 있을 때
            head = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
    }

    int removeFront() { // LinkedList의 가장 앞에 있는 node 삭제 후 들어있는 원소 값 반환
        int temp;
        Node* oldNode = head; // head의 정보 저장
        if (empty() == 1) { // list가 비어 있을 때
            temp = -1;
            delete oldNode;
        }
        else {
            temp = oldNode->data; // oldNode(기존 head)의 data 저장
            head = oldNode->next; // head를 2번째 node를 가리키는 변수로 업데이트
            delete oldNode; // 기존 head 정보를 담은 oldNode Node pointer 변수 삭제!!
        }
        return temp;
    }

    int front() { // LinkedList의 가장 앞 Node의 원소값 반환
        int temp;
        if (empty() == 1) { // List가 비어 있을 때
            temp = -1;
        }

        else {
            temp = head->data;
        }

        return temp;
    }

    int empty() { // LinkedList가 비어있는지 확인하는 값 반환
        if (head == NULL) {
            return 1;
        }
        else {
            return 0;
        }
    }
};

int main() {


    int oper_num;
    cin >> oper_num;
    int i = 0;
    int input_data;
    string operation;
    SLinkedList* s = new SLinkedList();
    while (i < oper_num) {

        cin >> operation;

        if (operation == "empty") {
            cout << s->empty() << "\n";
        }
        else if (operation == "front") {
            cout << s->front() << "\n";
        }
        else if (operation == "removeFront") {
            cout << s->removeFront() << "\n";
        }
        else if (operation == "addFront") {
            cin >> input_data;
            s->addFront(input_data);
        }
        i++;
    }
    delete s;
    return 0;
}