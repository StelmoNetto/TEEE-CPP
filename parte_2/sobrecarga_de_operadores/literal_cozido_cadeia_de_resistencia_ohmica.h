#pragma once

#include <iostream>
#include <string_view>

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

            long double cadeiaDeCoresParaResistencia(std::string_view cadeiaDeCores);

            ResistenciaOhmica operator"" _Ohm(const char* cadeiaDeCores, size_t comprimento);
        }
    }
}
