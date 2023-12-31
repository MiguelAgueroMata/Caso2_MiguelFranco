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
        //Thread donde se corre la probabilidad de que la persona compre algo y otra para escoger que va a comprar.
        int buyProbability()
        {
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<int> distribution(1, 4);

            int random_number = distribution(gen);

            return random_number;

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

        void buyMerchandise(int random_number)
        {
            if (random_number == 1)
            {
                PhotoCards.pop();
            }
            else if (random_number == 2)
            {
                PhotoCards.pop();
                Albums.pop();
            }
            else if (random_number == 3)
            {
                PhotoCards.pop();
                Albums.pop();
                Shirts.pop();
            }
            else
            {
                PhotoCards.pop();
                Albums.pop();
                Shirts.pop();
                Posters.pop();
            }
        }

};