#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
    int** handle { nullptr }; //Na pilha

    handle = new int*; //Na heap

    *handle = new int; //Na heap

    cout << **handle << endl;
}
