#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TENTATIVAS 6
int main(void) {
    char palavra[] = "Brasil";
    int tam = strlen(palavra);

    char palavraDescoberta[tam + 1];
    for(int i = 0; i < tam; i++) {
    palavraDescoberta[i] = '_';}
    palavraDescoberta[tam] = '\0';

    char letra;
    int tentativas = 0;
    int acertos = 0;
    int letraJaTentada;

    char letrasUsadas[26];  
    int numLetrasUsadas = 0;

    printf("=== Jogo da Forca ===\n");
    printf("A palavra tem %d letras.\n", tam);

    while(tentativas < MAX_TENTATIVAS && acertos < tam) {
    printf("\nPalavra: ");
    for(int i = 0; i < tam; i++) {
    printf("%c ", palavraDescoberta[i]);}

    printf("\nTentativas restantes: %d\n", MAX_TENTATIVAS - tentativas);
    printf("Digite uma letra: ");
    scanf(" %c", &letra);
    letra = tolower(letra);
    letraJaTentada = 0;
    for(int i = 0; i < numLetrasUsadas; i++) {
    if(letrasUsadas[i] == letra) {
    letraJaTentada = 1;
    break;}}

    if(letraJaTentada) {
    printf("Você já tentou essa letra.\n");
    continue;}
    else {
    letrasUsadas[numLetrasUsadas++] = letra;}

    int encontrou = 0;
    for(int i = 0; i < tam; i++) {
    if(palavra[i] == letra && palavraDescoberta[i] == '_') {
    palavraDescoberta[i] = letra;
    acertos++;
    encontrou = 1;}}

    if(encontrou) {
    printf("Letra correta!\n");} 
    else {
    printf("Letra incorreta.\n");
    tentativas++;}}

    if(acertos == tam) {
    printf("\nParabéns! Você acertou a palavra: %s\n", palavra);}
    else {
    printf("\nVocê perdeu! A palavra era: %s\n", palavra);}
    return 0;
}