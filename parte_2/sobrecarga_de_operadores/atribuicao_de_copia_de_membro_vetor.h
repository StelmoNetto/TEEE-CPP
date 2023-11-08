#pragma once

#include <initializer_list>

namespace Classes
{
    inline namespace SobrecargaDeOperadores
    {
        class UmaClasse
        {
        public:
            UmaClasse();

            UmaClasse(std::size_t numeroDeElementos);

            UmaClasse(std::initializer_list<int> lista);

            UmaClasse(const UmaClasse& outro);

            UmaClasse(UmaClasse&& outro) noexcept;

            UmaClasse& operator=(const UmaClasse& objetoDaDireita);

            UmaClasse novo() const;
            UmaClasse novo(int numeroDeElementos) const;
            UmaClasse novo(const UmaClasse& fonte) const;

            void exibirDados() const;

            const int* obterDado() const;

            ~UmaClasse();
        private:
            std::size_t tamanhoDoVetor{};
            int* membroAlocado{ nullptr };
        };
    }
}
