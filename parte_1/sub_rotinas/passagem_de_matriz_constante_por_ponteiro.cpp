#include<iostream>
using std::cin, std::cout, std::endl;

void imprimeMatriz1(const int matriz[2][2]); //Ou: void imprimeMatriz1(int matriz[][2]); Ou void imprimeMatriz1(int (*matriz)[2])
void imprimeMatriz2(const int** matriz);

int main()
{
  int matriz1[2][2]; //Matriz de dimensão 2x2 declarada diretamente no código.
  int* matriz3[2]; //Matriz com duas linha, mas o número de colunas pode ser qualquer ao alocar.

  int** matriz2; //Matriz cujas dimensões serão alocadas dinamicamente.
  //alocando primeiro as linhas. Um vetor de 2 elementos ponteiro
  matriz2 = new int*[2];
  int i, j;

  //Para cada linha, um vetor de 2 elementos é alocado
  for (i = 0; i < 2; ++i)
  {
    matriz2[i] = new int[2];
    matriz3[i] = new int[2];
  }

  for (i = 0; i < 2; ++i)
  {
    for (j = 0; j < 2; ++j)
    {
      matriz1[i][j] = i;
      matriz2[i][j] = i;
      matriz3[i][j] = i;
    }
  }

  //Exemplificando o uso das funções com protótipos diferentes.
  imprimeMatriz1(matriz1);
  imprimeMatriz2(const_cast<const int**>(matriz2)); //Precisa de casting especial
  imprimeMatriz2(const_cast<const int**>(matriz3)); //Precisa de casting especial

  //imprimeMatriz1(matriz3); //Não é compatível com a interface

  for (i = 0; i < 2; ++i)
  {
    delete [] matriz2[i];
    delete[] matriz3[i];
  }

  delete [] matriz2;
}

void imprimeMatriz1(const int matriz[2][2]) //Ou: void imprimeMatriz1(int matriz[][2])
{
  int i, j;
  for (i = 0; i < 2; ++i)
  {
    for (j = 0; j < 2; ++j)
    {
      cout << matriz[i][j] << " ";
    }
    cout << "\n";
  }
}

void imprimeMatriz2(const int** matriz)
{
  int i, j;
  for (i = 0; i < 2; ++i)
  {
    for (j = 0; j < 2; ++j)
    {
      cout << matriz[i][j] << " ";
    }
    cout << "\n";
  }
}
