#pragma once
#include<iostream>
#include<string>
#include<ctime>
#include<chrono>
#include<initializer_list>

using namespace std;
class Moj_Vector
{
public:
	Moj_Vector(initializer_list<int>il);
	Moj_Vector();
	Moj_Vector(int s, int v);
	Moj_Vector(int a);
	~Moj_Vector();
	int size();
	int capacity();
	void push_back(int i);
	int at(int x);
	int operator [] (int i);

private:
	int s;
	int c;
	int *brojevi;
	void Grow();
};
