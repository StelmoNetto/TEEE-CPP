
import <format>;
import<iostream>;
using namespace std; //Inclui toda a biblioteca-padrão do namespace std no código fonte

int main()
{
  int  i{  42  };
  cout  <<  format("|{:10d}|",  i)  <<  endl;    //  |         42|
  cout  <<  format("|{:10b}|",  i)  <<  endl;    //  |     101010|
  cout  <<  format("|{:#10b}|",  i)  <<  endl;  //  |   0b101010|
  cout  <<  format("|{:10X}|",  i)  <<  endl;    //  |         2A|
  cout  <<  format("|{:#10X}|",  i)  <<  endl;  //  |       0X2A|

  string s{ "ProCpp" };
  cout << format("|{:_^10}|", s) << endl; //  |__ProCpp__|
}
