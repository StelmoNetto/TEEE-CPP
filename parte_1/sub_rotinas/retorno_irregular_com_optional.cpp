#include<iostream>
#include<optional>
using std::cin, std::cout, std::endl;

std::optional<int> posicaoDoItemNaLista(int codigoDoItemBuscado)
{
 int itens[]{ 21,531,9 };

 for(int posicao{ 0 }; auto codigoDoItem : itens) {
  if(codigoDoItem == codigoDoItemBuscado)
   return posicao;

  posicao++;
 }
 return std::nullopt; //Representa item não encontrado
}

int main()
{
  auto codigoDeItemInexistente{ -1 };
  auto posicaoDoItem = posicaoDoItemNaLista(codigoDeItemInexistente);

  if(posicaoDoItem)
    cout << "Item encontrado na " << *posicaoDoItem + 1 << char(166) << " posicao da lista" << endl;
  else
    cout << "Item não encontrado" << endl;
}
