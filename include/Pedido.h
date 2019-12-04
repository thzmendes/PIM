#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<cliente.h>
void pedido(struct cliente cliente1)
{
  int op, cod_pedido, vl_pizzat1, vl_pizzat2, vl_pizzat3, vl_pizzat4, vl_bebida1, vl_bebida2, vl_bebida3, vl_bebida4, soma;
  op=1;

  while(op!=5)
   {
   printf("Pedido\n");
   printf("=========================\n\n");
   printf("1 - Menu de Sabores e Bebidas\n");
   printf("2 - Pizza Grande\n");
   printf("3 - Pizza Doce\n");
   printf("4 - Bebidas\n");
   printf("5 - Voltar\n");
   printf("=========================\n\n");
   printf("Digite a Opзгo: ");
    scanf("%d", &op);
    printf("=========================\n\n");
   soma = 0;
   vl_pizzat1 = 64;
   vl_pizzat2 = 72;
   vl_pizzat3 = 79;
   vl_pizzat4 = 86;
   vl_bebida1 = 9;
   vl_bebida2 = 8;
   vl_bebida3 = 3;
   vl_bebida4 = 20;

  switch(op)
   {
   case 1:

     system("cls");
        printf("101 - ALICCE\n");
        printf("102 - ATUM ESPECIAL\n");
        printf("103 - BACON\n");
        printf("104 - BAIANA\n");
        printf("105 - BAIANA ESPECIAL\n");
        printf("106 - BROCOLIS\n");
        printf("107 - BROCOLIS ESPECIAL\n");
        printf("108 - CALABRESA  \n");
        printf("109 - CALIFORNIA \n");
        printf("110 - ESCAROLA\n");
        printf("111 - FRANGO\n");;
        printf("130 - BANANA\n");
        printf("131 - BRIGADEIRO\n");
        printf("132 - MORANGO\n");
        printf("133 - ROMEU E JULIETA\n");
        printf("134 - REFRIGENTE 2L\n");
        printf("135 - CERVEJA LONG NECK 350ml\n");
        printf("136 - БGUA 500ml\n");
        printf("137 - VINHO 1L\n");
        printf("=========================\n\n");
     break;

   case 2:
      system("cls");
        printf("Informe o Cуdigo da Pizza: ");
        scanf("%d", &cod_pedido);
        printf("Pizza numero: %d\n", cod_pedido);
        switch (cod_pedido)
        {
        case 101:
          printf("101 - ALICCE\n");
          printf("Valor do seu pedido й: ");
          printf("R$ %d,00\n", vl_pizzat4);
          soma = soma + vl_pizzat4;
          printf("=========================\n\n");
          strcpy(cliente1.detalhe.Sabor,"101 - ALICCE\n");
          cliente1.detalhe.ValorTotal+=soma;
          break;
        case 102:
          printf("102 - ATUM ESPECIAL\n");
          printf("Valor do seu pedido й: ");
          printf("R$ %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          strcpy(cliente1.detalhe.Sabor,"102 - ATUM ESPECIAL\n");
          cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
        case 103:
          printf("103 - BACON\n");
          printf("Valor do seu pedido й: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          strcpy(cliente1.detalhe.Sabor,"103 - BACON\n");
          cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
        case 104:
          printf("104 - BAIANA\n");
          printf("Valor do seu pedido й: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          strcpy(cliente1.detalhe.Sabor,"105 - BAIANA\n");
cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
        case 105:
          printf("105 - BAIANA ESPECIAL\n");
          printf("Valor do seu pedido й: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          strcpy(cliente1.detalhe.Sabor,"107 - BAIANA ESPECIAL\n");
cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
        case 106:
          printf("106 - BROCOLIS\n");
          printf("Valor do seu pedido й: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          strcpy(cliente1.detalhe.Sabor,"106 - BROCOLIS\n");
cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
        case 107:
          printf("107 - BROCOLIS ESPECIAL\n");
          printf("Valor do seu pedido й: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          strcpy(cliente1.detalhe.Sabor,"107 - BROCOLIS ESPECIAL\n");
cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
        case 108:
          printf("108 - CALABREZA\n");
          printf("Valor do seu pedido й: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
strcpy(cliente1.detalhe.Sabor,"108 - CALABRESA  \n");
cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
        case 109:
          printf("109 - CALIFORNIA\n");
          printf("Valor do seu pedido й: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          strcpy(cliente1.detalhe.Sabor,"109 - CALIFORNIA \n");
cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
        case 110:
          printf("110 - ESCAROLA\n");
          printf("Valor do seu pedido й: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
strcpy(cliente1.detalhe.Sabor,"110 - ESCAROLA\n");
cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
        case 111:
          printf("111 - FRANGO\n");
          printf("Valor do seu pedido й: ");
          printf("R$: %d,00\n", vl_pizzat1);
          soma = soma + vl_pizzat1;
          strcpy(cliente1.detalhe.Sabor,"111 - FRANGO\n");
cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;

        }
      break;

    case 3:
      system("cls");
       printf("Informe o Cуdigo da Pizza Doce: ");
        scanf("%d", &cod_pedido);
        printf("Pizza numero: %d\n", cod_pedido);
        switch (cod_pedido)
        {
          case 130:
          printf("130 - BANANA\n");
          printf("Valor do seu pedido й: ");
          printf("R$ %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          strcpy(cliente1.detalhe.Sabor,"130 - BANANA\n");
cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
         case 131:
          printf("131 - BRIGADEIRO\n");
          printf("Valor do seu pedido й: ");
          printf("R$ %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          strcpy(cliente1.detalhe.Sabor,"131 - BRIGADEIRO\n");
cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
         case 132:
          printf("132 - MORANGO\n");
          printf("Valor do seu pedido й: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          strcpy(cliente1.detalhe.Sabor,"132 - MORANGO\n");
cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
         case 133:
          printf("133 - ROMEU E JULIETA\n");
          printf("Valor do seu pedido й: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          strcpy(cliente1.detalhe.Sabor,"133 - ROMEU E JULIETA\n");
cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
        }
      break;

    case 4:
      system("cls");
      printf("Informe o Cуdigo da Bebida: ");
      scanf("%d", &cod_pedido);
      printf("Pizza numero: %d\n", cod_pedido);
        switch (cod_pedido)
        {
          case 134:
          printf("134 - REFRIGENTE 2L\n");
          printf("Valor do seu pedido й: ");
          printf("R$ %d,00\n", vl_bebida1);
          soma = soma + vl_bebida1;
          strcpy(cliente1.detalhe.Sabor,"134 - REFRIGENTE 2L\n");
cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
         case 135:
          printf("135 - CERVEJA LONG NECK 350 ml\n");
          printf("Valor do seu pedido й: ");
          printf("R$ %d,00\n", vl_bebida2);
          soma = soma + vl_bebida2;
          strcpy(cliente1.detalhe.Sabor,"135 - CERVEJA LONG NECK 350ml\n");
cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
         case 136:
          printf("136 - БGUA 500 ml\n");
          printf("Valor do seu pedido й: ");
          printf("R$: %d,00\n", vl_bebida3);
          soma = soma + vl_bebida3;
          strcpy(cliente1.detalhe.Sabor,"136 - ÁGUA 500ml\n");
cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
         case 137:
          printf("137 - VINHO 1L\n");
          printf("Valor do seu pedido й: ");
          printf("R$: %d,00\n", vl_bebida4);
          soma = soma + vl_bebida4;
          strcpy(cliente1.detalhe.Sabor,"137 - VINHO 1L\n");
cliente1.detalhe.ValorTotal+=soma;
          printf("=========================\n\n");
          break;
        }
      break;

    case 5:
    printf("%s",cliente1.detalhe.Sabor);
    while(1){}
    break;

    }
  }
}
