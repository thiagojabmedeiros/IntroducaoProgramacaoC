#include <stdio.h>
#include <string.h>

int main(void){    
char frase[100];
char fraseinvertida[100];
printf("Digite uma frase: ");
fgets(frase, 100, stdin);
frase[strcspn(frase, "\n")] = '\0';
int tam = strlen(frase);
for(int i = 0; i < tam; i++){
fraseinvertida[i] = frase[tam - 1 - i];}
fraseinvertida[tam] = '\0'; 
printf("Frase invertida: %s\n", fraseinvertida);
if(strcmp(frase, fraseinvertida) == 0){
printf("A frase é um palíndromo.\n");}
else {
printf("A frase não é um palíndromo.\n");}
return 0;
}