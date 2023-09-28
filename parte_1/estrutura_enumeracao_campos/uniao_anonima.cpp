#include <iostream>
using namespace std;

int main()
{
    union
    {
        char c;
        int i;
        float f;
    };

    cout << "Entre com um caractere\n";
    cin >> c;
}
