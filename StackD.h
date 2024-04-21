#pragma once
class StackD
{
	static const int EMPTY = -1;
	int size = 10;
	//char* st = new char [full + 1];
	char* st = nullptr;
	int top;
public:
	StackD();
	StackD(int f);

	void push(char c);
	char pop();
	int getSize();
	int getCount();
	bool isEmpty();
	bool isFull();
	void clear();
	char getChar();
	void show();

	~StackD();
};

