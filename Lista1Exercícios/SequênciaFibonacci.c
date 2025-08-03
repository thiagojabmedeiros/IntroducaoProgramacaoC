#include <stdio.h>
int main (void){
  int n0 = 0, n1 = 1, n = 0, nx, sequencia = 1;
  printf("digite um número: ");
  scanf("%i", &nx);

do{
  printf("%i  ", n0);
  n = n0 + n1;
  n0=n1;
  n1=n;
  sequencia++;
}while(sequencia<=nx);
}