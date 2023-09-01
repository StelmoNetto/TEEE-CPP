#include <iostream>
using std::cin,std::cout, std::endl;

int main()
{
    for (int t = 0; t < 100; ++t)
    {
      cout << t << endl;

      if (t == 10)
        break;
    }
}
