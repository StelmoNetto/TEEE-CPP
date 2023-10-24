#include<iostream>
using std::cin, std::cout, std::endl;

namespace N1
{
    void funcao(){ cout << "em N1\n"; }
}

namespace N2
{
    void funcao(){ cout << "em N2\n"; }
}

int main()
{
  {
    using namespace N1;
    funcao(); //Chamada para função de N1
  }
  {
    using namespace N2;
    funcao(); //Chamada para função de N2
  }
}
