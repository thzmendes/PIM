#include <stdio.h>
#include <stdlib.h>
typedef struct Pizza
{
    int tamanho;
    int sabor;
    float valor;
};

typedef struct Pedido
{
    struct Pizza pizzas[10];
    float valor;
    char cliente [50];
    char endereco [50];
};

int main()
{
    int menuEscolha,escolhaSabor,escolhaQuantidade,fimPedido, saborPizza,qntdPizzas,tamanhoPizza,pizzatemp;
    struct Pedido pedido;


    while(menuEscolha != 3)
    {
        printf("Bem - Vindo ao Sistema de Administração de Pizzaria \n");
        printf("Escolha o procedimento: \n");
        printf("1- Pedido 2-Relatório de Pedidos 3- Sair \n");

        scanf("%d",&menuEscolha);
        switch(menuEscolha)
        {
        case 1:

            while(fimPedido != 1)
            {
                struct Pizza pizza;
                printf("Escolha o tamanho da pizza:\n");
                printf("1- Grande R$ 40\n");
                printf("2- Media  R$ 30\n");
                printf("3- Pequena R$ 20\n");
                scanf("%d",&pizzatemp);
                tamanhoPizza = pizzatemp;
                switch(tamanhoPizza)
                {
                case 1:
                    pizza.tamanho =1;
                    pedido.valor+=40;
                    break;
                case 2:
                    pizza.tamanho =2;
                    pedido.valor+=30;
                    break;
                case 3:
                    pizza.tamanho =3;
                    pedido.valor+=20;
                    break;
                case 4:
                    fimPedido = 1;
                    break;
                default:
                    printf("Tamanho inválido.");
                    break;
                }
                printf("Escolha o sabor da pizza:\n");
                printf("1- Calabresa\n");
                printf("2- Mussarela\n");
                printf("3- Pepperoni\n");
                printf("4- Frango com Catupiry\n");
                scanf("%d",&saborPizza);
                switch(saborPizza)
                {
                case 1:
                    pizza.sabor =1;
                    break;
                case 2:
                    pizza.sabor =2;
                    break;
                case 3:
                    pizza.sabor =3;
                    break;
                case 4:
                    pizza.sabor =4;
                    break;
                default:
                    printf("Sabor inválido.");
                    break;
                }
                pedido.pizzas[sizeof-1] = pizza;

                printf("Insira nome do Cliente:");
                scanf("%s",pedido.cliente);
                printf("Endereço do Cliente:");
                scanf("%s",pedido.endereco);
                printf("Fim do pedido ? 1 - sim 2 não");
                scanf("%d",&fimPedido);
                break;
            case 2:

                break;
            case 3:

                break;
            case 4:
                printf("Finalizando sessão.");
                break;
            default:
                printf("Valor inserido inválido.");
                break;
            }
            break;

        case 2:
            /*IMPLEMENTAÇÂO RELATORIO*/
            break;
        case 3:
            menuEscolha = 3;
            break;
        }

    }

    return 0;
}
