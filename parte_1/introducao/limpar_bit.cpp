import  <iostream>;
using  namespace  std;

int  main()
{
  int numero{ 3 }; //0b0000  ...  0011
  int  posicaoDoBit{  0  };  //1º  bit

  const int  LSB{  1  };  //0b0000  ...  0001
  int mascara  =  ~(LSB  <<  posicaoDoBit);  //~(0b0000  ...  0001) -> 0b1111  ...  1110

  //Limpa um bit em posicaoDoBit
  int resultado  =  numero  &  mascara; //0b0000  ...  0010
  cout << resultado << endl;

  //Nova limpeza
  posicaoDoBit = 1;  //2º  bit
  mascara =  ~(LSB  <<  posicaoDoBit);  //~(0b0000  ...  0010) -> 0b1111  ...  1101
  resultado =  numero  &  mascara; //0b0000  ...  0001
  cout << resultado << endl;
}
