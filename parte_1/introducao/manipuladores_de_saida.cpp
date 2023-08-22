
import <iomanip>;
import<iostream>;
using namespace std; //Inclui toda a biblioteca-padrão do namespace std no código fonte

int main()
{
  {
		int a;
		cin >> hex >> a;
		std::cout << "OK " << std::showpoint << a << std::endl;
	}

	{
		bool a;
		cin >> a;
		cout << boolalpha << a << endl;
	}

	{
		auto preco{ 7.753 };
		cout << fixed; //Notação não científica de números reais
		cout << showpoint; //Sempre mostra o ponto, mesmo sem decimal
		cout << setprecision(2); //Precisão de duas casas decimais. Incluir <iomanip>.
		cout << preco << endl;
		cout << showpos << preco << endl;
	}

	{
		auto preco{ 7.753 };
		cout << fixed;
		cout << showpoint;
		cout << setprecision(2);
		cout << setw(6); //Largura de saída de 6 espaços
		cout << setfill('*'); //Caractere de preenchimento dos espaços restantes
		cout << preco << endl;
    cout << std::showpos << preco << endl; //Mostra sinal '+' via flags std
	}

  //Exemplo de formatação da saída em ponto flutuante com ios
  {
    cout.setf(ios::fixed); //Notação não científica de números reais
    cout.setf(ios::showpoint); //Sempre mostra o ponto, mesmo sem decimal
    cout.precision(2); //Duas casas decimais
    cout << preco << endl;
  }
}
