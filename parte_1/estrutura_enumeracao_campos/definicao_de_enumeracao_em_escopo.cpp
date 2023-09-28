#include<iostream>
using std::cin, std::cout, std::endl;

int main()
{
    struct UmReg
    {
        enum {OK,NOK};
    };

    cout << UmReg::OK << endl; //acesso via operador de escopo ::
}
