#ifndef NODESOUVENIR_H
#define NODESOUVENIR_H
#include <string>

using namespace std;

class nodeSouvenirQueue
{
	public:
		nodeSouvenirQueue(string aName) // Tal vez seria mejor manejarlo mediante codigos en lugar de nombres
		{                               //que el codigo sea el numero de ticket o algo asi puede que lo cambie luego
		attendantName = aName;
		siguiente = NULL;
		anterior = NULL;
		}


	private:
		nodeSouvenirQueue* siguiente;
		nodeSouvenirQueue* anterior;
        string attendantName;


		friend class Queue;
};
typedef nodeSouvenirQueue* nodeSouvenirQ;
#endif