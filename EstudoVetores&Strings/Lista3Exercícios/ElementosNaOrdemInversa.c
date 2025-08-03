#include <stdio.h>
int main(void){  

int numero [5], i;

for(i = 0; i <= 4; i++){ 
printf("\ndigite um número [%i]:", i);
scanf("%i", &numero [i]);}

for(i = 4; i >= 0; i--){ 
printf("\nO vetor [%i] vale: %i", i, numero[i]);
}
}