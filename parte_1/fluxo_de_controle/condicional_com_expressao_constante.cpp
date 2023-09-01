#include<iostream>
int main()
{
  if constexpr (true)
  {
    int i{};
    std::cout << i << std::endl;
  }
}
