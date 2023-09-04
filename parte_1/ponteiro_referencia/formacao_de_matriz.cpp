#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
    int* vetorDePonteiros[2];
    int v1[2]{ 1, 2 }; //v1 aponta para v1[0]
    int v2[2]{ 3, 4 }; //v2 aponta para v2[0]

    //O endereço que está em v1 é atribuído ao primeiro elemento de vetorDePonteiros
    vetorDePonteiros[0] = v1;

    //O endereço que está em v2 é atribuído ao segundo elemento de vetorDePonteiros
    vetorDePonteiros[1] = v2;

    //vetorDePonteiros passa a se comportar como matriz
    for (int i = 0; i < 2; ++i)
      for (int j = 0; j < 2; ++j)
        cout<< vetorDePonteiros[i][j]<<" ";
}
