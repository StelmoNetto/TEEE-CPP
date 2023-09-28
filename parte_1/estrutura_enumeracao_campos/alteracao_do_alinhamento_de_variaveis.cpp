#include<iostream>
#include<cstdint>
#include<cmath>
using std::cin, std::cout, std::endl;

int main()
{
    alignas(8)   int a; //Preenche para completa 256
    alignas(256) long b[4];

    cout << "&a = " << std::hex << &a << endl;
    cout << "&b = " <<  std::hex << &b << endl;

    cout << "|&a - &b| = " <<  std::dec << abs(reinterpret_cast<std::uintptr_t>(&a) - reinterpret_cast<std::uintptr_t>(&b)) << endl;
}
