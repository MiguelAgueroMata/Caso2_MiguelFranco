#include <iostream>
#include <string>
#include "stack.h"

using namespace std;

class Dispenser
{
    private:

        Stack coke;
        Stack water;
        Stack powerBar;
        Stack cookies;

    public:
        //Thread para deshabilitar dispenser y hacer restock cuando una de las pilas del dispenser llegue a 0
        void restockPush(Stack pilaChequeo)
        {
            if (pilaChequeo.isEmpty() || pilaChequeo.length() < 25)
            {
                while( pilaChequeo.length() < 25)
                {
                    pilaChequeo.push(pilaChequeo.top());
                }
            }
        }

        
};