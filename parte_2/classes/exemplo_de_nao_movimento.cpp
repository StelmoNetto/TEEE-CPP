#include<iostream>
#include<string>
using std::cin, std::cout, std::endl;

void exibe(const std::string&& str)
{
  cout << "Mensagem com l-value " << str << endl;
}

void exibeMensagem(const std::string&& str)
{
 exibe(str); //Não! Dentro da função str é um lvalue
 exibe(std::move(str)); //O correto
}

int main()
{
  std::string a{ "Ok" }, b{ " 10" };

  exibeMensagem(a + b); //um objeto temporário é criado e chama exibeMensagem(const string&& str)
  exibeMensagem(std::move(a)); //Chama exibeMensagem(const string&& str)
}
