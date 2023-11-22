class Base1
{
public:
 virtual ~Base1() = default;

 Base1() = default;

 Base1(float f) {}
};

class Base2
{
public:
 virtual ~Base2() = default;

 Base2() = default;

 Base2(float f) {}
};

class Derivada : public Base1, public Base2
{
public:
 using Base1::Base1;

 using Base2::Base2;

 Derivada(int i) {}
};

int main()
{
 Derivada objDer{1.f}; //Conflito – definições ambíguas
}
