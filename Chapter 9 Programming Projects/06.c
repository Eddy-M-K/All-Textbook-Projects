//Computes the value of a polynomial provided by the textbook

#include <stdio.h>

int main(void);
int polynomial(int x);

int main(void) {
  int x;

  printf("Enter a value for x: ");
  scanf("%d", &x);

  printf("The value of the polynomial is %d\n", polynomial(x));

  return 0;
}

int polynomial(int x) {
  return (3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x -6);
}
