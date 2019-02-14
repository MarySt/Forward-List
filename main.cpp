// forward_list.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include<forward_list>
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
	if (!mylist.empty()) std::cout << "Not empty!" << std::endl;
	return 0;
}

