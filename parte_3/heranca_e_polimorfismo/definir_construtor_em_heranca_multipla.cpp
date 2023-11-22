#include<iostream>
using std::cout, std::endl;

class Base1
{
public:
 Base1() = default;

 Base1(float f) { cout << "f = " << f << " em " << __func__ << endl; }

 virtual ~Base1() = default;
};

class Base2 {
public:
 Base2() = default;

 Base2(float f) { cout << "f = " << f << " em " << __func__ << endl; }

 virtual ~Base2() = default;
};

class Derivada : public Base1, public Base2
{
public:
 using Base1::Base1;
 using Base2::Base2;

 Derivada(int i) {}

 Derivada(float f) : Base1(f), Base2(f) { cout << "f = " << f << " em " << __func__ << endl; }
};

int main()
{
 Derivada objDer{1.f}; //Ok
}
