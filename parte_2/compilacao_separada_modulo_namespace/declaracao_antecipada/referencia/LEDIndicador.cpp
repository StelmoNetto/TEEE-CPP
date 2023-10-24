#include "LEDIndicador.h"

#include "DriverDeLED.h"

LEDIndicador::LEDIndicador(uint32_t corEmHexadecimal, DriverDeLED& driver) : driverDoLED{ driver } { driverDoLED.mudarCor(corEmHexadecimal); }

void LEDIndicador::mudarCor(uint32_t corEmHexadecimal){ driverDoLED.mudarCor(corEmHexadecimal); }

bool LEDIndicador::emFuncionamento() const { return driverDoLED.estaOperacional(); }

void LEDIndicador::ligar() { driverDoLED.ligar(); }

void LEDIndicador::desligar() { driverDoLED.desligar(); }

DriverDeLED& driverPadraoDeLED()
{
	static DriverDeLED driverDeLED{};
	return driverDeLED;
}