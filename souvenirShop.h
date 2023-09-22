#include <iostream>
#include <string>
#include "doubleList.h"

class SouvenirShop
{
    private:
        int posterTotal;
        int albumTotal;
        int photocardTotal;
        linkedList souvenirShop;
        

    public:
        //Thread para sacar a las personas la tienda de souvenirs y mandarlas de vuelta a la zona de donde venian.
        node exitSouvenirShop();
        //Thread donde se corre la probabilidad de que la persona compre algo y otra para escoger que va a comprar.
        void buyProbability();

};