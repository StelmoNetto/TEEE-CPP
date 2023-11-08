#include "literal_cozido_cadeia_de_resistencia_ohmica.h"

#include <complex>
#include <string>
using std::cout, std::endl, std::cin, std::string, std::string_view, std::complex;

namespace Classes
{
    const ResistenciaOhmica ResistenciaOhmica::CondutorPerfeito{ 0.0 };

    ResistenciaOhmica::ResistenciaOhmica(long double valor)
    {
        if (valor < 0)
        {
            cout << "Resistencia Ohmica não pode ser negativa." << endl;
            std::exit(1);
        }
        resistencia = valor;
    }

    double ResistenciaOhmica::valor() const { return resistencia; }

    inline namespace SobrecargaDeOperadores
    {
        inline namespace Literais
        {
            ResistenciaOhmica operator"" _Ohm(long double resistencia)
            {
                return { resistencia };
            }

            long double cadeiaDeCoresParaResistencia(string_view cadeiaDeCores)
            {
                return 1.0L;
            }

            ResistenciaOhmica operator"" _Ohm(const char* cadeiaDeCores, size_t comprimento)
            {
                auto resistencia{ cadeiaDeCoresParaResistencia(cadeiaDeCores) };

                return { resistencia };
            }
        }
    }
}
