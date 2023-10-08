#ifndef NODE_H
#define NODE_H
#include <string>

using namespace std;

class nodeQueue
{
	public:
		nodeQueue(string aName) // Tal vez seria mejor manejarlo mediante codigos en lugar de nombres
		{                               //que el codigo sea el numero de ticket o algo asi puede que lo cambie luego
		attendantName = aName;
		siguiente = NULL;
		anterior = NULL;
		}


	private:
		nodeQueue* siguiente;
		nodeQueue* anterior;
        string attendantName;


		friend class Queue;
};
typedef nodeQueue* nodeQ;
#endif