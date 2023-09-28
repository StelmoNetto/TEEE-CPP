#include<iostream>
#include<string>
using std::cin, std::cout, std::endl;

int main()
{
    struct Reg
    {
        int i = 0;
        std::string s = "Ok";
    };

    Reg r;
    auto& [id, valor] = r;

    r.i = 4;
    cout << "ID: " << id << " Valor: " << valor << endl;
}
