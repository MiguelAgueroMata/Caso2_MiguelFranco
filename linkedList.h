#ifndef LINKEDLIST_H
#define LINKEDLIST_H
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
        void insert(string newsTitle, int pos);

        node* findByWord(string newsTitle);
        node* findByPosition(int position);
        int findPositionOf(string newsTitle);

        void deleteLast();
        void deleteByTitle(string newsTitle);
        void deleteByPosition(int position);

        void print();
		void printTopFive();

        void relocate(string newsTitle, int movement);

	private:
		nodeList primero;
		nodeList actual;
};

#endif