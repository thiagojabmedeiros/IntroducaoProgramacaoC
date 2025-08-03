#include <stdio.h>
int main(void){  
int numero [10], soma = 0, i;
  for(i = 0; i <= 9; i++){ 
  printf("\ndigite um número [%i]:", i);
  scanf("%i", &numero [i]);
  soma += numero[i];
  }
  for(i = 0; i <= 9; i++){ 
  printf("\nO vetor [%i] tem o valor: %i", i, numero[i]);
  }
  printf("\nA soma do valor dos vetores é: %i", soma);
} 