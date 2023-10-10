#include<iostream>
#include<string>
using std::cin, std::cout, std::endl;

void exibeMensagem(const std::string& str)
{
 cout << "Mensagem com l-value " << str << endl;
}

void exibeMensagem(const std::string&& str)
{
 cout << "Mensagem com r-value " << str << endl;
}

int main()
{
  std::string a{ "Ok" }, b{ " 10" };

  exibeMensagem(a); //a é um l-value e chama exibeMensagem(const string& str)
  exibeMensagem(a + b); //um objeto temporário é criado e chama exibeMensagem(const string&& str)
  exibeMensagem(std::move(a)); //Chama exibeMensagem(const string&& str)
}
