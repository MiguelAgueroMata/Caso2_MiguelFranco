#include <iostream>
#include <string>
#include "Queue.h"
#include <random>
#include <json/json.h>
#include "JsonConfig.h"
#include "publicArea.h"
#include "linkedList.h"

using namespace std;

class SecurityCheck
{
    private:
        Queue checkQueue;

    public:

        bool checkingAttendant(Queue checkQueue, int incorrectTicket)
        {
            random_device rd;
            mt19937 gen(rd());
            uniform_int_distribution<int> distribution(1, 100);
            int random_number = distribution(gen);

            if (random_number <= incorrectTicket)
            {
                return false;
            }
            else
                return true;
        }


};