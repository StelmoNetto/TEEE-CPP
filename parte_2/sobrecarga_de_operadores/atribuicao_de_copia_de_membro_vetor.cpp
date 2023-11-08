#include "atribuicao_de_copia_de_membro_vetor.h"

#include <iostream>
using std::cout, std::endl, std::cin;

namespace Classes
{
    inline namespace SobrecargaDeOperadores
    {
        UmaClasse::UmaClasse() : membroAlocado{ new int{} } { cout << "Objeto criado e alocando membros " << membroAlocado << "\n"; }

        UmaClasse::UmaClasse(std::size_t n) : tamanhoDoVetor{ n }, membroAlocado{ new int[n]{} }
        {
            cout << "Objeto criado e alocando membros " << membroAlocado << "\n";
        }

        UmaClasse::UmaClasse(std::initializer_list<int> lista) : tamanhoDoVetor{ lista.size() }, membroAlocado{ new int[tamanhoDoVetor]{} }
        {
            cout << "Objeto criado e alocando membros " << membroAlocado << "\n";
            std::copy(lista.begin(), lista.end(), this->membroAlocado);
        }

        UmaClasse::UmaClasse(const UmaClasse& outro) : tamanhoDoVetor{ outro.tamanhoDoVetor }, membroAlocado{ new int[outro.tamanhoDoVetor] }
        {
             cout << "Objeto criado, alocando e copiando membros " << membroAlocado << "\n";
             std::copy(outro.membroAlocado, outro.membroAlocado + outro.tamanhoDoVetor, this->membroAlocado);
        }
        //Ou:
        /*UmaClasse::UmaClasse(const UmaClasse& outro)
        {
             cout << "Objeto criado, alocando e copiando membros " << membroAlocado << "\n";
             *this = outro;
        }*/

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

              delete [] this->membroAlocado; //Deleta o que já existe. Pode ser um vetor

              this->membroAlocado = new int[objetoDaDireita.tamanhoDoVetor]; //Alocação

              this->tamanhoDoVetor = objetoDaDireita.tamanhoDoVetor;

              //Cópia dos valores, caso de um vetor de elementos.
              std::copy(objetoDaDireita.membroAlocado, objetoDaDireita.membroAlocado + objetoDaDireita.tamanhoDoVetor, this->membroAlocado);
            }
            return *this;
        }

        void UmaClasse::exibirDados() const
        {
            cout << "[ ";
            for(int i = 0; i < tamanhoDoVetor; i++)
              cout << membroAlocado[i] << " ";
            cout << "]";
        }

        UmaClasse UmaClasse::novo() const { return UmaClasse{}; }
        UmaClasse UmaClasse::novo(int numeroDeElementos) const { UmaClasse novoObjeto{ numeroDeElementos }; return novoObjeto; }
        UmaClasse UmaClasse::novo(const UmaClasse& obj) const { return obj; }

        const int* UmaClasse::obterDado() const { return membroAlocado; }

        UmaClasse::~UmaClasse()
        {
            cout << "Objeto destruido e desalocando membros " << membroAlocado << "\n";
            delete [] membroAlocado;
        }
    }
}
