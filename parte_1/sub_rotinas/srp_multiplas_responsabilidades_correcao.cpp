#include <iostream>
#include <span>
using namespace std;

void lerVetor(span<float> vetor)
{
	cout << "Entre com os " << vetor.size() << " elementos do vetor" << endl;
	for (auto& e : vetor)
		cin >> e;
}

float somatoriaDosElementos(const span<float> vetor)
{
	auto somatorio{ 0.0f };
	for (auto e : vetor)
		somatorio += e;

	return somatorio;
}

int main()
{
	const int NumeroDeElementos{ 3 };
	float vetor[NumeroDeElementos]{};

	lerVetor(vetor);
	auto somatorio{ somatoriaDosElementos(vetor) };
}
