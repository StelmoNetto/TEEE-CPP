#include "atribuicao_de_copia.h"

#include <iostream>
using std::cout, std::endl, std::cin;

namespace Classes
{
    inline namespace SobrecargaDeOperadores
    {
        UmaClasse::UmaClasse() : membroAlocado{ new int{} } { cout << "Objeto criado e alocando membros " << membroAlocado << "\n"; }

        UmaClasse::UmaClasse(int n) : membroAlocado{ new int{n} } { cout << "Objeto criado e alocando membros " << membroAlocado << "\n"; }

        UmaClasse::UmaClasse(const UmaClasse& outro) : membroAlocado{ new int{ *outro.membroAlocado } }
        {
             cout << "Objeto criado, alocando e copiando membros " << membroAlocado << "\n";
        }

        UmaClasse::UmaClasse(UmaClasse&& outro) noexcept : membroAlocado{ outro.membroAlocado }
        {
             cout << "Objeto criado, alocando e movimentando membros " << membroAlocado << "\n";
             outro.membroAlocado = nullptr;
        }

        UmaClasse& UmaClasse::operator=(const UmaClasse& objetoDaDireita)
        {
            if (this != &objetoDaDireita)
            {
                cout << "Atribuicao ocorrendo de " << &objetoDaDireita << " para " << this << "\n";

                delete this->membroAlocado;

                this->membroAlocado = new int{ *objetoDaDireita.membroAlocado };
            }
            return *this;
        }

        UmaClasse UmaClasse::novo() const { return UmaClasse{}; }
        UmaClasse UmaClasse::novo(int valorDoMembro) const { UmaClasse novoObjeto{ valorDoMembro }; return novoObjeto; }
        UmaClasse UmaClasse::novo(const UmaClasse& obj) const { return obj; }

        int UmaClasse::obterDado() const { return (membroAlocado) ? *membroAlocado : -1; }

        void UmaClasse::altera(const UmaClasse& fonte) { *membroAlocado = *fonte.membroAlocado; }

        UmaClasse::~UmaClasse()
        {
            cout << "Objeto destruido e desalocando membros " << membroAlocado << "\n";
            delete membroAlocado;
        }
    }
}
