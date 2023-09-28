#include<iostream>
using std::cin, std::cout, std::endl;

int main()
{
    cout << "alignof(char) = " << alignof(char) << endl;
    cout << "alignof(int) = " << alignof(int) << endl;
    cout << "alignof(int*) = " << alignof(int*) << endl;
    cout << "alignof(int[4]) = " << alignof(int[4]) << endl;
}
