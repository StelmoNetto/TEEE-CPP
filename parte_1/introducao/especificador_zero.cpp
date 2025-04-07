
#include <format>
#include <iostream>
using namespace std; //Inclui toda a biblioteca-padrão do namespace std no código fonte

int main()
{
  int  i{  42  };

  cout << format("|{:06d}|", i) << endl;  // |000042|
  cout << format("|{:+06d}|", i) << endl; // |+00042|
  cout << format("|{:06X}|", i) << endl;  // |00002A|
  cout << format("|{:#06X}|", i) << endl; // |0X002A|
}
