#include "LinkedList.h"
#include<iostream>
using namespace std;

LinkedList::LinkedList(){
	head = nullptr;
	tail = nullptr;
	min = INT_MIN;
}

void LinkedList::insert(int value) {
	node* newNode = new node();
	newNode->value = value;
	newNode->next = nullptr;
	newNode->prev = nullptr;
	if (value < min) {
		min = value;
	}
	//If List is Empty
	if (head == nullptr) {
		head = newNode;
		tail = newNode;
		min = value;
		return;
	}
	//if insert At First;
	if (head->value >= value) {
		head->prev = newNode;
		newNode->next = head;
		head = newNode;
		return;
	}
	//If Insert At Last
	if (tail->value <= value) {
		tail->next = newNode;
		newNode->prev = tail;
		tail = tail->next;
		return;
	}
	//If Insert At Middle
	node* list = tail;
	while (list != nullptr) {
		if (list->value <= value) {
			newNode->next = list->next;
			list->next = newNode;
			newNode->prev = list;
			if (newNode->next) {
				newNode->next->prev = newNode;
			}
			break;
		}
		list = list->prev;
	}
}

int LinkedList::getMin() {
	return min;
}

void LinkedList::merge(LinkedList list) {
	node* head = list.head;
	while (head != nullptr) {
		insert(head->value);
		head = head->next;
	}
}

void LinkedList::display() {
	node* list = head;
	if (list == nullptr) {
		cout << "\n------List Is Empty!!------\n";
	}
	cout << "\nYour Sorted LinkedList: \n";
	while (list != nullptr) {
		if (list->next == nullptr) {
			cout << list->value << endl;
			break;
		}
		cout << list->value <<" -> ";
		list = list->next;
	}
}