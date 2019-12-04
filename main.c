#include <stdio.h>
#include <stdlib.h>
#include <cliente.h>
#include <pedido.h>

int main(void)
{
  int op,uni,i;
  i=0;
  op=1;
  uni=1;

  struct cliente Clientes[50], fulano;
  while(op!=6)
  {
   system("cls");
   printf("Menu Inicial\n");
   printf("=========================\n\n");
    printf("1 - Pedido\n");
    printf("3 - Estoque\n");
    printf("4 - Funcionarios\n");
    printf("5 - Filiais\n");
    printf("6 - Sair\n\n");
    printf("=========================\n\n");
    printf("Escolha a Opcao: ");
     scanf("%d", &op);
  printf("=========================\n\n");

  switch(op)
    {
    case 1:
     i++;
     printf("NOME: ");
     scanf("%s",fulano.Nome);
     printf("ENDERECO: ");
     scanf("%s",fulano.Endereco);
     Clientes[i]=fulano;

//     pedido();

      break;

    case 3:

pedido();

      break;


    case 4:


      break;

    case 5:

     while(uni!=3)
     {
      printf("Outras Unidades\n");
      printf("=========================\n\n");
      printf("1 - Paulista\n");
      printf("2 - Faria Lima\n");
      printf("3 - Jardins\n");
      printf("Informe a unidade: ");
       scanf("%d", &uni);
       printf("=========================\n\n");

      if(uni==1)
      {
        printf("Av. Paulista, 900\n");
        printf("Tel: 11 2859-4321\n");
        printf("=========================\n\n");
         break;
      }
      if(uni==2)
      {
        printf("Av. Brg. Faria Lima, 1099\n");
        printf("Tel: 11 4506-5462\n");
        printf("=========================\n\n");
         break;
      }
       else
       {
         printf("R. Colômbia, 785\n");
         printf("Tel: 11 3580-9790\n");
         printf("=========================\n\n");
         break;
       }
     }
    case 6:
     default:
      printf("O sistema será fechado!");
     break;
     }
  }
}
