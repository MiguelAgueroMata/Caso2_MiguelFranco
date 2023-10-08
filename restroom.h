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
        int dequeueRestroom()
        {
            //De fijo se puede hacer mejor pero di por ahora asi queda
            if (!urinal.isEmpty())
            {
                //falta thread
                urinal.dequeue();
            }
            if (!toilet.isEmpty())
            {
                //falta thread
                toilet.dequeue();
            }
        }
        //Se corre probabilidad para ver si vaa usar orinal o servicio.
        void restroomFacilityToUse(Queue espera)
        {
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<int> distribution(1, 3);
            int random_number = distribution(gen);
            // Agregar thread aca???? o no? ya veremos como lo hago
            if(random_number == 1)
            {
                //podemos hacer que el dequeue retorne el nodo para eliminarlo de waiting  
                // y pasarlo a orinal de una vez .
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