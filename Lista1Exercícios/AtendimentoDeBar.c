#include <stdio.h>
#include <math.h>

int main (void){
   float valortotaldia = 0;
   float valorcliente = 0;
  
  while(1){
    int idade;
  printf("\n\nOlá, tudo bem!?\n");
  printf("Seja bem vindo ao Bar da UFRPE!\n");

  do{
    printf("Quantos você tem!? (fale somente a sua idade)\n");
    scanf("%i", &idade);
    if(idade<18)
    {
      printf("Você não tem idade o suficiente para bebidas alcoólicas aqui.\n");
      printf("Somente um maior de idade pode. (18 anos)\n");
      printf("Próximo!\n\n");
      printf("\nOlá, tudo bem!?\n");
      printf("Seja bem vindo ao Bar da UFRPE!\n");
    }
    else if(idade>=65){
      printf("Desculpe, mas não posso mais vender bebidas para o senhor.(65+)\n");
      printf("Próximo!\n\n");
      printf("\nOlá, tudo bem!?\n");
      printf("Seja bem vindo ao Bar da UFRPE!\n");
    }
  }while(idade<18 || idade>=65);


  if(idade>=18 && idade<65){
    printf("Ótimo!\n\n Deixa eu te mostrar o que temos disponível em nosso estoque!\n");
    int item;
    printf("1 - Whisky\n2 - Vodka\n3 - Cerveja\n4 - Cachaça\n");
    printf("Qual dessas opções você vai querer hoje!?\n");
    scanf("%i", &item);
    if(item<1 || item>4){
    do{
      printf("Não temos isso aqui.\n");
      printf("Hoje temos apenas:\n\n1 - Whisky\n2 - Vodka\n3 - Cerveja\n4 - Cachaça\n");
      scanf("%i", &item);
    }while(item<1 || item>4);
    }
  float item2, valor;
    switch(item){
    case 1:
      printf("Excelente escolha, temos 3 tipos de Whisky aqui! (selecione o código)\n");
      printf("Código - Bebida: Preço\n");
      printf("100 - Whisky 1: R$200\n101 - Whisky 2: R$150\n102 - Whisky 3: R$140\n");
      scanf("%f", &item2);

      if(item2<100 || item2>102){
        do{
          (valor = 0);
          printf("Não temos isso aqui.\n");
          printf("Como já te disse antes temos apenas:\n");
          printf("100 - Whisky 1: R$200\n101 - Whisky 2: R$150\n102 - Whisky 3: R$140\n");
          scanf("%f", &item2);}while(item2<100 || item2>102);} 

      if(item2 == 100){
        (valor = 200);
      }
      else if(item2 == 101){
        (valor = 150);
      }
      else if(item2 == 102){
        (valor = 140);
      }
      break;
    case 2:
      printf("Excelente escolha, temos 3 tipos de Vodka aqui! (selecione o código)\n");
      printf("Código - Bebida: Preço\n");
      printf("200 - Vodka 1: R$60\n201 - Vodka 2: R$40\n202 - Vodka 3: R$30\n");
     scanf("%f", &item2);
      if(item2<200 || item2>202){
        do{
          (valor = 0);
          printf("Não temos isso aqui.\n");
          printf("Como já te disse antes temos apenas:\n");
          printf("200 - Vodka 1: R$60\n201 - Vodka 2: R$40\n202 - Vodka 3: R$30\n");
          scanf("%f", &item2);}while(item2<200 || item2>202);} 

      if(item2 == 200){
        (valor = 60);
      }
      else if(item2 == 201){
        (valor = 40);
      }
      else if(item2 == 202){
        (valor = 30);
      }

      break;
    case 3:
      printf("Excelente escolha, temos 3 tipos de Cerveja aqui! (selecione o código)\n");
      printf("Código - Bebida: Preço\n");
      printf("300 - Cerveja 1: R$1.50\n301 - Cerveja 2: R$2.0\n302 - Cerveja 3: R$3.0\n");
      scanf("%f", &item2);
      if(item2<300 || item2>302){
        do{
          (valor = 0);
          printf("Não temos isso aqui.\n");
          printf("Como já te disse antes temos apenas:\n");
          printf("300 - Cerveja 1: R$1.5\n301 - Cerveja 2: R$2\n302 - Cerveja 3: R$3\n");
          scanf("%f", &item2);}while(item2<300 || item2>302);} 

      if(item2 == 300){
        (valor = 1.5);
      }
      else if(item2 == 301){
        (valor = 2);
      }
      else if(item2 == 302){
        (valor = 3);
      }
      break;
    case 4:
      printf("Excelente escolha, temos 3 tipos de cachaça aqui! (selecione o código)\n");
      printf("Código - Bebida: Preço\n");
      printf("400 - Cachaça 1: R$8\n401 - Cachaça 2: R$20\n402 - Cachaça 3: R$22\n");
      scanf("%f", &item2);
      if(item2<400 || item2>402){
        do{
          (valor = 0);
          printf("Não temos isso aqui.\n");
          printf("Como já te disse antes temos apenas:\n");
          printf("400 - Cachaça 1: R$8\n401 - Cachaça 2: R$20\n402 - Cachaça 3: R$22\n");
          scanf("%f", &item2);}while(item2<400 || item2>402);} 

      if(item2 == 400){
        (valor = 8);
      }
      else if(item2 == 401){
        (valor = 20);
      }
      else if(item2 == 402){
        (valor = 22);
      }
      break;
      default:
      printf("opção inválida");
      return 0;
    }

    int quantidade;
    printf("Certo, quantas você vai querer? (digite numericamente)\n");
      scanf("%i", &quantidade);

    if(quantidade<=0){
      do{
        printf("Você precisa escolher uma quantidade, não consigo lhe vender 0 coisas haha!\n");
        printf("digite quantas unidades você quer dessa bebida.\n");
        scanf("%i", &quantidade);}
        while(quantidade<=0);} 
    int resposta;
    if(quantidade>=1){

      printf("Perfeito, você deseja algo mais? (digite o número associado)\n");
      printf("1 - SIM\n2 - NÃO\n");
      scanf("%i", &resposta); 

      if(resposta>2 || resposta<1)
      do{
        printf("Não consegui te entender\n");
        printf("Você deseja algo mais? (digite o número associado)\n");
        printf("1 - SIM\n2 - NÃO\n");
        scanf("%i", &resposta);}
        while(resposta>2 || resposta<1);}
    if(quantidade>0){
      if(quantidade>5 && quantidade<=50){
        valorcliente = quantidade*(valor*90/100);
      }

      else if(quantidade>50 && quantidade<=100){
       valorcliente = quantidade*(valor*70/100);
      }

      else if(quantidade>100){
       valorcliente = quantidade*(valor*65/100);
      }

      else if(quantidade<=5 && quantidade>0){
       valorcliente =  quantidade*valor;
      }

    if(resposta==2){
      if(quantidade>5 && quantidade<=50){
      printf("OK, você tem direito a um desconto de 10/100 na sua compra!\n");
      printf("No total ficará R$%.2f\n", valorcliente);}
      else if(quantidade>50 && quantidade<=100){
      printf("OK, você tem direito a um desconto de 30/100 na sua compra!\n");
      printf("No total ficará R$%.2f\n", valorcliente);}
      else if(quantidade>100){
      printf("OK, você tem direito a um desconto de 35/100 na sua compra!\n");
      printf("No total ficará R$%.2f\n", valorcliente);}
      else if(quantidade<=5 && quantidade>0){
      printf("Ok, o valor a ser pago é R$%.2f.\n",valorcliente);}} 

    float item3, valor2;
    int quantidade2;
    if(resposta==1){
   printf("O que você deseja? (selecione apenas o código)\n");
   printf("Código - Bebida: Preço\n");

      printf("100 - Whisky 1: R$200\n101 - Whisky 2: R$150\n102 - Whisky 3: R$140\n200 - Vodka 1: R$60\n201 - Vodka 2: R$40\n202 - Vodka 3: R$30\n300 - Cerveja 1: R$1.50\n301 - Cerveja 2: R$2.0\n302 - Cerveja 3: R$3.0\n400 - Cachaça 1: R$8\n401 - Cachaça 2: R$20\n402 - Cachaça 3: R$22\n");
  scanf("%f", &item3);

      while(item3!=100 && item3!=101 && item3!=102 && item3!=200 && item3!=201 && item3!=202 && item3!=300 && item3!=301 && item3!=302 && item3!=400 && item3!=401 && item3!=402)
        {
          printf("Opção inválida\n");
          printf("Escolha a opção correta\n");
          scanf("%f", &item3);}

        if(item3 == 100){
          (valor2 = 200);
        }
        else if(item3 == 101){
          (valor2 = 150);
        }
        else if(item3 == 102){
          (valor2 = 140);
        }

        if(item3 == 200){
          (valor2 = 60);
        }
        else if(item3 == 201){
          (valor2 = 40);
        }
        else if(item3 == 202){
          (valor2 = 30);
        }

        if(item3 == 300){
          (valor2 = 1.5);
        }
        else if(item3 == 301){
          (valor2 = 2);
        }
        else if(item3 == 302){
          (valor2 = 3);
        }

        if(item3 == 400){
            (valor2 = 8);
          }
          else if(item3 == 401){
            (valor2 = 20);
          }
          else if(item3 == 402){
            (valor2 = 22);
          }

        printf("Certo, quantas você vai querer? (digite numericamente)\n");
        scanf("%i", &quantidade2);

      if(quantidade2<=0){
        do{
          printf("Você precisa escolher uma quantidade, não consigo lhe vender 0 coisas haha!\n");
          printf("digite quantas unidades você quer dessa bebida.\n");
          scanf("%i", &quantidade2);}
          while(quantidade2<=0);}}

    if(quantidade2>0){
    if((quantidade+quantidade2)>5 && (quantidade+quantidade2)<=50){
      valorcliente = quantidade*(valor*90/100)+quantidade2*(valor2*90/100);
    }

    else if((quantidade+quantidade2)>50 && (quantidade+quantidade2)<=100){
      valorcliente = quantidade*(valor*70/100)+quantidade2*(valor2*70/100);
    }

    else if((quantidade+quantidade2)>100){
       valorcliente = quantidade*(valor*65/100)+quantidade2*(valor2*65/100);
    }

    else if((quantidade+quantidade2)<=5 && (quantidade+quantidade2)>0){
      valorcliente = (quantidade*valor)+(quantidade2*valor2);
    }


    if(quantidade2>0){
if((quantidade+quantidade2)>5 && (quantidade+quantidade2)<=50){
printf("OK, você tem direito a um desconto de 10/100 na sua compra!\n");
printf("No total ficará R$%.2f\n", valorcliente);}

else if((quantidade+quantidade2)>50 && (quantidade+quantidade2)<=100){
printf("OK, você tem direito a um desconto de 30/100 na sua compra!\n");
printf("No total ficará R$%.2f\n", valorcliente);}

else if((quantidade+quantidade2)>100){
printf("OK, você tem direito a um desconto de 35/100 na sua compra!\n");
printf("No total ficará R$%.2f\n", valorcliente);}

else if((quantidade+quantidade2)<=5 && (quantidade+quantidade2)>0){
printf("Ok, o valor a ser pago é R$%.2f.\n", valorcliente);}
}
}
}
}
int apuracao;
printf("\n\n\n*Você deseja fechar o caixa?*\n1 - Sim\n2 - Não\n");
scanf("%i", &apuracao);

valortotaldia += valorcliente;
while(apuracao<1 || apuracao>2){
  printf("Não consegui te entender\n");
  scanf("%i", &apuracao);
}

if(apuracao==1){
printf("O total apurado no dia foi: R$%.2f\n", valortotaldia);
break;
}    
}
}