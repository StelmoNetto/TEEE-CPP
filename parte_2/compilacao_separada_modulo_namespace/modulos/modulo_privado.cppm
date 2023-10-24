export module Combinatoria;

export int fatorial(int numero);

module :private;

int fatorial(int numero)
{
 auto i{ 2 }, fat{ 1 };
 for (; i <= numero; i++)
  fat *= i;
 return fat;
}
