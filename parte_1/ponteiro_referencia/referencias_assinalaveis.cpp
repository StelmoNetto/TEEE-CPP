#include<iostream>
#include<functional>
using std::cin,std::cout, std::endl;

int main()
{
    int x{ 4 }, y{};

    std::reference_wrapper<int> referenciaMutante = std::ref(x);
    cout << referenciaMutante << endl;

    referenciaMutante = y; //ou std::ref(y);
    cout << referenciaMutante << endl;
}
