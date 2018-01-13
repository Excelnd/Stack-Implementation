// Stack Implementation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int MAXSIZE = 8;
int stack[8];
int top = -1;

int isempty() 
{
	if (top == -1)
		return 1;
	else
		return 0;
}

int isfull()
{
	if (top == MAXSIZE)
		return 1;
	else
		return 0;
}

int peek()
{
	return stack[top];
}

int pop()
{
	int data;

	if (!isempty())
	{
		data = stack[top];
		top = top - 1;
		return data;
	}
	else
	{
		cout << "could not retrieve data, staick is empty.\n";
	}

}

int push(int data)
{
	if (!isfull())
	{
		top = top + 1;
		stack[top] = data;
	}
	else
	{
		cout << "couldn not insert data, stack is full.\n";
	}
	return data;
}


int main()
{
	// push items on the stack
	push(3);
	push(5);
	push(9);
	push(1);
	push(12);
	push(15);

	printf("Element at top of the stack: %d\n", peek());
	printf("Elements: \n");

	// print stack data
	while (!isempty())
	{
		int data = pop();
		printf("%d\n", data);
	}

	printf("Stack full: %s\n", isfull() ? "true" : "false");
	printf("Stack empty: %s\n", isempty() ? "true" : "false");

    return 0;
}
