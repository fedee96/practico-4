#include "stdafx.h"
#include "list.h"
#include <iostream>


List::List()
{

}

void List::add(int a)
{
	if (isPrime(a)) {



		if (head == nullptr) {
			head = new node(a);
			tempLast = head;
			tempLast->prev = nullptr;
		}
		else {
			while (tempLast->next != nullptr) {
				tempPrev = tempLast;

				tempLast = tempLast->next;
			}

			tempLast->next = new node(a);
			tempLast->prev = tempPrev;
		}
	}
	else {
		std::cout << "Number is prime, insert other number" << std::endl;
	}

}

bool List::isPrime(int a)
{
	if (a > 3) {
		for (int i = 2; i < a; i++) {
			if ((a % i) == 0) {
				return true;
			}
		}
	}
	return false;
}

void List::showList()
{

	if (head == nullptr) {
		std::cout << "No Data." << std::endl;
	}
	else {
		node* tempPtr = head;
		do {
			std::cout << tempPtr->getData() << std::endl;
			tempPtr = tempPtr->next;
		} while (tempPtr != nullptr);
	}
}

void List::cleanUp()
{
	if ((head != nullptr) && (tempLast != nullptr)) {
		do {
			tempPrev = tempLast->prev;
			delete tempPrev->next;
		} while (tempLast->prev != nullptr);
	}


}





List::~List()
{
}