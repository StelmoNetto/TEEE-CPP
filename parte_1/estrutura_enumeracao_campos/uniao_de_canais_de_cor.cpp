#include <iostream>
#include <cstdint>
using namespace std;


int main()
{
    union {
        uint16_t cor;

        struct
        {
            uint16_t r : 4;
            uint16_t g : 4;
            uint16_t b : 4;
        }canal;
    }sensorDeCor;

    sensorDeCor.cor = 0b0000'0000'1001'1000; //Leitura do sensor

    cout << "Canais RGB = {" << sensorDeCor.canal.r << "," << sensorDeCor.canal.g << "," << sensorDeCor.canal.b << "}" << endl;
}
