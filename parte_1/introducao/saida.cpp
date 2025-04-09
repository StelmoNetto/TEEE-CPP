
import<iostream>;

int main()
{
    auto preco{ 2.5f };
    auto quantidade{ 5 };

    //Sem usar o namespace std
    std::cout << preco;
    std::cout << "\n" << preco <<" "<< quantidade << "\n";
    std::cout << preco <<" "<< quantidade << std::endl;
}
