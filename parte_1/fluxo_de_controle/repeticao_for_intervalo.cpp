#include <iostream>
using std::cin,std::cout, std::endl;

int main()
{
    {
      int vetor[] = { 2, 4, 6, 8 };

      cout << "Elementos da 1ª lista:\n";
      for (auto elemento : vetor)
        cout << elemento << " ";
      cout << "\n";
    }

    {
      cout << "Elementos da 2ª lista:\n";
      for (auto elemento : {1.2, 3.3, 4.5})
      {
        cout << elemento << " ";
      }
      cout << endl;
    }
}
