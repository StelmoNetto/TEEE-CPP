#include <iostream>
#include <variant>
using namespace std;


int main()
{
    variant<char, int, float> novaUniao;
    novaUniao = 'a';
    cout << get<char>(novaUniao) << endl;

    novaUniao = 21;
    cout << get<int>(novaUniao) << endl;
    cout << get<float>(novaUniao) << endl; //erro: não corresponde ao tipo atual

    novaUniao = 3.14F;
    cout << get<float>(novaUniao) << endl;
}
