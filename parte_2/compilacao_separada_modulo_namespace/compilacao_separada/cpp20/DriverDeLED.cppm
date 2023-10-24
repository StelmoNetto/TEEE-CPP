export module Driver.LED;

#include<cstdint>

export class DriverDeLED
{
    public:
    using cor_t = std::uint32_t;
    using enderecoDaPorta_t = std::uint32_t;
    using pino_t = std::uint32_t;

    static constexpr cor_t LEDVermelho{ 0xFF0000U };
    static constexpr enderecoDaPorta_t EnderecoLEDArduinoUno { 0x400e1200 };
    static constexpr pino_t PinoPadraoDoLED { 1 };

    DriverDeLED(cor_t cor = LEDVermelho, enderecoDaPorta_t endereco = EnderecoLEDArduinoUno, pino_t numeroDoPino = PinoPadraoDoLED);

    bool estaOperacional() const;

    void mudarCor(cor_t cor);

    void ligar();

    void desligar();

    private:
    cor_t corDoLED;
    const enderecoDaPorta_t enderecoDaPorta;
    const pino_t pino{};
};
