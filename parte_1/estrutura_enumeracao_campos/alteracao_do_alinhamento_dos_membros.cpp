#include<iostream>
using std::cin, std::cout, std::endl;

struct alignas(4) fooM {//Ignorado - menor que os dos membros
  alignas(2) char a; //Alinhamento dos membros (ignorado)
  alignas(8) int b; //Alinhamento usado (maior)
};

int main()
{
    cout << "Tamanho(fooM) = " << sizeof(fooM) << " bytes\n";
    cout << "Alinhamento(fooM) = " << alignof(fooM) << " bytes\n\n";
}
