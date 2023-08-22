
int main()
{
    //Sinalizados: admitem sinal
    {
      short i = -7;
      signed short ss = -7;
      signed short int ssi = -7;
    }

    {
      int i = -7;
      signed int si = -7;
      signed s = -7;
    }

    {
      long i = -7L;
      signed long si = -7L;
      long int li = -7;
    }

    {
      long long i = -7LL;
      signed long long si = -7LL;
      long long int lli = -7L;
    }

    {
        long double ld = 16.9L;
    }

    //Não-sinalizados: apenas números positivos
    {
      unsigned short us = 7U;
      unsigned u = 7U;
      unsigned int ui = 7U;
    }

    {
      unsigned long i = 7UL;
      unsigned long int uli = 7UL;
      unsigned long long ulli = 7ULL;
    }
}
