#include<iostream>
#include<tuple>
#include<cmath>
using std::cin, std::cout, std::endl, std::tuple;

template<size_t M>
tuple<float, float> normaDosComplexos(float(&matriz)[M][2])
{
    float normas[M];
    int i = 0;
    for (auto [real, img] : matriz)
    {
        normas[i++] = sqrt(real * real + img * img);
    }
    return { normas[0],normas[1] };
}

template<size_t M>
void exibeMatriz(const float(&matriz)[M][2])
{
    for (auto& comp : matriz)
    {
        for (auto e : comp)
            cout << e << " ";
        cout << "\n";
    }
}

int main()
{
    float complexos[][2] = { {2.1,4.1},{4.5,7.1} };

    auto[norma1, norma2] = normaDosComplexos(complexos);

    cout << "N1 = " << norma1 << " N2 = " << norma2 << endl;

    exibeMatriz(complexos);
}
