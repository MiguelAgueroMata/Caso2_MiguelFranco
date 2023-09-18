#ifndef DOUBLELIST_H
#define DOUBLELIST_H
#include <iostream>
#include <string>
#include "node.h"

using namespace std;

class linkedList
{
	public:
		linkedList();

        bool isEmpty() { return primero == NULL; }
        int listLength();

        void addToStart(string newsTitle);
        void addToEnd(string newsTitle);

        void deleteLast();

        void print();

	private:
		nodeList primero;
		nodeList actual;
};

#endif