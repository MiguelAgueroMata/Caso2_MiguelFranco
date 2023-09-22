#include <iostream>
#include <string>
#include "queue.h"

class Restroom
{
    private:
        int totalCapacity;
        int urinalCapacity;
        int toiletCapacity;
        Queue bathroom;
        

    public:
        //Thread para sacar a las personas de el servicio y mandarlas de vuelta a la zona de donde venian.
        int popRestroom();

};