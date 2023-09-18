#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <string>
#include "nodeQueue.h"

using namespace std;

class Queue
{
	public:
		Queue();

        bool isEmpty() { return primero == NULL; }
        int length();

        void queue(string newsTitle);
        void dequeue();
        string front();
        

        void print();
	
	private:
		nodeQ primero;
		nodeQ tope;
};

#endif