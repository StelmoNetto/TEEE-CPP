#include <memory>

namespace Estatistica::Amostragem
{
    using vetor = std::shared_ptr<float[]>;

    vetor amostragemAleatoria()
    {
        auto amostra = std::make_shared<float[]>(5);
        //...
        return amostra;
    }
}

int main()
{
    {
        auto amostra = Estatistica::Amostragem::amostragemAleatoria();
    }

    {
        using namespace Estatistica::Amostragem;

        auto amostra = amostragemAleatoria();
    }

    {
        using Estatistica::Amostragem::amostragemAleatoria;

        auto amostra = amostragemAleatoria();
    }

    {
        namespace EstatisticaDeAmostragem = Estatistica::Amostragem;

        auto amostra = EstatisticaDeAmostragem::amostragemAleatoria();
    }
}
