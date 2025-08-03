#include <stdio.h>
#include <string.h>

int main(void){    
char frase[100];
int palavras = 0;
printf("digite uma frase:");
fgets(frase, 100, stdin);
frase[strcspn(frase, "\n")] = '\0';
int tam = strlen(frase);
if(tam > 0){
palavras = 1;}
for(int i = 0; i < tam; i++){
if(frase[i] == ' ' && frase[i+1] != ' ' && frase[i+1] != '\0'){
palavras++;}}
printf("%d palavras\n", palavras);
return 0;
} 