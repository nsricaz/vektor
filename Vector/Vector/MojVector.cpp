#include "MojVector.h"
#include<sstream>

Moj_Vector::Moj_Vector(initializer_list<int> il)
{
	brojevi = new int[il.size()];
	int i = 0;
	for (auto it = il.begin(); it != il.end(); ++it)
	{
		brojevi[i++] = *it;
	}
	c = il.size();
	s = il.size();
}

Moj_Vector::Moj_Vector()
{
	brojevi = new int[0];
}

Moj_Vector::Moj_Vector(int s, int v)
{
	brojevi = new int[s];
	for (int i = 0; i < s; i++)
	{
		brojevi[i] = v;
	}
	this->s = s;
	c = s;

}




Moj_Vector::Moj_Vector(int a)
{
	brojevi = new int[a];
	s = a;
	c = a;
}

Moj_Vector::~Moj_Vector()
{
	delete[]brojevi;
}

int Moj_Vector::size()
{
	return s;
}

int Moj_Vector::capacity()
{
	return c;
}

void Moj_Vector::push_back(int i)
{
	if (c == s)
	{
		Grow();

	}
	brojevi[s++] = i;
}

int Moj_Vector::at(int x)
{
	return brojevi[x];
}

int Moj_Vector::operator[](int i)
{
	return brojevi[i];
}


void Moj_Vector::Grow()
{
	c = c* 1.5;
	int* novi = new int[c];
	for (int i = 0; i <s; i++)
	{
		novi[i] = brojevi[i];
	}

	delete[]brojevi;
	brojevi = novi;
}
