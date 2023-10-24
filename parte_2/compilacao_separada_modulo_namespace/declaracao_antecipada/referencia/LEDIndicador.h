#pragma once

#include<memory>

class DriverDeLED;

DriverDeLED& driverPadraoDeLED();

class LEDIndicador
{
    public:
    LEDIndicador(uint32_t corEmHexadecimal = 0xFF0000U, DriverDeLED& driver = driverPadraoDeLED());

    void mudarCor(uint32_t corHexadecimal);

    bool emFuncionamento() const;

    void ligar();

    void desligar();

    private:
    DriverDeLED& driverDoLED;
    bool ligado{};
    bool driverEstaOperacional{};
};