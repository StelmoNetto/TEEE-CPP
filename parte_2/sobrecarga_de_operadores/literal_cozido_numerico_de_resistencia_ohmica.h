#pragma once
namespace Classes
{
    class ResistenciaOhmica
    {
    public:
        static const ResistenciaOhmica CondutorPerfeito;
        ResistenciaOhmica(long double valor);

        double valor() const;

    private:
        long double resistencia;
    };

    inline namespace SobrecargaDeOperadores
    {
        inline namespace Literais
        {
            ResistenciaOhmica operator"" _Ohm(long double resistencia);
        }
    }
}
