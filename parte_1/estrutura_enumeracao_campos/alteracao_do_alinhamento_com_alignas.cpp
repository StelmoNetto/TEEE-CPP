#include<iostream>
using std::cin, std::cout, std::endl;

struct alignas(4) foo { //Alinhamento de 4 bytes
  char a;
  char b;
};

int main()
{
    cout << "Tamanho(foo) = " << sizeof(foo) << " bytes\n";
    cout << "Alinhamento(foo) = " << alignof(foo) << " bytes\n\n";
}
