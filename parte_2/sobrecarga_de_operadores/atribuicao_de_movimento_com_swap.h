#pragma once

namespace Classes
{
    inline namespace SobrecargaDeOperadores
    {
        class UmaClasse
        {
        public:
            UmaClasse();

            UmaClasse(int valorDoMembro);

            UmaClasse(const UmaClasse& outro);

            UmaClasse(UmaClasse&& outro) noexcept;

            UmaClasse& operator=(const UmaClasse& objetoDaDireita);

            UmaClasse& operator=(UmaClasse&& objetoDaDireita) noexcept;

            UmaClasse novo() const;
            UmaClasse novo(int valorDoMembro) const;
            UmaClasse novo(const UmaClasse& fonte) const;

            int obterDado() const;

            void altera(const UmaClasse& fonte);

            ~UmaClasse();
        private:
            void swap(UmaClasse& outro) noexcept;

            int* membroAlocado{ nullptr };
        };
    }
}
