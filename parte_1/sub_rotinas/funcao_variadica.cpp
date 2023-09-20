#include <cstdarg>
#include <iostream>
 
void exibeParametrosVariados(const char* formatacao...) // "const char* formatacao, ..." é também válido
{
    va_list args; //Armazena os argumentos
    va_start(args, formatacao); //Habilita o acesso aos argumentos
 
    while (*formatacao != '\0')
    {
        if (*formatacao == 'd')
        {
            int i = va_arg(args, int); //Extrai um argumento
            std::cout << i << '\n';
        }
        else if (*formatacao == 'c')
        {
            // Notar a conversão automática para tipo integral
            int c = va_arg(args, int);
            std::cout << static_cast<char>(c) << '\n';
        }
        else if (*formatacao == 'f')
        {
            double d = va_arg(args, double);
            std::cout << d << '\n';
        }
        ++formatacao;
    }
 
    va_end(args); //Finaliza
}
 
int main()
{
    exibeParametrosVariados("dcff", 3, 'a', 1.999, 42.5);
}
