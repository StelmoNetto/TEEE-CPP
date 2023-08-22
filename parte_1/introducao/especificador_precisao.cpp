
import <format>;
import<iostream>;
using namespace std; //Inclui toda a biblioteca-padrão do namespace std no código fonte

int main()
{
  double  d{  3.1415  /  2.3  };
  cout  <<  format("|{:12g}|",  d)  <<  endl;                                                  //  |      1.365870|
  cout  <<  format("|{:12.2}|",  d)  <<  endl;                                                //  |          1.37|
  cout  <<  format("|{:12e}|",  d)  <<  endl;                                                  //  | 1.365870e+00|

  int width{ 12 };
  int precision{ 3  }; cout << format("|{2:{0}.{1}f}|", width, precision, d) << endl; // |         1.366|
  cout << format("|{:_^10.3}|", "ProCpp") << endl; //  |___Pro____|
}
