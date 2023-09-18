#ifndef NODE_H
#define NODE_H
#include <string>

using namespace std;

class node 
{
	public:
		node(string nTitle)
		{
		newsTitle = nTitle;
		siguiente = NULL;
		anterior = NULL;
		}


	private:
		node* siguiente;
		node* anterior;
        string newsTitle;

		friend class linkedList;
};
typedef node* nodeList;
#endif