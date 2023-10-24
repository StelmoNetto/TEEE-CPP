#include<iostream>

namespace Nome
{
    int cin{ 5 };
}

int main()
{
    using namespace std;
    using namespace Nome;

    std::cin >> Nome::cin;
}
