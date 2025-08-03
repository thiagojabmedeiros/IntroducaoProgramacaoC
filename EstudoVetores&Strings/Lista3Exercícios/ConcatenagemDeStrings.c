#include <stdio.h>
#include <string.h>

int main(void){

char frase[200];
char palavra[100];

printf("digite a primeira frase: ");
fgets(frase, sizeof(frase), stdin);
frase[strcspn(frase, "\n")] = '\0';

printf("agora digite a segunda frase: ");
fgets(palavra, sizeof(palavra), stdin);
palavra[strcspn(palavra, "\n")] = '\0';

strcat(frase, palavra);
printf("%s\n", frase);
return 0;
}