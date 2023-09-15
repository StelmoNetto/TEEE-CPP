#include<iostream>
using std::cin, std::cout, std::endl;

float calcularMedia(float a, float b){ return (a + b) / 2; }
float calcularMedia(int a, float b){ return (a + b) / 2; }
int calcularMedia(int a, float b){ return (a + b) / 2; } //Erro: não se diferencia pelo tipo de retorno

int main()
{
    cout << calcularMedia(1.f,2.1f) << " " << calcularMedia(1,2.1f) << endl;
}
