#include <iostream>
#include <fstream>
#include "NumberList.h"

using namespace std;

int main()
{
	NumberList list;


	NumberList listA, listB;
	listA.appendNode(10);
	listA.appendNode(20);
	listB.appendNode(15);
	listB.appendNode(40);
	cout << "list A before assignment: " << endl;
	listA.displayList();
	cout << "list B before assignment: " << endl;
	listB.displayList();
	listA = listB;
	listB.appendNode(50);
	cout << "list A after assignment:" << endl;
	listA.displayList();
	cout << "list B after assignment: " << endl;
	listB.displayList();
	//for task 5

	listB.appendNode(20);
	listB.appendNode(30);

	listB.deleteNode(15); //first node
	listB.deleteNode(30);
	//middle node
	listB.deleteNode(50);
	return 0;
}
