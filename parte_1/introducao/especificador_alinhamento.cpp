
import <format>;
import<iostream>;
using namespace std; //Inclui toda a biblioteca-padrão do namespace std no código fonte

int main()
{
  int  i{  42  };
  cout  <<  format("|{:7}|",  i)  <<  endl;      //  |          42|
  cout  <<  format("|{:<7}|",  i)  <<  endl;    //  |42          |
  cout  <<  format("|{:_>7}|",  i)  <<  endl;  //  |_____42|
  cout  <<  format("|{:_^7}|",  i)  <<  endl;  //  |__42___|
}
