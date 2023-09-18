

void runSimulation(/*Aun debo definir bien que usar de parametros para la configuracion de la simulacion*/);

/*Respecto a los threads la verdad que estoy mamando en como se hacen

    Pero mi idea es mas o menos que desde que pasa el primero por el filtro de seguridad se empiece a correr un thread el cual dependiendo de una probabilidad
    en vez de mandar la persona a la lista/cola de la zona del concierto los mande a el baño, tienda, dispenser, foodStore y luego de ahi los manda a la zona del concierto
    
    Ya cuando se encuentra gente en la zona del concierto lo mismo

    En cuanto al dispenser se restockearian cuando se acaba alguno de los productos y el uso pues seria por timer tambien al pasar el tiempo
    se sacan los items de forma aleatoria y esto podria pasar varias veces para una sola persona simulando varias compras

    Igual con las tienda de comida solo que en vez de correr varias veces el timer por persona seria una sola vez dependiendo de cuantas cosas ordene de comer

    Y la tienda de souvenirs se puede crear un timer que varie entre unos 5-15 segundos para simular la gente que compra rapido y los que no y la cantidad de cosas que comprar se 
    seleccionaria de forma aleatoria 

    Al terminar todos los timers se sacaria de las listas de items la cantidad aleatoria seleccionada

    Respecto a los baños serian simplemente una cola con un thread/timer de un tiempo definido o con unas 2-3 opciones de tiempo
    y que al pasar ese tiempo se saca el primero 



*/


int main()
{
    void runSimulation(int lengthOfSimulation, int areaOfSimulation) // aca se podrian agregar las probabilidades de ir de compras
                                                                     //de decomiso, ticket equivocado y esas cosas
                                                                     //o eso se hace en el json? no se como funciona el json la verdad
                                                                     //hay que preguntarle a el profe       
    return 0
}