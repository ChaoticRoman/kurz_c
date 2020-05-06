#include <stdio.h>

#define N 5

int main()
{
     int cisla[N], suma;

     for(int i=0; i<N; ++i)
     {
          printf("Zadej %d. cislo: ", i+1);
          scanf("%d", &cisla[i]);
          suma += cisla[i];
     }

     double prumer = (double)suma / N;
     printf("Prumer je %f\n", prumer);

     return 0;
}
