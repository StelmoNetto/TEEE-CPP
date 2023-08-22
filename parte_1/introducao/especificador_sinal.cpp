
import <format>;
import<iostream>;
using namespace std; //Inclui toda a biblioteca-padrão do namespace std no código fonte

int main()
{
  int  i{  42  };
  cout  <<  format("|{:<5}|",  i)  <<  endl;      //  |42      |
  cout  <<  format("|{:<+5}|",  i)  <<  endl;    //  |+42    |
  cout  <<  format("|{:<  5}|",  i)  <<  endl;    //  |  42    |
  cout  <<  format("|{:<  5}|",  -i)  <<  endl;  //  |-42    |
}
