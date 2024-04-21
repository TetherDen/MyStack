#include "StackD.h"
#include<iostream>
using namespace std;

StackD::StackD()
{
	st = new char[size + 1];
	top = EMPTY;
}

StackD::StackD(int s)
{
	size = s;
	st = new char[size + 1];
	top = EMPTY;
}

void StackD::push(char c)
{
	if (top < size)
	{
		st[++top] = c;
	}
	else
	{
		char* stNew = new char[size*2 + 1];
		for (int i = 0; i < size; i++)
		{
			stNew[i] = st[i];
		}
		stNew[++top] = c;
		delete[]st;
		st = stNew;
		size *= 2;
	}
}

char StackD::pop()
{
	if (top > EMPTY)
	{
		return st[top--];
	}
	else
		return 0;
}

int StackD::getSize()
{
	return size;
}

int StackD::getCount()
{
	return top + 1;
}

bool StackD::isEmpty()
{
	return top == EMPTY;
}

bool StackD::isFull()
{
	return top == size;
}

void StackD::clear()
{
	top = EMPTY;
}

char StackD::getChar()
{
	return st[top];
}

void StackD::show()
{
	for (int i = 0; i <= top; i++)
	{
		cout << st[i] << " ";
	}
	cout << endl;
}

StackD::~StackD()
{
	if (st != nullptr)
	{
		delete[]st;
	}
}



