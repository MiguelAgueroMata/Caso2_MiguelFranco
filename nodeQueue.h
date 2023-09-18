#ifndef NODE_H
#define NODE_H
#include <string>

using namespace std;

class nodeQueue
{
	public:
		nodeQueue(string nTitle)
		{
		newsTitle = nTitle;
		siguiente = NULL;
		anterior = NULL;
		}


	private:
		nodeQueue* siguiente;
		nodeQueue* anterior;
        string newsTitle;


		friend class Queue;
};
typedef nodeQueue* nodeQ;
#endif