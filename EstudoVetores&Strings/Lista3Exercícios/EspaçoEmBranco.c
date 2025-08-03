#include <stdio.h>
int main(void){    

char frase[100], naoespaço[100];


printf("digite uma frase: ");
fgets(frase, 100, stdin);  
int a = 0;
int b;

for(b = 0; frase[b] != '\0'; b++) {
    if(frase[b] != ' ' && frase[b] != '\n') {  
        naoespaço[a] = frase[b];
        a++;
    }
}
naoespaço[a] = '\0';
printf("%s", naoespaço);

} 