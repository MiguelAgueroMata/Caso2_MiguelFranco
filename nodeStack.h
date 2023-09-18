#ifndef NODE_H
#define NODE_H
#include <string>

using namespace std;

class nodeStack
{
	public:
		nodeStack(string prodName)// Se podria manejar con un codigo tambien
		{
		newsTitle = prodName;
		siguiente = NULL;
		anterior = NULL;
		}


	private:
		nodeStack* siguiente;
		nodeStack* anterior;
        string newsTitle;

		friend class Stack;
};
typedef nodeStack* nodeS;
#endif