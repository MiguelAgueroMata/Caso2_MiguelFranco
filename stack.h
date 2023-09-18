#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <string>
#include "nodeStack.h"

using namespace std;

class Stack
{
	public:
		Stack();

        bool isEmpty() { return primero == NULL; }
        int length();

        void push(string prodName);
        void pop();
        string top();

	private:
		nodeS primero;
		nodeS tope;
};

#endif