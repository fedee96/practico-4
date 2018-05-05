#include "stdafx.h"
#include "utils.h"



utils::utils()
{
}

void utils::swap_v1(int * p1, int * p2)
{
	int p3 = 0;

	p3 = *p1;
	*p1 = *p2;
	*p2 = p3;

	return void();
}

void utils::swap_v2(int & p1, int & p2)
{
	int p3 = p1;
	p1 = p2;
	p2 = p3;

	return void();
}


utils::~utils()
{
}