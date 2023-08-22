import  <iostream>;
using  namespace  std;
int  main()
{
    int  i  {  11  };
    strong_ordering  result  {  i  <=>  0  };

    //Não  definidos  no  g++
    /*if  (result  ==  strong_ordering::less)  {  cout  <<  "Menor"  <<  endl;  }
    if  (result  ==  strong_ordering::greater)  {  cout  <<  "Maior"  <<  endl;  }
    if  (result  ==  strong_ordering::equal)  {  cout  <<  "Igual"  <<  endl;  }*/
  //Alternativa  para  o  g++: retornam true, se verdadeiro
    if  (is_lt(result))  {  cout  <<  "Menor"  <<  endl;  }
    if  (is_lteq(result))  {  cout  <<  "Menor  ou  igual"  <<  endl;  }
    if  (is_gt(result))  {  cout  <<  "Maior"  <<  endl;  }
    if  (is_gteq(result))  {  cout  <<  "Maior  ou  igual"  <<  endl;  }
    if  (is_eq(result))  {  cout  <<  "Igual"  <<  endl;  }
    if  (is_neq(result))  {  cout  <<  "Diferente"  <<  endl;  }
}
