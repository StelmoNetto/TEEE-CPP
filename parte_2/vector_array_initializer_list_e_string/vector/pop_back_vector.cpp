#include <iostream>
#include <vector>
using std::vector, std::cout, std::endl;

int main()
{
    vector vetor{ 2.1,1.0,3.2,4.4,7.2 };

    vetor.pop_back();

    cout << "elementos:\n";
    for(auto e : vetor)
        cout << e << endl;

}
