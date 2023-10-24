#if __has_include("DriverDeLED.h")
 #include "DriverDeLED.h"
#elif __has_include("Drivers/DriverDeLED.h")
 #include "Drivers/DriverDeLED.h"
#endif

#include<iostream>
using std::cin, std::cout, std::endl;

int main()
{
    DriverDeLED driverDeLEDDoArduinoUno{ };

    if(driverDeLEDDoArduinoUno.estaOperacional())
        driverDeLEDDoArduinoUno.ligar();
}
