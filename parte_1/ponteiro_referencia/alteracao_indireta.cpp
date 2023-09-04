#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
    int a = 0, b = 0;
    int* ponteiro; //Ponteiro para um inteiro

    ponteiro = &a; //Aponta para a, pois tem o endereço de a (&a).
    *ponteiro = 10; //O conteúdo de a é alterado para 10

    ponteiro = &b; //Aponta para b, pois tem o endereço de b (&b).
    *ponteiro = 20; //O conteúdo de b é alterado para 20

    cout<<"a = " << a << " b = " << b <<"\n";
}
