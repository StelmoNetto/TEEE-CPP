#include<iostream>
using std::cin,std::cout, std::endl;

int a, b; //variáveis globais, pois estão fora de um bloco de instruções

//procedimento fazendo uso das variáveis globais
void trocarValores()
{
  int copiaDeA = a; /*copiaDeA é local ao bloco de sub-rotina trocarValores. Assim, o conteúdo da mesma só poderá ser acessada dentro dessa sub-rotina.*/
  a = b;
  b = copiaDeA;
}

int main()
{
  cout<<"Programa que troca os valores de duas variaveis\n";

  cout <<"Entre com o valor de A e B\n";
  cin >> a >> b;

  cout << "Antes da troca:\n A = "<< a <<" e B = "<< b << endl;

  trocarValores();

  cout << "Após a troca:\n A = "<< a <<" e B = "<< b << endl;
}
