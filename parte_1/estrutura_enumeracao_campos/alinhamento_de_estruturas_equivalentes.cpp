#include<iostream>
using std::cin, std::cout, std::endl;

struct foo4
{
  int a;
  char b;
  float c;
  double d;
  bool e;
};

struct foo4_
{
  int a; // 4 bytes
  char b; // 1 byte
  char _pad0[3]; // 3 bytes de preenchimento
  float c; // 4 bytes
  char _pad1[4]; // 4 bytes de preenchimento
  double d; // 8 bytes - MAIOR
  bool e; // 1 byte
  char _pad2[7]; // 7 bytes de preenchimento
}; //para fazer a struct multiplo de 8

int main()
{
    cout << "Tamanho(foo4) = " << sizeof(foo4) << " bytes\n";
    cout << "Alinhamento(foo4) = " << alignof(foo4) << " bytes\n\n";

    cout << "Tamanho(foo4_) = " << sizeof(foo4_) << " bytes\n";
    cout << "Alinhamento(foo4_) = " << alignof(foo4_) << " bytes\n\n";
}
