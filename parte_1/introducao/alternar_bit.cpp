import  <iostream>;
using  namespace  std;

int  main()
{
  int numero{ 3 }; //0b0000  ...  0011
  int  posicaoDoBit{  1  }; //2º bit

  const int  LSB{  1  };  //0b0000  ...  0001
  int mascara  =  LSB  <<  posicaoDoBit;  //0b0000  ...  0010

  //Alterna um único bit (0 -> 1 / 1 -> 0) em posicaoDoBit
  int resultado  =  numero  ^  mascara; //0b0000  ...  0001
  cout << resultado << endl;
}
