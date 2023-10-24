#include "LEDIndicador.h"

#include "DriverDeLED.h"

LEDIndicador::LEDIndicador(uint32_t corEmHexadecimal, std::unique_ptr<DriverDeLED> driver) : driverDoLED{ std::move(driver) } { driverDoLED->mudarCor(corEmHexadecimal); }

void LEDIndicador::mudarCor(uint32_t corEmHexadecimal){ driverDoLED->mudarCor(corEmHexadecimal); }

bool LEDIndicador::emFuncionamento() const { return driverDoLED->estaOperacional(); }

void LEDIndicador::ligar() { driverDoLED->ligar(); }

void LEDIndicador::desligar() { driverDoLED->desligar(); }

std::unique_ptr<DriverDeLED> driverPadraoDeLED()
{
	return std::make_unique<DriverDeLED>();
}