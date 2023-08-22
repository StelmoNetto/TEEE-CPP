int main()
{
    //auto nomeDaVariavel = valor;
    auto volumeEmL = 3.8; //Variável real (double). //C++14
    auto quantidade{ 2 }; //Variável inteira (int). //C++14
    auto lista = { 1, 2, 4 }; //std::initializer_list<int>

    //auto nomeDaVariavel = tipo{valor};
    auto b = new char[10]{ 0 }; // char*
    auto str = std::string{ "a" };
}
