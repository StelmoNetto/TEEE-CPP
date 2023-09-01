#include <iostream>
using std::cin,std::cout, std::endl;

int main()
{
    for (int t = 0; t < 15; ++t)
    {
      if (t < 10)
        continue; //Faz ele voltar para inicio do laço e continuar

      cout << t << endl;
    }
}
