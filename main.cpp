#include <iostream>
#include "Forward_list.h"

int main()
{
	Forward_list<int> mylist;
	mylist.push_front(10);
	mylist.push_front(20);
	mylist.push_front(30);
	mylist.push_front(40);
	mylist.push_front(50);
	std::cout << mylist.front() << std::endl;
	return 0;
}

