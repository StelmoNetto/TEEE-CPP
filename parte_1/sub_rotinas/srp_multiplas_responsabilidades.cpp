#include <iostream>
#include <span>
using namespace std;

float lerVetor(span<float> vetor)
{
	auto somatorioDosElementos{ 0.0f };
	cout << "Entre com os " << vetor.size() << " elementos do vetor" << endl;
	for (auto& e : vetor)
	{
		cin >> e;
		somatorioDosElementos += e;
	}

	return somatorioDosElementos;
}

int main()
{
	const int NumeroDeElementos{ 3 };
	float vetor[NumeroDeElementos]{};

	//Reponsabilidade de adicional implícita
	auto somatorio{ lerVetor(vetor) };
}
