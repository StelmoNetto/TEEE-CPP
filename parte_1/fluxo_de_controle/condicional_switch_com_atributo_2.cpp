#include <iostream>
using std::cin,std::cout, std::endl;

int main()
{
  switch (auto resposta = '1'; resposta)
  {
    case '1':
      //Executa alguma tarefa para resposta == '1'
      cout << "resposta == '1'" << endl;
      [[fallthrough]]; //Não esqueça do ;
    case '2':
      //Executa alguma tarefa para resposta == '1' ou '2'
      cout << "resposta == '1' ou '2'" << endl;
    break;
    case '3':
      //Executa a opção 3 do menu
    break;
    default:
      cout << "Favor digitar uma opção válida.";
  }
}
