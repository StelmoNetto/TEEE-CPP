#include <iostream>
using std::cin, std::cout, std::endl;

int main()
{
    int cincoVezesDoisMaisTres = [](int x) { return [](int y) { return y * 2; }(x) + 3; }(5); // 13, isto é, x = y = 5

    cout << "5 * 2 + 3 = " << cincoVezesDoisMaisTres << endl;
}
