
class Base final //Não permite a herança a partir dessa classe
{
    public:
      virtual double etapa1() { return 1; }

      virtual double etapa2() { return 2; }

      virtual double processamento(){ return etapa1() + etapa2(); }

    private:
      int membro{};
};
