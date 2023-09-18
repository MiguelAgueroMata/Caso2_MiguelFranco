#include "stack.h"

//Aca estan las funciones basicas y principales de las pilas
//No hay mucho que explicar diria yo push, pop ,top
//Se podrian agregar mas cosas dependiendo de necesidad ya veremos
//De fijo se termina agregando mas


Stack::Stack()
{
    primero = tope = NULL;
}

int Stack::length()
{
    int cont = 0;

    nodeS aux;
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

void Stack::push(string prodName)// Insertar al final
{
    if(isEmpty())
    {
        primero = new nodeStack(prodName);
        tope = primero;
        primero->anterior = NULL;
    }
    else
    {
        nodeS aux = new nodeStack(prodName);
        tope->siguiente = aux;
        aux->anterior = tope;
        tope = aux;
        delete aux;
    }
}

void Stack::pop()//Eliminar final
{
    if(isEmpty())
    {
        cout << "Lista vacia." << endl << endl;
    }
    else
    {
        nodeS aux = tope;
        tope = tope->anterior;
        delete aux;
    }
}

string Stack::top()//Retorna el tope de la pila, en otras palabras el ultimo valor de la lista
{
    if (isEmpty()) {
        return "Lista vacía";
    } else {
        return tope->newsTitle;
    }
}