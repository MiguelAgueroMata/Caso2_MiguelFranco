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

        void queue(string attendantName);
        void dequeue();
        string front();
        
	private:
		nodeQ primero;
		nodeQ tope;
};

#endif