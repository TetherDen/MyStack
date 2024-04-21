#include <iostream>
using namespace std;
#include "StackD.h"

//	Завдання №1
//	Реалізуйте клас стеку для роботи з символами(символьний стек).
//  Стек повинен мати фіксований розмір.Також
//	реалізуйте набір операцій для роботи зі стеком : внесення
//	символу в стек, видалення символу зі стеку, підрахунок
//	кількості символів в стеці, перевірку, чи стек порожній,
//	перевірку, чи стек повний, очищення стеку, отримання
//	без видалення верхнього символу в стеці.
class Stack
{
	static const int EMPTY = -1;
	static const int FULL = 10;
	char stk[FULL + 1];
	int top;
public:
	Stack();
	void push(char c);
	char pop();
	int getCount();
	bool isEmpty();
	bool isFull();
	void clear();
	char getChar();
	void show();

};

Stack::Stack()
{
	top = EMPTY;
}

void Stack::push(char c)
{
	if (top < FULL)
	{
		stk[++top] = c;
	}
}

char Stack::pop()
{
	if (top > EMPTY)
	{
		return stk[top--];
	}
	else
		return 0;
}

int Stack::getCount()
{
	return top + 1;
}

bool Stack::isEmpty()
{
	return top == EMPTY;
}
bool Stack::isFull()
{
	return top == FULL;
}

void Stack::clear()
{
	top = EMPTY;
}

char Stack::getChar()
{
	return stk[top];
}

void Stack::show()
{
	for (int i = 0; i <= top; i++)
	{
		cout << stk[i] << " ";
	}
	cout << endl;
}

int main()
{
	//Stack st1;
	//st1.push('c');
	//st1.push('b');
	//st1.push('a');
	//cout<<st1.isEmpty()<<endl;
	//st1.show();
	//cout << st1.isFull() << endl;
	//cout << st1.getCount() << endl;
	//st1.pop();
	//st1.show();
	//cout << st1.getChar() << endl;





	return 0;
}