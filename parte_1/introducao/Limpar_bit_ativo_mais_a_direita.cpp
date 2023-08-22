import  <iostream>;
using  namespace  std;

int  main()
{
  auto  numero  =  3U;  //0b0000  ... 0011

  //Limpa o bit ativo mais à direita (não sinalizados)
  auto  resultado  =  numero  &  (numero  -  1);  //0b0000  ... 0010
  cout << resultado << endl;

  numero  =  resultado;  //0b0000  ... 0010
  resultado  =  numero  &  (numero  -  1);  //0b0000  ... 0000
  cout << resultado << endl;
}
