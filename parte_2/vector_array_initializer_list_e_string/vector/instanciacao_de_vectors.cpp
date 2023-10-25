#include <vector>
using std::vector;

int main()
{
  vector objVec{ 2.1,1.0,3.2 }; //Um vetor de 3 elementos definidos por {}

  vector<double> objVec2(2); //Um vetor de 2 elementos double

  auto objVec3 = new vector<double>(3); //3 elementos. Não use alocação

  vector<double> objVec4 = { 2.1,1.0,3.2 }; //Vetor de 3 elementos

  vector<double> objVec5; //Vetor de 0 elementos

  auto vec = vector{ 5.2,1.7 }; //Um vetor de 2 elementos

  auto vec2 = vector<double>{ 5.2,1.7 }; //Um vetor de 2 elementos

  auto vec3 = vector<double>(4,1.0); //Um vetor de 4 elementos 1.0
}
