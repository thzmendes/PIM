#include <stdio.h>
#include <stdlib.h>

struct pedido{
char Sabor[100];
char Bebida[100];
float ValorTotal;
};
void pedido_Metodo()
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
   printf("Digite a Opção: ");
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
        printf("111 - FRANGO\n");
        printf("112 - GORGONZOLA\n");
        printf("113 - LOMBO\n");
        printf("114 - LOMBO ESPECIAL\n");
        printf("115 - MARGHERITA\n");
        printf("116 - MILHO VERDE\n");
        printf("117 - MODA DA CASA\n");
        printf("118 - MUSSARELA\n");
        printf("119 - NAPOLITANA\n");
        printf("120 - PALMITO\n");
        printf("121 - PALMITO ESPECIAL\n");
        printf("122 - PAULISTA \n");
        printf("123 - PERU\n");
        printf("124 - PERU ESPECIAL\n");
        printf("125 - PIZZAIOLO ESPECIAL\n");
        printf("126 - PORTUGUESA\n");
        printf("127 - PROVOLONE\n");
        printf("128 - QUATRO QUEIJOS\n");
        printf("129 - ROMANA\n");
        printf("130 - BANANA\n");
        printf("131 - BRIGADEIRO\n");
        printf("132 - MORANGO\n");
        printf("133 - ROMEU E JULIETA\n");
        printf("134 - REFRIGENTE 2L\n");
        printf("135 - CERVEJA LONG NECK 350ml\n");
        printf("136 - ÁGUA 500ml\n");
        printf("137 - VINHO 1L\n");
        printf("=========================\n\n");
     break;

   case 2:
      system("cls");
        printf("Informe o Código da Pizza: ");
        scanf("%d", &cod_pedido);
        printf("Pizza numero: %d\n", cod_pedido);
        switch (cod_pedido)
        {
        case 101:
          printf("101 - ALICCE\n");
          printf("Valor do seu pedido é: ");
          printf("R$ %d,00\n", vl_pizzat4);
          soma = soma + vl_pizzat4;
          printf("=========================\n\n");
          break;
        case 102:
          printf("102 - ATUM ESPECIAL\n");
          printf("Valor do seu pedido é: ");
          printf("R$ %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 103:
          printf("103 - BACON\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 104:
          printf("104 - BAIANA\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 105:
          printf("105 - BAIANA ESPECIAL\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 106:
          printf("106 - BROCOLIS\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 107:
          printf("107 - BROCOLIS ESPECIAL\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 108:
          printf("108 - CALABREZA\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 109:
          printf("109 - CALIFORNIA\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 110:
          printf("110 - ESCAROLA\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 111:
          printf("111 - FRANGO\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat1);
          soma = soma + vl_pizzat1;
          printf("=========================\n\n");
          break;
        case 112:
          printf("112 - GORGONZOLA\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 113:
          printf("113 - LOMBO\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 114:
          printf("114 - LOMBO ESPECIAL\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 115:
          printf("115 - MARGHERITA\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat2);
          soma = soma + vl_pizzat2;
          printf("=========================\n\n");
          break;
        case 116:
          printf("116 - MILHO VERDE\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 117:
          printf("117 - MODA DA CASA\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 118:
          printf("118 - MUÇARELA\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat1);
          soma = soma + vl_pizzat1;
          printf("=========================\n\n");
          break;
        case 119:
          printf("119 - NAPOLITANA\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat2);
          soma = soma + vl_pizzat2;
          printf("=========================\n\n");
          break;
        case 120:
          printf("120 - PALMITO\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 121:
          printf("121 - PALMITO ESPECIAL\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 122:
          printf("122 - PAULISTA\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 123:
          printf("123 - PERU\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 124:
          printf("124 - PERU ESPECIAL\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 125:
          printf("125 - PIZZAIOLO\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 126:
          printf("126 - PORTUGUESA\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 127:
          printf("127 - PROVOLONE\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat2);
          soma = soma + vl_pizzat2;
          printf("=========================\n\n");
          break;
        case 128:
          printf("128 - QUATRO QUEIJOS\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        case 129:
          printf("129 - ROMANA\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat4);
          soma = soma + vl_pizzat4;
          printf("=========================\n\n");
          break;

        }
      break;

    case 3:
      system("cls");
       printf("Informe o Código da Pizza Doce: ");
        scanf("%d", &cod_pedido);
        printf("Pizza numero: %d\n", cod_pedido);
        switch (cod_pedido)
        {
          case 130:
          printf("130 - BANANA\n");
          printf("Valor do seu pedido é: ");
          printf("R$ %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
         case 131:
          printf("131 - BRIGADEIRO\n");
          printf("Valor do seu pedido é: ");
          printf("R$ %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
         case 132:
          printf("132 - MORANGO\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
         case 133:
          printf("133 - ROMEU E JULIETA\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_pizzat3);
          soma = soma + vl_pizzat3;
          printf("=========================\n\n");
          break;
        }
      break;

    case 4:
      system("cls");
      printf("Informe o Código da Bebida: ");
      scanf("%d", &cod_pedido);
      printf("Pizza numero: %d\n", cod_pedido);
        switch (cod_pedido)
        {
          case 134:
          printf("134 - REFRIGENTE 2L\n");
          printf("Valor do seu pedido é: ");
          printf("R$ %d,00\n", vl_bebida1);
          soma = soma + vl_bebida1;
          printf("=========================\n\n");
          break;
         case 135:
          printf("135 - CERVEJA LONG NECK 350 ml\n");
          printf("Valor do seu pedido é: ");
          printf("R$ %d,00\n", vl_bebida2);
          soma = soma + vl_bebida2;
          printf("=========================\n\n");
          break;
         case 136:
          printf("136 - ÁGUA 500 ml\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_bebida3);
          soma = soma + vl_bebida3;
          printf("=========================\n\n");
          break;
         case 137:
          printf("137 - VINHO 1L\n");
          printf("Valor do seu pedido é: ");
          printf("R$: %d,00\n", vl_bebida4);
          soma = soma + vl_bebida4;
          printf("=========================\n\n");
          break;
        }
      break;

    case 5:
    break;

    }
  }
}
