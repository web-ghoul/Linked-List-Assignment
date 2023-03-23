#pragma once
class LinkedList
{
private:
	struct node {
		int value;
		node* next;
		node* prev;
	};
	node* head;
	node* tail;
	int min;
public:
	LinkedList();
	void insert(int value);
	int getMin();
	void merge(LinkedList list);
	void display();
};


