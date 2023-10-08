#include <iostream>
#include <fstream>
#include <json/json.h>

class Config {
public:
    int tiempoSimulacion;
    double restroomUse;
    double storeUse;
    double dispenserUse;
    double souvenirShopUse;
    double incorrectTicket;
    double itemConfiscation;
    double illegalItem;
    int maleRestroomCapacity;
    int femaleRestroomCapacity;
    struct EntranceQueue {
        int minTime;
        int maxTime;
    } entranceQueue;
    int areaCapacity;
    struct SouvenirStore {
        int shirts;
        int posters;
        int photocards;
        int albums;
    } souvenirStore;
    struct FoodMenu {
        std::vector<std::string> beverages;
        std::vector<std::string> food;
    } foodMenu;
    struct Dispenser {
        int dispenserBeverageCap;
        int dispenserSnackCap;
        std::vector<std::string> beverages;
        std::vector<std::string> snacks;
    } dispenser;
    struct ExitQueue {
        int minTime;
        int maxTime;
    } exitQueue;
};

int main() {
    std::ifstream configFile("config.json");
    if (!configFile.is_open()) {
        std::cerr << "No se pudo abrir el archivo config.json" << std::endl;
        return 1;
    }

    Json::CharReaderBuilder reader;
    Json::Value root;
    std::string errs;

    if (!Json::parseFromStream(reader, configFile, &root, &errs)) {
        std::cerr << "Error al analizar el JSON: " << errs << std::endl;
        return 1;
    }

    Config config;
    config.tiempoSimulacion = root["tiempoSimulacion"].asInt();
    config.restroomUse = root["restroomUse"].asDouble();
    config.storeUse = root["storeUse"].asDouble();
    config.dispenserUse = root["dispenserUse"].asDouble();
    config.souvenirShopUse = root["souvenirShopUse"].asDouble();
    config.incorrectTicket = root["incorrectTicket"].asDouble();
    config.itemConfiscation = root["itemConfiscation"].asDouble();
    config.illegalItem = root["illegalItem"].asDouble();
    config.maleRestroomCapacity = root["maleRestroomCapacity"].asInt();
    config.femaleRestroomCapacity = root["femaleRestroomCapacity"].asInt();
    config.entranceQueue.minTime = root["entranceQueue"]["minTime"].asInt();
    config.entranceQueue.maxTime = root["entranceQueue"]["maxTime"].asInt();
    config.areaCapacity = root["areaCapacity"].asInt();
    config.souvenirStore.shirts = root["souvenirStore"]["shirts"].asInt();
    config.souvenirStore.posters = root["souvenirStore"]["posters"].asInt();
    config.souvenirStore.photocards = root["souvenirStore"]["photocards"].asInt();
    config.souvenirStore.albums = root["souvenirStore"]["albums"].asInt();
    for (const auto& beverage : root["foodMenu"]["beverages"]) {
        config.foodMenu.beverages.push_back(beverage.asString());
    }
    for (const auto& food : root["foodMenu"]["food"]) {
        config.foodMenu.food.push_back(food.asString());
    }
    config.dispenser.dispenserBeverageCap = root["dispenser"]["dispenserBeverageCap"].asInt();
    config.dispenser.dispenserSnackCap = root["dispenser"]["dispenserSnackCap"].asInt();
    for (const auto& beverage : root["dispenser"]["beverages"]) {
        config.dispenser.beverages.push_back(beverage.asString());
    }
    for (const auto& snack : root["dispenser"]["snacks"]) {
        config.dispenser.snacks.push_back(snack.asString());
    }
    config.exitQueue.minTime = root["exitQueue"]["minTime"].asInt();
    config.exitQueue.maxTime = root["exitQueue"]["maxTime"].asInt();

    configFile.close();

    // Ahora puedes usar la configuración almacenada en la clase Config
    std::cout << "Tiempo de simulación: " << config.tiempoSimulacion << std::endl;
    std::cout << "Uso de baños: " << config.restroomUse << std::endl;
    // ...

    return 0;
}