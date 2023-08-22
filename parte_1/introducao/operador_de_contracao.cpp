import  <iostream>;
using  namespace  std;

int  main()
{
    float x{ 5.0f };

    x = x + 2.0;
    cout<< "x = " << x << endl;

    x = 5.0;

    x+= 2.0;
    cout<< "x = " << x << endl;

    float y{ 2.5f };

    x = x / y;
    cout<< "x = " << x << endl;

    y = 2.5;

    x = x / y;
    cout<< "x = " << x << endl;
}
