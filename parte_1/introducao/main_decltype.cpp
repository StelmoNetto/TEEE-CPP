int main()
{
    int x = 10;
    decltype (x*3.5) y; //O tipo de y é o tipo de x*3.5 (double)
    cout << typeid(y).name() << endl; //Operador que retorna o tipo
}
