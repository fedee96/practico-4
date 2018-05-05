#include "stdafx.h"
#include "node.h"



node::node(int a)
{
	data = a;
}



int node::getData()
{
	return data;
}

node::~node()
{
}