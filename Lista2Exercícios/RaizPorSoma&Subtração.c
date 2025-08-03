#include <stdio.h>
#include <math.h>

int main(void) {
  int numero, a, contagem=0;
  int soma=0;
  printf("digite um número: ");
  scanf("%i", &numero);
  
  for(a=0; soma<numero; a++){
  if(a%2!=0){
  contagem++;
  soma+=a;}}
  if(soma==numero){printf("A raiz de %i é %i\n", numero, contagem);}
  else{
  printf("A raiz de %i não é inteira\n", numero);}}