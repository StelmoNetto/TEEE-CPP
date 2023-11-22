import DistanciaVetorial;
import DistanciaVetorialDeStrings;

import <string>;
import <iostream>;
using std::cout, std::endl;

int main()
{
 using namespace Heranca::Estendendo::Exemplo;

 Vetor v1{ 1,1 }, v2{ 2,4 };
 auto distanciaDeV1ParaV2{ DistanciaVetorial::distancia(v1,v2) };
 cout << "distancia(" << v1 << "," << v2 << ") = " << distanciaDeV1ParaV2 << endl;

 std::string cadeia1{ "String1" }, cadeia2{ "String2" };
 auto distanciaEntreCadeias{ DistanciaEntreCadeias::distancia(cadeia1,cadeia2) };
 cout << "distancia(" << cadeia1 << "," << cadeia2 << ") = " << distanciaEntreCadeias << endl;
}
