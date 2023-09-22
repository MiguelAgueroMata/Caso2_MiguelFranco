#include <iostream>
#include <string>
#include "stack.h"

using namespace std;

class Dispenser
{
    private:
        Stack snacks;
        Stack coke;
        Stack water;
        Stack powerBars;
        Stack chocolate;
    public:
        //Thread para deshabilitar dispenser y hacer restock cuando una de las pilas del dispenser llegue a 0
        void restockPush();
        
};