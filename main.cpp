#include <iostream>
#include "MyLinkedList.h"

using namespace std;

int main()
{
	cout << "Test LinkedList" << endl;

	LinkedList<string> list;
	list.pushToHead("Moscow -13 C");
	list.pushToHead("Rostov +1 C");
	list.pushToHead("Omsk -23 C");
	list.pushToHead("Saratov -7 C");
	list.pushToHead("Krasnodar +2 C");
	list.pushToHead("Taganrog 0 C");

	list.show();
	list.removeFromPos(3);
	list.show();
	list.clear();


	return 0;
}