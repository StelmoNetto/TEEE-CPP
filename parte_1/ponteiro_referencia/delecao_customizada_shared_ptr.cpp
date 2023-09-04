#include<iostream>
#include<memory>
using std::cin,std::cout, std::endl;

int main()
{
    std::shared_ptr<int> ponteiro(new int, free);
}
