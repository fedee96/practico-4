#pragma once
#include "node.h"
class List
{
public:
	List();


	node* head = nullptr;
	node* tempLast = nullptr;
	node* tempPrev = nullptr;

	void add(int a);
	bool isPrime(int a);
	void showList();
	void cleanUp();


	~List();
};