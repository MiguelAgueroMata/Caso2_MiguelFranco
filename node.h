#ifndef NODE_H
#define NODE_H
#include <string>

using namespace std;

class node 
{
	public:
		node(string aName)
		{
		attendantName = aName;
		siguiente = NULL;
		anterior = NULL;
		}


	private:
		node* siguiente;
		node* anterior;
        string attendantName;

		friend class linkedList;
};
typedef node* nodeList;
#endif