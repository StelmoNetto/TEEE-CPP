#pragma once

#include<memory>

class DriverDeLED;

std::unique_ptr<DriverDeLED> driverPadraoDeLED();

class LEDIndicador
{
    public:
    LEDIndicador(uint32_t corEmHexadecimal = 0xFF0000U, std::unique_ptr<DriverDeLED> driver = driverPadraoDeLED());

    void mudarCor(uint32_t corHexadecimal);

    bool emFuncionamento() const;

    void ligar();

    void desligar();

    private:
    std::unique_ptr<DriverDeLED> driverDoLED;
    bool ligado{};
    bool driverEstaOperacional{};
};