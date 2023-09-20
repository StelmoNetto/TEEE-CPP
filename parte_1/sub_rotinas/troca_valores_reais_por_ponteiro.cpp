#include <iostream>
using std::cin, std::cout, std::endl;

void trocarValores(float* apontaParaA, float* apontaParaB)
{
    auto copiaDeA{ *apontaParaA };
    *apontaParaA = *apontaParaB;
    *apontaParaB = copiaDeA;
}

int main()
{
      auto a{ 2.0F }, b{ 1.5F };

      trocarValores(&a, &b);
      cout << "A = " << a << " B = " << b << endl;
}
