import  <iostream>;
using  namespace  std;

int  main()
{
  int  valorDoBit  =  1;
  int  numero{  3  };  //0b0000  ...  0011
  int  posicaoDoBit{  3  };  //4º  bit

  const int  LSB{  1  };  //0b0000  ...  0001
  int resultadoDaNegacaoControlada  =  numero  ^  -valorDoBit; //0b0000  ...  0011  ^  0b1111  ...  1111
  int mascara  =  LSB  <<  posicaoDoBit;  //0b0000  ...  1000
  mascara  =  resultadoDaNegacaoControlada & mascara; //0b1111...1100 &  0b0000...1000 = 0b0000...1000

  //Altera um único bit para x (valorDoBit) em posicaoDoBit
  int resultado  =  numero  ^  mascara;  //0b0000  ...  0011 ^ 0b0000  ...  1000 = 0b0000  ...  1011
  cout << resultado << endl;
}
