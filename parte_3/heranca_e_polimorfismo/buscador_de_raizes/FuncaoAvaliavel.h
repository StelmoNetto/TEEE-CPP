#pragma once

#include<vector>
#include<string>
#include<memory>

//Classes abstratas de interface para outras classes do projeto
class Avaliavel
{
public:
 using DominioVetoral = std::vector<double>;

 virtual ~Avaliavel() = default;

 virtual double avalie(const DominioVetoral&) const = 0;
};

class Funcao : public Avaliavel
{
public:
 using Ponteiro = std::shared_ptr<Funcao>;

 Funcao(size_t dimensao, std::string expressao);

 std::string expressao() const;

 size_t dimensaoDoDominio() const;

 virtual ~Funcao() = default;

private:
 const size_t _dimensao;

 std::string expressaoDaFuncao;
};
