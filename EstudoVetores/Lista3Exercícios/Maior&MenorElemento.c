#include <stdio.h>
int main(void){  
int numero [8], i;
int maior, menor;
int vmaior, vmenor;
  for(i = 0; i <= 7; i++){ 
  printf("\ndigite um número [%i]:", i);
  scanf("%i", &numero [i]);
  }
  maior = menor = numero[0];
  vmaior = vmenor = 0;
  for(i = 0; i <= 7; i++){
  if(numero[i] > maior){
  maior = numero[i];
  vmaior = i;}
  if(numero[i] < menor){
  menor = numero[i];
  vmenor = i;
  }
  }
  printf("\nO vetor [%i] é o que tem o maior valor: %i", vmaior, maior);
  printf("\nO vetor [%i] é o que tem o menor valor: %i\n", vmenor, menor);
} 