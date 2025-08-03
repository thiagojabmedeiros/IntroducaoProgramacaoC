#include <stdio.h>
int main (void){
  int numero=1, num, n;
  printf("digite um número: ");
  scanf("%i", &num);
  int numinv = num;

  for(n=1; n<=numinv; n++){
    if(n%2==0){
      printf("%i\n", num);
      num--;
    }
   else{
     printf("%i\n", numero++);
   }

  }}