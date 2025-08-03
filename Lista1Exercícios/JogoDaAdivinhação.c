#include <stdio.h>

int main (void){
  char c1, c2, c3, tentativa;
  int chance = 15, falta = 3;

  printf("Você deve digitar 3 caractéres para o próximo advinhar: ");
  scanf("%c %c %c", &c1, &c2, &c3);


  while(1){
    printf("Você possui %i chances\nFaltam %i caractéres para vencer.\n", chance, falta);
  printf("\nDigite um caractére para adivinhar:"); 
    scanf(" %c", &tentativa);

  if(tentativa == c1 ){
    printf("Você acertou o primeiro caractére.\n");

    falta--;
    chance--;
  }
  else if(tentativa == c2 ){
    printf("Você acertou o segundo caractére.\n");

    falta--;
    chance--;
  }
  else if(tentativa == c3 ){
    printf("Você acertou o terceiro caractére.\n");

    falta--;
    chance--;
  }
  else{
    printf("Você errou\n");
    chance--;
  }

  if(falta==0 && chance>0){
    printf("\nVocê ganhou!");
    break;
  }

  if(falta>0 && chance==0){
    printf("\nVocê perdeu.");
    break;
  }
  }}
