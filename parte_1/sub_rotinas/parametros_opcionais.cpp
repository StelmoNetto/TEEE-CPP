#include<iostream>
#include<optional>
using std::cin, std::cout, std::endl;

float soma(std::optional<float> operando1, std::optional<float> operando2, std::optional<float> operando3) {
 auto somaDosParametros{ 0.0f };
 if(operando1) somaDosParametros += operando1.value();
 if(operando2) somaDosParametros += operando2.value();
 if(operando3) somaDosParametros += operando3.value();
 return somaDosParametros;
}

int main()
{
  auto somatorio = soma(1.0f,std::nullopt,2.5f);
  cout << "Somatorio = " << somatorio << endl;
}
