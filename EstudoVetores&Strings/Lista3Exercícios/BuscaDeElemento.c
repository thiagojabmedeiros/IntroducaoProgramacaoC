#include <stdio.h>
int main(void){  
int numero [10], i, x;
int a = 0;

printf("digite um valor para X: ");
scanf("%i", &x);

for(i = 0; i <= 9; i++){ 
printf("\ndigite um número [%i]:", i);
scanf("%i", &numero [i]);}

for(i = 0; i <= 9; i++){ 
if(numero[i] == x){
printf("O valor de x está no vetor [%i]", i);
a = 1;}}

if(!a){
printf("x não está em nenhum vetor");
}  
} 