#include<iostream>
using std::cin, std::cout, std::endl;

struct foo1 //tamanhoEmBytes = 1, alinhamentoEmBytes = 1
{
  char a;
};

struct foo2 //tamanhoEmBytes = 2, alinhamentoEmBytes = 1
{
  char a, b;
};

struct foo3 //tamanhoEmBytes = 8, alinhamentoEmBytes = 4
{
  char a;
  int b;
};

//O registro foo3 transforma-se em:
struct foo3_
{
  char a; // 1 byte
  char _pad0[3]; // 3 bytes de preenchimento
  int b; // 4 bytes
};

int main()
{
    cout << "Tamanho(foo1) = " << sizeof(foo1) << " bytes\n";
    cout << "Alinhamento(foo1) = " << alignof(foo1) << " bytes\n\n";

    cout << "Tamanho(foo2) = " << sizeof(foo2) << " bytes\n";
    cout << "Alinhamento(foo2) = " << alignof(foo2) << " bytes\n\n";

    cout << "Tamanho(foo3) = " << sizeof(foo3) << " bytes\n";
    cout << "Alinhamento(foo3) = " << alignof(foo3) << " bytes\n\n";

    cout << "Tamanho(foo3_) = " << sizeof(foo3_) << " bytes\n";
    cout << "Alinhamento(foo3_) = " << alignof(foo3_) << " bytes\n\n";
}
