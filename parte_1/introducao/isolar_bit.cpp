import  <iostream>;
using  namespace  std;

int  main()
{
  int  numero{  3  };  //0b0000  ...  0011
  int  posicaoDoBit{  2  };  //3º  bit

  const int  LSB{  1  };  //0b0000  ...  0001
  int  mascara  =  LSB  <<  posicaoDoBit;  //0b0000  ...  0001 << 2 = 0b0000  ...  0100

  //Isola (seleciona) um bit – na sua posição
  int  resultado  =  numero  &  mascara;  //0b0000  ...  0000 - bit está na posição isolada
  cout << resultado << endl;
}
