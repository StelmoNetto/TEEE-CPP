#include<string_view>

class Base
{
public:
 virtual ~Base() = default;

 Base() = default;

 Base(std::string_view str) {}
};

//Não é possível chamar construtor de Base
class Derivada : public Base
{
public:
 Derivada(int i){}
};

int main()
{
 Derivada objDer{"Nao esta ok\n"};
}
