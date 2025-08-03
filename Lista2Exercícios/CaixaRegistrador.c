#include <stdio.h>

int main(void) {
  int valor_da_compra, valor_pago, trouco;
  printf("Digite o valor da compra: ");
  scanf("%i", &valor_da_compra);
  printf("\nQual o valor pago? ");
  scanf("%i", &valor_pago);

  trouco = valor_pago - valor_da_compra;
  if(trouco<0){
  printf("Esse valor não consegue pagar a compra!");}

  if(trouco==0){
  printf("\nObrigado e volte sempre!");}

  if(trouco>0){
  printf("\nO seu trouco será: ");

  if (trouco >= 100) {
  int quantidade = trouco / 100;
  printf("%d nota(s) de R$100,00\n", quantidade);
  trouco %= 100;}
  
  if (trouco >= 50) {
  int quantidade = trouco / 50;
  printf("%d nota(s) de R$50,00\n", quantidade);
  trouco %= 50;}
  
  if (trouco >= 20) {
  int quantidade = trouco / 20;
  printf("%d nota(s) de R$20,00\n", quantidade);
  trouco %= 20;}
      
  if (trouco >= 10) {
  int quantidade = trouco / 10;
  printf("%d nota(s) de R$10,00\n", quantidade);
  trouco %= 10;}
  
  if (trouco >= 5) {
  int quantidade = trouco / 5;
  printf("%d nota(s) de R$5,00\n", quantidade);
  trouco %= 5;}
  
  if (trouco >= 2) {
  int quantidade = trouco / 2;
  printf("%d nota(s) de R$2,00\n", quantidade);
  trouco %= 2;}
  
  if (trouco >= 1) {
  int quantidade = trouco / 1;
  printf("%d nota(s) de R$1,00\n", quantidade);
  trouco %= 1;}}
}