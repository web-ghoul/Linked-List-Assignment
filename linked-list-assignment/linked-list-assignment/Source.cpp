#include<iostream>
#include "LinkedList.h"
using namespace std;

int main() {
	LinkedList list;
	list.insert(1);
	list.insert(2);
	list.insert(3);
	list.insert(-5);
	list.insert(0); 
	list.insert(-4);
	list.insert(-2);
	list.insert(-11);
	cout << list.getMin() << endl;
	LinkedList list1;
	list1.insert(12);
	list1.insert(-30);
	list1.insert(0);
	cout << list1.getMin() << endl;
	list1.display();
	list.merge(list1);
	list.display();
	return 0;
}