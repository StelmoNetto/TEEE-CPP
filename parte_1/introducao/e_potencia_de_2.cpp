import  <iostream>;
using  namespace  std;

int  main()
{
  int  numero{  1  }; //0b0000 ...  0001

  //Checa se um inteiro é potência de 2
  bool  ehPotenciaDe2  =  numero  &&  !(numero  &  (numero  -  1)); //true
  cout << ehPotenciaDe2 << endl;

  numero = 2; //0b0000 ...  0010 = 2¹
  ehPotenciaDe2  =  numero  &&  !(numero  &  (numero  -  1)); //true
  cout << std::boolalpha << ehPotenciaDe2 << endl;

  numero = 3; //0b0000 ...  0011
  ehPotenciaDe2  =  numero  &&  !(numero  &  (numero  -  1)); //false
  cout << std::noboolalpha << ehPotenciaDe2 << endl;
}
