#pragma once
class node
{
public:
	node(int data);

	node* next;
	int data;
	node* prev;


	int getData();


	~node();
};