#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
struct pedido
{
    char namePed[200];
    int valorped;
    int cod;
}logP[200];

struct cadastro
{
    char CPF[200];
    char telefone[200];
    char nome[200];
    char endereco[200];
    char data[200];
    int vazio,cod;
    struct pedido clientePed;

}log[200];
struct funcionario
{
    char CPF[200];
    char telefone[200];
    char nome[200];
    char endereco[200];
    char cargo[200];
    char data[200];
    int vazio,cod;
    char salario[100];

}fun[200];
//AQUI DECLARO AS FUNÇÕES A SEREM USADAS
int verifica_pos(void);
int verifica_cod( int cod );
int verifica_codf( int cod );
int opt;
void cadastroP(int cod,int pos);
void cadastroF(int cod,int pos);
void list();
void listf();
 int cadastroPedido(int Cad);
void consultaCod (void);
void consultaCodf (void);
void excluirCliente (void);
void excluirFuncionario (void);



int main(void){ //INICIO DO MAIN

    int i,Opcao,OpcaoCliente,posicao,retorno;
    int codaux;
    int valorTotal = 0;
    do
    {printf("=======SISTEMA DE PIZZARIA======= \n");
        printf("1 - Cadastrar Novo Cliente\n");
        printf("2 - Relatorio Cliente\n");
        printf("3 - Excluir Cliente\n");
        printf("4 - Cadastrar Pedido\n");
        printf("5 - Excluir Registro Pedido\n");
        printf("6 - Cadastrar Novo Funcionario\n");
        printf("7 - Relatorio Funcionario\n");
        printf("8 - Excluir Funcionario\n");
        printf("9 - Sair\n");
        printf(" Selecione uma opcao por favor: ");
        scanf("%d", &Opcao);
        getchar();
        if (Opcao == 1)
        {
            printf("Voce selecionou a opcao 1 - Cadastrar Novo Cliente\n");
            posicao=verifica_pos();

                if ( posicao != -1 )
                {

                    printf("\nEntre com um codigo de 1 a 200 para seu cadastro: \n");
                    scanf("%d",&codaux);fflush(stdin);

                    retorno = verifica_cod( codaux );

                    if ( retorno == 1 )
                        cadastroP( codaux, posicao );
                    else{
                        printf("\nCodigo ja existente ou invalido pressione enter para voltar ao menu principal\n");
                        getchar();
                        system("cls");
                        main();
                    }

                }
                else
                    printf("\nNao e possivel realizar mais cadastros!\n");

                break;

        }
        else if (Opcao == 2)
        {
            system("cls");
            do{
            printf("Voce selecionou a opcao 2 - Relatorio Clientes\n\n");
            printf("1 - Pesquisar cliente por codigo\n");
            printf("2 - Listar todos os clientes\n");
            printf("3 - Voltar ao menu principal\n");
            printf("Selecione uma opcao por favor: ");
            scanf("%d", &OpcaoCliente);
            getchar();
                 if(OpcaoCliente == 1){
                    consultaCod();
                }
                else if(OpcaoCliente == 2){
                    list();
                }
                else if(OpcaoCliente == 3){
                    printf("Voce selecionou voltar ao menu principal, pressione ENTER para continuar");
                    getchar();
                    system("cls");
                }
                else
                    printf("Opcao Invalida\n\n");
    }while(OpcaoCliente =!3 || OpcaoCliente > 3 || OpcaoCliente < 0 || OpcaoCliente == 0);
        }

        else if (Opcao == 3)
        {
            printf("Voce selecionou a opcao 3 - Excluir Cliente\n");
            excluirCliente();
        }
        else if (Opcao == 4)
        {
            printf("Voce selecionou a opcao 4 - Cadastrar Pedido\n");
            int Cad;
            int vlr_T=0;
            printf("\nDigite numero do cadastro: ");
            scanf("%d",&Cad);

            vlr_T = cadastroPedido(Cad);
            log[Cad].clientePed.valorped = vlr_T;
            printf("\n Valor total : R$ %d\n",vlr_T);
            system("pause");
        }

        else if (Opcao == 5)
        {
            printf("Voce selecionou a opcao 5 - Excluir Pedido\n");
            int Cad;
            int vlr_T=0;
            printf("\nDigite numero do cadastro: ");
            scanf("%d",&Cad);
            log[Cad].clientePed.valorped =0;
            printf("\n Pedido Cancelado - Enter para continuar");
            system("pause");

        }else if (Opcao == 6)
        {
            printf("Voce selecionou a opcao 6 - Cadastrar Funcionarios\n");
            posicao=verifica_pos();

                if ( posicao != -1 )
                {

                    printf("\nEntre com um codigo de 1 a 200 para seu cadastro: \n");
                    scanf("%d",&codaux);fflush(stdin);

                    retorno = verifica_codf( codaux );

                    if ( retorno == 1 )
                        cadastroF( codaux, posicao );
                    else{
                        printf("\nCodigo ja existente ou invalido pressione enter para voltar ao menu principal\n");
                        getchar();
                        system("cls");
                        main();
                    }

                }
                else
                    printf("\nNao e possivel realizar mais cadastros!\n");

                break;
        }else if (Opcao == 7)
        {
            printf("Voce selecionou a opcao 7 - Relatorio Funcionarios\n");
            do{
            printf("1 - Pesquisar funcionario por codigo\n");
            printf("2 - Listar todos os funcionarios\n");
            printf("3 - Voltar ao menu principal\n");
            printf("Selecione uma opcao por favor: ");
            scanf("%d", &OpcaoCliente);
            getchar();
                 if(OpcaoCliente == 1){
                    consultaCodf();
                }
                else if(OpcaoCliente == 2){
                    listf();
                }
                else if(OpcaoCliente == 3){
                    printf("Voce selecionou voltar ao menu principal, pressione ENTER para continuar");
                    getchar();
                    system("cls");
                }
                else
                    printf("Opcao Invalida\n\n");
    }while(OpcaoCliente =!3 || OpcaoCliente > 3 || OpcaoCliente < 0 || OpcaoCliente == 0);
        }else if (Opcao == 8)
        {
            printf("Voce selecionou a opcao 8 - Excluir Funcionario\n");
            excluirFuncionario();
        }
        else if (Opcao == 9)
        {
            printf("Voce selecionou a opcao 9 - Sair\n");
        }
        else{
            printf("Opcao invalida, favor pressione enter para voltar ao menu principal");
            getchar();
            system("cls");
        }
        }    while (Opcao != 9 || Opcao < 9);

} // FIM DO MAIN
void list(){ // Lista os usuarios cadastrados.
    int i,j;
    for(i=0;i<200;i++){
        if(log[i].cod!=NULL){
            printf("\nCodigo: %d \nNome: %s\nCPF: %s\nEndereco: %s\nTelefone: %s\n\n", log[i].cod,log[i].nome,log[i].CPF,log[i].endereco,log[i].telefone);
    if(log[i].clientePed.valorped > 0){
        printf("Valor total pedido: %d \n ",&log[i].clientePed.valorped);
    }

     }
}
    printf("Pressione enter para volta ao menu principal");
    getchar();
    system("cls");

}
void listf(){ // Lista os usuarios cadastrados.
    int i,j;
    for(i=0;i<200;i++){
        if(fun[i].cod!=NULL){
            printf("\nCodigo: %d \nNome: %s\nCPF: %s\nEndereco: %s\nTelefone: %s\nSalario: %s\n\n", fun[i].cod,fun[i].nome,fun[i].CPF,fun[i].endereco,fun[i].telefone,fun[i].salario);
    }
}
    printf("Pressione enter para volta ao menu principal");
    getchar();
    system("cls");

} //FIM DO LIST
void cadastroP(int cod, int pos){ //Cadastro das pessoas
    int i;
    do{
    pos = verifica_pos();
    log[pos].cod = cod;
        printf("\nDigite seu nome: ");
        gets(log[pos].nome);
        printf("\nDigite seu CPF: ");
        gets(log[pos].CPF);
        printf("\nDigite seu Endereco: ");
        gets(log[pos].endereco);
        printf("\nDigite seu Telefone: ");
        gets(log[pos].telefone);
        log[pos].vazio = 1;
        //printf("\nDigite enter para efetuar novo cadastro ou qualquer outra tecla para volar ao menu principal");
        //scanf("%d", &opt);
        opt ==1;
        getchar();
    }while(opt==1);
    system("cls");
    main();

} // FIM DO CADASTRO DE PESSOAS
void cadastroF(int cod, int pos){ //Cadastro das pessoas
    int i;
    do{
    pos = verifica_pos();
    fun[pos].cod = cod;
        printf("\nDigite seu nome: ");
        gets(fun[pos].nome);
        printf("\nDigite seu CPF: ");
        gets(fun[pos].CPF);
        printf("\nDigite seu Endereco: ");
        gets(fun[pos].endereco);
        printf("\nDigite seu Cargo: ");
        gets(fun[pos].cargo);
        printf("\nDigite seu Telefone: ");
        gets(fun[pos].telefone);
        printf("\nDigite o Salario: ");
        gets(fun[pos].salario);
        fun[pos].vazio = 1;
        //printf("\nDigite enter para efetuar novo cadastro ou qualquer outra tecla para volar ao menu principal");
        //scanf("%d", &opt);
        opt ==1;
        getchar();
    }while(opt==1);
    system("cls");
    main();

} // FIM DO CADASTRO DE FUNCIONARIOS
int verifica_pos( void ) //VERIFICADOR DA POSIÇÃO
{
    int cont = 0;

    while ( cont <= 200 )
    {

        if ( log[cont].vazio == 0 )
            return(cont);

        cont++;

    }

    return(-1);

} // FIM DO VERIFICADOR
int verifica_cod( int cod ) // VERIFICADOR DE CÓDIGO
{
    int cont = 0;

    while ( cont <= 200 )
    {
        if ( log[cont].cod == cod )
            return(0);

        cont++;
    }

    return(1);

} // FIM DO VERIFICADOR
int verifica_codf( int cod ) // VERIFICADOR DE CÓDIGO
{
    int cont = 0;

    while ( cont <= 200 )
    {
        if ( fun[cont].cod == cod )
            return(0);

        cont++;
    }

    return(1);

} // FIM DO VERIFICADOR
int cadastroPedido(int Cad){
    int Option;
    int OpcaoPedido;
    int valor=0;
    if(Cad>0)
    {
      do
      {
        printf("\nEscolha o seu pedido: ");
        printf("\n1- Pizza de Calabresa -50 reais");
        printf("\n2- Pizza de Frango - 40 reais");
        printf("\n3- Pizza de Mussarela - 30 reais");
        printf("\n4- Coca Cola- 10 reais");
        printf("\n5- Guarana- 10 reais");
        scanf("%d", &OpcaoPedido);
        if(OpcaoPedido == 1)
        {
            printf("\nPressione 1 para continuar pedindo ou 2 para volar ao menu principal: \n");
            valor +=50;
            scanf("%d", &Option);
        }
        else
          if(OpcaoPedido == 2)
          {
            printf("\nPressione 1 para continuar pedindo ou 2 para volar ao menu principal:\n ");
            scanf("%d", &Option);
            valor +=40;
          }
        else
          if(OpcaoPedido == 3)
          {
            printf("\nPressione 1 para continuar pedindo ou 2 para volar ao menu principal: \n");
            scanf("%d", &Option);
            valor +=30;
          }
        else
          if(OpcaoPedido == 4)
          {
            printf("\nPressione 1 para continuar pedindo ou 2 para volar ao menu principal: \n");
            scanf("%d", &Option);
            valor +=10;
          }
          else
          if(OpcaoPedido == 5)
          {
            printf("\nPressione 1 para continuar pedindo ou 2 para volar ao menu principal: \n");
            scanf("%d", &Option);
            valor +=10;
          }
      }while(Option == 1);
    }
    return valor;
}


void consultaCodf(void) // CONSULTAR 1 CADASTRADO QUALQUER VIA CÓDIGO DADO POR USUÁRIO.
{
    int cont = 0, cod;

    printf("\nEntre com o codigo\n");
    scanf("%d",&cod);
    fflush(stdin);
    system("cls");

    while ( cont <= 200 )
    {

        if (fun[cont].cod==cod)
        {
            if (fun[cont].vazio==1)
            {

                printf("\nCodigo: %d \nNome: %s\nCPF: %s\nEndereco: %s\nTelefone: %s\nSalario: %s\n", fun[cont].cod,fun[cont].nome,fun[cont].CPF,fun[cont].endereco,fun[cont].telefone,fun[cont].salario);


                system ("pause");

                system("cls");

                break;

            }
        }

        cont++;

        if ( cont > 200 ){
            printf("\nCodigo nao encontrado, pressione enter para volar ao menu principal\n");
            getchar();
            system("cls");
        }

    }
} // FIM DA FUNÇÃO CONSULTAR // FIM DO CADASTRO DE PEDIDOS.
void consultaCod (void) // CONSULTAR 1 CADASTRADO QUALQUER VIA CÓDIGO DADO POR USUÁRIO.
{
    int cont = 0, cod;

    printf("\nEntre com o codigo\n");
    scanf("%d",&cod);
    fflush(stdin);
    system("cls");

    while ( cont <= 200 )
    {

        if (log[cont].cod==cod)
        {
            if (log[cont].vazio==1)
            {

                printf("\nCodigo: %d \nNome: %s\nCPF: %s\nEndereco: %s\nTelefone: %s\n\n", log[cont].cod,log[cont].nome,log[cont].CPF,log[cont].endereco,log[cont].telefone);


                system ("pause");

                system("cls");

                break;

            }
        }

        cont++;

        if ( cont > 200 ){
            printf("\nCodigo nao encontrado, pressione enter para volar ao menu principal\n");
            getchar();
            system("cls");
        }

    }
} // FIM DA FUNÇÃO CONSULTAR
void excluirCliente(void)  // EXCLUI CLIENTE
{
    int cod, cont = 0;
    char resp;
    printf("\nEntre com o codigo do registro que deseja excluir: \n");
    scanf("%d", &cod );

    while ( cont <= 200 )
    {

        if ( log[cont].cod == cod )
        {

            if (log[cont].vazio == 1 )
            {
                printf("\nCodigo: %d \nNome: %s\nCPF: %s\nEndereco: %s\nTelefone: %s\n\n", log[cont].cod,log[cont].nome,log[cont].CPF,log[cont].endereco,log[cont].telefone);
                getchar();
                printf("\nDeseja realmente excluir? s/n: ");
                scanf("%s",&resp);

                if ( ( resp == 'S' ) || ( resp == 's' ) )
                {
                    log[cont].vazio=0;
                    log[cont].cod = NULL;
                    printf("\nExclusao feita com sucesso\n");
                    break;
                }
                else
                {
                    if ( ( resp == 'N' ) || ( resp == 'n' ) )
                    {
                        printf("Exclusao cancelada!\n");
                        break;
                    }
                }

            }

        }

        cont++;

        if ( cont > 200 )
            printf("\nCodigo nao encontrado\n");

    }

    system("pause");
    system("cls");

}
void excluirFuncionario(void)  // EXCLUI CLIENTE
{
    int cod, cont = 0;
    char resp;
    printf("\nEntre com o codigo do registro que deseja excluir: \n");
    scanf("%d", &cod );

    while ( cont <= 200 )
    {

        if ( fun[cont].cod == cod )
        {

            if (fun[cont].vazio == 1 )
            {
                printf("\nCodigo: %d \nNome: %s\nCPF: %s\nEndereco: %s\nTelefone: %s\nSalario: %s\n", fun[cont].cod,fun[cont].nome,fun[cont].CPF,fun[cont].endereco,fun[cont].telefone,fun[1].salario);
                getchar();
                printf("\nDeseja realmente excluir? s/n: ");
                scanf("%s",&resp);

                if ( ( resp == 'S' ) || ( resp == 's' ) )
                {
                    fun[cont].vazio=0;
                    fun[cont].cod = NULL;
                    printf("\nExclusao feita com sucesso\n");
                    break;
                }
                else
                {
                    if ( ( resp == 'N' ) || ( resp == 'n' ) )
                    {
                        printf("Exclusao cancelada!\n");
                        break;
                    }
                }

            }

        }

        cont++;

        if ( cont > 200 )
            printf("\nCodigo nao encontrado\n");

    }

    system("pause");
    system("cls");

}
