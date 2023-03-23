#include "Node.h"
class Node {
public:
	int val;
	Node* next;
	Node* prev;
	Node() {
		val = 0;
		next = nullptr;
		prev = nullptr;
	}
	Node(int val) {
		this->val = val;
		next = nullptr;
		prev = nullptr;
	}
};