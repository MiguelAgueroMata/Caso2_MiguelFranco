#include "linkedList.h"

//Esto es codigo de el otro caso entonces hay cosas que no se van a usar 
//Solo que no se exactamente que entonces no he depurado bien el file

linkedList::linkedList()
{
    primero = actual = NULL;
}

int linkedList::listLength()
{
    int cont = 0;

    nodeList aux;
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

void linkedList::addToEnd(string nTitle)
{
    if(isEmpty())
    {
        primero = new node(nTitle);
        primero->anterior = NULL;
    }
    else
    {
        nodeList aux = primero;
        while(aux->siguiente != NULL)
        {
            aux = aux->siguiente;
        }
        aux->siguiente = new node(nTitle);
        aux->siguiente->anterior = aux;
    }
}

void linkedList::addToStart(string newsTitle)
{
    if(isEmpty())
    {
        primero = new node(newsTitle);
        primero->anterior = NULL;
    }
    else
    {
        nodeList nuevo = new node(newsTitle);
        nuevo->siguiente = primero;
        primero->anterior = nuevo;
        primero = nuevo;
    }
}



void linkedList::deleteLast()
{
    if(isEmpty())
    {
        cout << "Lista vacia." << endl << endl;
    }
    else
    {
        if(primero->siguiente == NULL)
        {
            nodeList temp = primero;
            primero = NULL;
            delete temp;
        }
        else
        {
            nodeList aux = primero;
            while(aux->siguiente->siguiente != NULL)
            {
                aux = aux->siguiente;
            }

            nodeList temp = aux->siguiente;
            aux->siguiente = NULL;
            delete temp;
        }
    }
}

void linkedList::print()
{
    nodeList aux = primero;

    int cont = 1;
    while(aux != NULL)
    {
        cout << cont << " .Titulo: " << aux->attendantName << endl;
        aux = aux->siguiente;
        cont++;
    }
    cout << endl;
}
