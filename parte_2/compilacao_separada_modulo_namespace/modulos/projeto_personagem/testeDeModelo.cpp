import Modelo;

import <iostream>;

int main()
{
    Modelo::Personagem mario{ "Mario", {1,3}, 2.4F }, luigi{ "Luigi", {1,4}, 1.2F };

    bool seTocam{ mario.tocaPersonagem(luigi) };
    std::cout << "Se tocam? " << std::boolalpha << seTocam;

    //Ponto centro{ 1,2 }; //Não exportado
}
