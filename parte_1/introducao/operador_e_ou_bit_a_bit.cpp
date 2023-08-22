import  <iostream>;
using  namespace  std;
int  main()
{
		byte b1{ 0b1110'1110 }; //b1{ 238d }
		byte b2{ 0b1011'0101 }; //b2{ 181d }

		byte b1Eb2{ b1 & b2 }; //b1Eb2{  0b1010'0100  }
		cout << std::to_integer<char>(b1Eb2) << endl; //164

		byte b1OUb2{ b1 | b2 }; //b1OUb2{  0b1111'1111  }
		cout << std::to_integer<char>(b1OUb2) << endl; //255

}
