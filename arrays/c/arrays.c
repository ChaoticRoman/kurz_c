#include <stdio.h>

#define N 5

int main()
{
     double cisla[N], suma = 0;

     for(int i=0; i<N; ++i)
     {
          printf("Zadej %d. cislo: ", i+1);
          scanf("%lf", &cisla[i]);
          suma += cisla[i];
     }
     
     printf("Cisla byla: ");
     for(int i=0; i<N; ++i)
     {
          printf("%f ", cisla[i]);
     }
     printf("\n");

     double prumer = (double)suma / N;
     printf("Prumer je %f\n", prumer);

     return 0;
}
