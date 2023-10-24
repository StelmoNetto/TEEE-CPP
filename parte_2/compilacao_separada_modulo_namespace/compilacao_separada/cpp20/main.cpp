import Driver.LED;

import<iostream>;
using std::cin, std::cout, std::endl;

int main()
{
    DriverDeLED driverDeLEDDoArduinoUno{ };

    if(driverDeLEDDoArduinoUno.estaOperacional())
        driverDeLEDDoArduinoUno.ligar();
}
