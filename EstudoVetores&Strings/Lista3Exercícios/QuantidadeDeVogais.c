#include <stdio.h>
int main(void){    
char frase[100];
int i, vogais = 0;
printf("digite uma frase: ");
fgets(frase, 100, stdin);  
for(i = 0; i <= 99; i++){  
if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
vogais++;
}
}
printf("O número de vogais na frase é: %i", vogais);
} 