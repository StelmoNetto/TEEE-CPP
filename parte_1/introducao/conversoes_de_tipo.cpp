import <iostream>;

int main()
{
    int var = 2.7; //var armazenará apenas a parte inteira, 2.
    float razao = 1 / 2; /*Divisão de dois inteiros, o resultado é o inteiro zero.*/

    int intVariavel1{1}, intVariavel2{2};
    //static_cast<tipoDaConversao>(variavel)
    double variavel = static_cast<double>(intVariavel1) / intVariavel2; //Verbosa
    float v = 17 / (float)5; //Forma antiga – não recomendado
}
