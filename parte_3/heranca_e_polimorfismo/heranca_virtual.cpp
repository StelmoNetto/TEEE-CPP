#include<iostream>
using std::cout, std::endl;

class Janela
{
public:
//...
 virtual void mostra() = 0;

 virtual void oculta() = 0;
};

class CaixaDeDialogo : public virtual Janela
{
public:
//...
 virtual void mostra() override  { cout << "Visível\n"; }

 virtual void oculta() override { cout << "Não está visível\n"; }

 virtual void facaModal(bool) {}
protected:
 bool estado;
};

class Notificacao : public virtual Janela
{
public:
//...
 virtual void mostra() override { cout << "Visível\n"; }

 virtual void oculta() override { cout << "Não está visível\n"; }

 virtual void apaga() { cout << "Apagou\n"; }
};

class NotificacaoEmCaixa : public Notificacao, public CaixaDeDialogo
{
public:
 virtual void mostra() override { Notificacao::mostra(); }

 virtual void oculta() override { Notificacao::oculta(); }
};

int main()
{
    NotificacaoEmCaixa notificador{};

    notificador.mostra();

    notificador.apaga();
}
