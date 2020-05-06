#undef DEBUG

#ifdef DEBUG
#include <stdio.h>
#endif

#define PI 3.14159

#define MAX(a,b) (a) > (b) ? (a) : (b)

// Pozor!
#define f(N) N + N

// Spravne
#define g(N) ((N) + (N))


int main() {
  int x = 1;
  int y = 2;

  int z = MAX(x, y);
#ifdef DEBUG
  printf("z = %d\n", z);
#endif

  double r = 1.0;
  double C = 2 * PI * r;
#ifdef DEBUG
  printf("C = %f\n", C);
#endif

  int chyba = f(5) * f(5);
  int spravne = g(5) * g(5);
#ifdef DEBUG
  printf("chyba = %d\n", chyba);
  printf("spravne = %d\n", spravne);
#endif

}
