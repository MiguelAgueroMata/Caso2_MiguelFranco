#ifndef NODE_H
#define NODE_H
#include <string>

using namespace std;

class nodeQueue
{
	public:
		nodeQueue(string attendantName) // Tal vez seria mejor manejarlo mediante codigos en lugar de nombres
		{                               //que el codigo sea el numero de ticket o algo asi puede que lo cambie luego
		newsTitle = attendantName;
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