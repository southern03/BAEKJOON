#include <iostream>
using namespace std;
class Node {
public:
	Node* next;
	int data;
	bool isPrinted = false;
	Node(int data) {
		this->data = data; next = nullptr;
	}
};
class LinkedList {
private:
	Node* head;
public:
	int total_node = 0;
	LinkedList() {
		head = nullptr;
	}
	~LinkedList() {
		Node* current = head;
		Node* nextNode;
		while (current != nullptr) {
			nextNode = current->next;
			delete current;
			current = nextNode;
		}
	}
	void add(int data) {
		Node* newNode = new Node(data);
		total_node++;
		if (head == nullptr) {
			head = newNode;
		}
		else {
			Node* current = head;
			while (current -> next!= nullptr) {
				current = current->next;
			}
			current->next = newNode;
		}
	}
	void del_print(int total_node, int num) {
		cout << "<";
		int falg = num-1;
		Node* current = head;
		int cnt = total_node-1;
		while (cnt!=0) {
			for (int i = 0; i < falg;) {
				current = current->next; //전진
				if (current == nullptr) { //끝에 도달 했는가?
					current = head;
				}
				if (current->isPrinted == false) {
					i++;
				}
				else {
					continue;
				}
			}
			cout << current->data << ", ";
			current->isPrinted = true;
			cnt--;
			falg = num;
		}
		Node* isLast = head;
		while (isLast->isPrinted == true) {
			isLast = isLast->next;
		}
		cout << isLast->data << ">";
	}
};
int main(void) {
	LinkedList list;
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		list.add(i);
	}
	list.del_print(n,m);
	return 0;
}
