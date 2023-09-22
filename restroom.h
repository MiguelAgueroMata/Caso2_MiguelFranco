#include <iostream>
#include <string>
#include "queue.h"

class Restroom
{
    private:
        int totalCapacity;
        int urinalCapacity;
        int toiletCapacity;
        Queue urinal;
        Queue toilet;
        

    public:
        //Thread para sacar a las personas de el servicio y mandarlas de vuelta a la zona de donde venian.
        int dequeueRestroom();
        //Se corre probabilidad para ver si vaa usar orinal o servicio.
        void restroomFacilityToUse();


};