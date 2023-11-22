class Base
{
    public:
      virtual double etapa1() const { return 1; }

      virtual double etapa2() const { return 2; }

      virtual double processamento(){ return etapa1() + etapa2(); }

    private:
      int membro{};
};

class Derivada : public Base
{
public:
 virtual double etapa2() const override final //Indica que a herança a partir de Derivada, esse método não pode ser sobrescrito
 {
    return 3;
 }

private:
 double novoMembro{};
};
