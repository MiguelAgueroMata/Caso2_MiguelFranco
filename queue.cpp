#include "queue.h"

Queue::Queue()
{
    primero = tope = NULL;
}

int Queue::length()
{
    int cont = 0;

    nodeQ aux;
    aux = primero;

    if(isEmpty())
    {
        return cont;
    }
    else
    {
        while(aux != NULL)
        {
            aux = aux->siguiente;
            cont++;
        }
    }
    return cont;
}


///////////////////////////////////////////////////////////////////  COLA  ///////////////////////////////////////////////////////////////////////////
string Queue::front()//Retorna el frente de la cola, en otras palabras el primer valor de la lista
{
    if (isEmpty()) {
        return "Lista vacía";
    } else {
        return primero->newsTitle;
    }
}

void Queue::queue(string nTitle)// Insertar al final
{
    if(isEmpty())
    {
        primero = new nodeQueue(nTitle);
        tope = primero;
        primero->anterior = NULL;
    }
    else
    {
        nodeQ aux = new nodeQueue(nTitle);
        tope->siguiente = aux;
        aux->anterior = tope;
        tope = aux;
        delete aux;
    }
}

void Queue::dequeue()//Eliminar inicio
{
    if(isEmpty())
    {
        cout << "Cola vacia" << endl;
    }
    else
    {
        nodeQ aux = primero;
        primero = aux->siguiente;
        delete aux;

    }
}