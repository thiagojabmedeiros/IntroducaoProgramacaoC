#include <stdio.h>
int main(void){  

int numero [15], i, soma = 0;

for(i = 0; i <= 14; i++){ 
printf("\ndigite um número [%i]:", i);
scanf("%i", &numero [i]);
soma+=numero[i];
}
float media = (soma/15);

printf("a média é: %.2f", media);

for(i = 0; i <= 14; i++){ 
if(numero[i]>media){
printf("\nO vetor [%i] está acima da média: %i", i, numero[i]);}
}

} 