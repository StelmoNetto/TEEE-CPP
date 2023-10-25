#include <iostream>
#include <vector>
using std::vector, std::cout, std::endl;

int main()
{
    vector vetor{ 2.1,1.0,3.2,4.4,7.2 };

    auto iterProximo = vetor.erase(vetor.begin()); //Remove o 1º elemento (no iterador)
    cout << *iterProximo << endl;

    auto mostrar = [](auto vetor)
    {
        cout << "elementos:\n";
        for(auto e : vetor)
            cout << e << endl;
    };

    mostrar(vetor);

    vetor.erase(vetor.begin(), vetor.begin() + 2); /*Remove os elementos entre [itInferior, itSuperior[ */
    mostrar(vetor);
}
