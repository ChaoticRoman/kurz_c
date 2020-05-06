#include <stdio.h>


void print(const int i, const int a) {
	printf("%d: a=%d\n", i, a);
}

void f1(int a) {a = 1;}

void f2(int* a) {*a = 2;}

//void f3(int &a) {a = 3;}

void f4(int* const a) {*a = 4;} // OK: constant pointer

//void f5(const int* a) {*a = 5;}  // WRONG: pointer to constant integer

int main() {
  int a = 0;
  print(0, a);

  f1(a);
  print(1, a);

  f2(&a);
  print(2, a);

//  f3(a);
//  print(3, a);

  f4(&a);
  print(4, a);

//  f5(&a);
//  print(5, a);
}
