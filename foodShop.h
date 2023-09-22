#include <iostream>
#include <string>
#include "queue.h"

class FoodShop
{
    private:
        string fries;
        string nachos;
        string tacos;
        string coke;
        string water;
        

    public:
        //Thread para sacar a las personas la tienda de souvenirs y mandarlas de vuelta a la zona de donde venian.
        nodeQueue dequeueFoodShop();
        //Thread donde se corre la probabilidad para seleccionar que va a comprar la persona y cantidad.
        void buyProbability();

};