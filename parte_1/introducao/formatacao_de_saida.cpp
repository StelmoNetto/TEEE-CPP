
import <format>;
import<iostream>;
using namespace std; //Inclui toda a biblioteca-padrão do namespace std no código fonte

int main()
{
    //15 será exibido no local indicado por {}
    std::cout << format("Teste de saida do inteiro {} com format\n", 15);

    //Índices são usados para indicar a ordem de exibição dos valores
    int n{}; //inicializa com o valor padrão: 0
    auto s1{ format("Leu {1} bytes de {0}", "arq.txt", n) };
    std::cout << s1 << std::endl;

    //Não é possível usar formatação com e sem índice
    //Comentar a linha abaixo
    //std::cout  <<  format("Leu  {1}  bytes  de  {}",  "arq.txt",  n)  <<  std::endl;
}
