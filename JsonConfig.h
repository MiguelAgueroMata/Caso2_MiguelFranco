#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

//using json = nlohmann::json;
using namespace std; 

class Configuration {
    public:
        bool loadFromFile(const string& filename) 
        {
            //Aqui iria el codigo para leer o parsear el json(no se como se le diga) lo cual aun no se como hacer del todo
        }

        json getData() const 
        {
            return data;
        }

    private:
        	json data;
};

