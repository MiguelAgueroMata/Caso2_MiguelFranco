#include <iostream>
#include <string>
#include "linkedList.h"
#include "Stack.h"

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
        node exitSouvenirShop();
        //Thread donde se corre la probabilidad de que la persona compre algo y otra para escoger que va a comprar.
        void buyProbability();

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