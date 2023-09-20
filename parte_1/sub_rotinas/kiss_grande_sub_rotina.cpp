#include<iostream>
#include<cmath>
using std::cin, std::cout, std::endl;

bool resolveSistemaPorJacobi(double** matriz, double* vetorIndependente, double*& proximoVetorSolucao,\
 unsigned long ordemDaMatriz, double tol = 1.E-5, unsigned long* numItr = nullptr, unsigned long numMaxIter = 50)
 {
    unsigned long i, j;
    double soma, normRel;

    //Alocações
    auto atualVetorSolucao = new(std::nothrow) double[ordemDaMatriz];
    bool alocacaoFalhou = atualVetorSolucao == nullptr;

    if (alocacaoFalhou)
        return false;

    proximoVetorSolucao = new(std::nothrow) double[ordemDaMatriz];
    alocacaoFalhou = proximoVetorSolucao == nullptr;

    if (alocacaoFalhou)
        return false;

    //Construção das matrizes de iteração
    for (i = 0; i < ordemDaMatriz; i++)
    {
        auto r = 1 / matriz[i][i];

        for (j = 0; j < ordemDaMatriz; j++)
            if (i != j)
                matriz[i][j] *= r;
            vetorIndependente[i] *= r;
            atualVetorSolucao[i] = vetorIndependente[i];
    }

    //Processo iterativo de Jacob
    unsigned long numDeIteracoes{ 0 };
    while (true)
    {
        numDeIteracoes++;
        for (i = 0; i < ordemDaMatriz; i++)
        {
            soma = 0;
            for (j = 0; j < ordemDaMatriz; j++)
                if (i != j)
                    soma += matriz[i][j] * atualVetorSolucao[j];
                proximoVetorSolucao[i] = vetorIndependente[i] - soma;
        }

        //Determina o erro relativo
        auto norma1 = 0.0;
        auto norma2 = 0.0;

        for (i = 0; i < ordemDaMatriz; ++i)
        {
            auto diferencaEntreComponentesDoVetorSolucao = fabs(proximoVetorSolucao[i] - atualVetorSolucao[i]);
            bool algumValorMaior = diferencaEntreComponentesDoVetorSolucao > norma1;

            if (algumValorMaior)
                norma1 = diferencaEntreComponentesDoVetorSolucao;

            algumValorMaior = proximoVetorSolucao[i] > norma2;
            if (algumValorMaior)
                norma2 = proximoVetorSolucao[i];

            atualVetorSolucao[i] = proximoVetorSolucao[i];
        }

        normRel = norma1 / norma2;

        //Verificação do critério de parada
        if (normRel < tol || numDeIteracoes >= numMaxIter)
            break;
    }

    if (numItr)
        *numItr = numDeIteracoes;

    return normRel <= tol;
}

int main()
{
    //Use aqui a sub-rotina acima
}
