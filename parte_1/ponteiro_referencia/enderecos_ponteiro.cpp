#include <iostream>
int main()
{
  short var{ 4 };
  auto ponteiro{ &var }; // Um ponteiro para uma variável do tipo short

  std::cout << "Endereco de 'var': (&var) = " << &var << "\n";
  std::cout << "Endereco de 'ponteiro': (&ponteiro) = " << &ponteiro << "\n";
  std::cout << "Conteudo de 'var': (*var) = " << *ponteiro;
}
