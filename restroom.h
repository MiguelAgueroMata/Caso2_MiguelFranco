#include <iostream>
#include <string>
#include "queue.h"
#include <random>

class Restroom
{
    private:
        int totalCapacity;
        int urinalCapacity;
        int toiletCapacity;
        Queue urinal;
        Queue toilet;
        Queue waiting;
        

    public:
        //Thread para sacar a las personas de el servicio y mandarlas de vuelta a la zona de donde venian.
        int dequeueRestroom();
        //Se corre probabilidad para ver si vaa usar orinal o servicio.
        void restroomFacilityToUse(Queue espera)
        {
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<int> distribution(1, 3);
            int random_number = distribution(gen);

            if(random_number == 1)
            {
                urinal.queue(espera.front());
            }
            else if (random_number == 2)
            {
                toilet.queue(espera.front());
            }
            else
                waiting.dequeue();


        }


};