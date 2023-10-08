#include <iostream>
#include <string>
#include "linkedList.h"
#include "Stack.h"
#include <random>

class SouvenirShop
{
    private:
        int posterTotal;
        int albumTotal;
        int photocardTotal;

        linkedList souvenirShop;

        Stack PhotoCards;
        Stack Albums;
        Stack Posters;
        Stack Shirts;

        

    public:
        //Thread para sacar a las personas la tienda de souvenirs y mandarlas de vuelta a la zona de donde venian.
        node exitSouvenirShop()
        {
            /*cambie de idea de como sacarlos luego volvemos*/
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<int> distribution(1, 3);
            int random_number = distribution(gen);

            souvenirShop.deleteLast();
        }
        //Thread donde se corre la probabilidad de que la persona compre algo y otra para escoger que va a comprar.
        void buyProbability()
        {
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<int> distribution(1, 4);
            int random_number = distribution(gen);
        }

        void restockSouvenirShop(Stack pilaChequeo)
        {
            if (pilaChequeo.isEmpty() || pilaChequeo.length() < 100)
            {
                while( pilaChequeo.length() < 25)
                {
                    pilaChequeo.push(pilaChequeo.top());
                }
            }
        }

};