main.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // para acentuação
#include <conio.h> // para senha
#include <windows.h> //para animação de loading


int main()
{

    //TELA DE CARREGAMENTO
    int i, j;

    system ("cls");

    printf ("\n\nCarregando: \n\n");

    for (i = 0; i <= 71; i++)
    {
        //printf ("\r  %d%%", i);
        printf ("  %d%%\r", i);
        fflush (stdout);

        for (j = 0; j < i; j++)
        {
            if (!j) // Da espaco na barra pra nao enconstar na borda da tela
                printf ("  ");

            printf ("%c", 219);
            Sleep(2);
        }
    }

    printf ("\n\n Finalizando...");
    Sleep (1700);
    printf ("\r \t\t\t\t  CARREGADO\n\n\n");
    printf ("\t\t  Programador: Allan Lobo\n\n\n\n");
    system ("pause");
    system ("cls");

    //FIM DA TELA DE CARREGANDO
//------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------------


    setlocale(LC_ALL, "Portuguese");// HABILITA ACENTUAÇÃO
    int escolha1, escolha2, escolha3, escolha4, escolha5,erro;
    char senha[5], feedback;

    do      // MENU PRINCIPAL
    {

        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("                      S O P H I A   M O D A S\n");
        printf("               Aqui você pode tudo, SOPHIAdo que não!\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n1");
        printf(" JÁ É CLIENTE? Então digite 1!");
        printf("     |    NÃO É CLIENTE? Então digite 2!\n");
        printf("\n\nSua opção é = ");
        scanf("%d", &escolha1);
        system("cls"); //LIMPA TELA AO REALIZAR O METODO ACIMA/FIM DA TELA INICIAL


        if(escolha1==1)  //PÁGINA DE LOGIN
        {

            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("                      F A Ç A  S E U  L O G I N\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
            printf("Digite Seu Código de acesso = ");
            senha[0] = getch();
            printf ("*");
            senha[1] = getch();
            printf ("*");
            senha[2] = getch();
            printf ("*");
            senha[3] = getch();
            printf ("*");
            senha[4] = getch();
            printf ("*");
            senha[5] = getch();
            printf ("*");
            printf("\n1- Entrar");
            printf("\n2- Cancelar\n");
            printf("Opção = ");
            scanf("%d",&escolha3);
            system("cls");

            if(escolha3==1)
            {
                do // PÁGINA DO CLIENTE
                {

                    if((senha[0]=='1') && (senha[1]=='2') && (senha[2]=='3') && (senha[3]=='4') && (senha[4]=='5') && (senha[5]=='6'))
                    {
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        printf("                         O L Á  C R E U Z A !\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                        printf(" Como posso ajudar?\n\n");
                        printf("1 - Meu saldo\n");
                        printf("2 - Meus dados\n");
                        printf("3 - Meus Cupons\n");
                        printf("4 - Informações da Loja\n");
                        printf("5 - Feedback\n");
                        printf("Escolha uma opção = ");
                        scanf("%d", &escolha2);
                        system("cls");

                        if(escolha2==1)
                        {
                            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                            printf("                         M E U  S A L D O !\n");
                            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                            printf("VOCÊ ESTÁ COM SALDO DEVEDOR! Veja o que falta pagar:\n\n");
                            printf("------------------------------------------------------------------------\n\n");
                            printf("     Blusa de onça GG = R$90 - Compra efetuada em: 02/08/2017\n");
                            printf("     Calça Pitbull, 48 = R$100 - Compra efetuada em: 15/08/2017\n\n");
                            printf("------------------------------------------------------------------------\n\n");
                            printf("Por favor, entre em contato para tratar sobre a dívida!\n\n");
                            printf("-Whatsapp = (91) 99999-9999\n");
                            printf("-Fixo = (91) 9999-9999\n");
                            printf("-Endereço = Rua Cheguevara - Parque Guajará, Belém - PA, 25\n");
                            printf("-Aberta de Segunda à Sábado - 09:00 até às 18:00\n\n");
                            printf("Entre com qualquer digito para voltar = ");
                            scanf("%d", &escolha5);
                            system("cls");
                        }

                        if(escolha2==2)
                        {
                            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                            printf("                         M E U S  D A D O S !\n");
                            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                            printf("Nome Completo = Creuza Soures Bezerra Silva\n");
                            printf("Data de nascimento = 01/04/1980\n");
                            printf("Endereço = Portal da Amazônia, casa 15 - Jurunas\n");
                            printf("Contato = (91) 9999-9999\n");
                            printf("Fixo = N/A\n\n");
                            printf("Caso queira alterar algum de seus dados, contate-nos!\n");
                            printf("Whatsapp = (91) 99999-9999\n\n");
                            printf("Entre com qualquer digito para voltar = ");
                            scanf("%d", &escolha5);
                            system("cls");
                        }

                        if(escolha2==3)
                        {
                            char teste;
                            teste = 37;
                            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                            printf("                         M E U S  C U P O N S !\n");
                            printf("          Esses são seus cupons disponíveis para essa quinzena!\n");
                            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                            printf("Basta apresentar o código no caixa e usufruir do desconto previsto!\n\n");
                            printf(" SUPER CUPOM!\n Na compra de duas calcinhas, a 3ª sai de graça!\n\n Código: SM157\n\n");
                            printf(" BALÃO MÁGICO!\n Nas compras a partir de R$300, terás o direito a um balão.\n");
                            printf("Dentro haverá 1 papel desconto de 10%c até 50%c!\n\n Código: SM160\n\n", teste, teste);
                            printf("OBS = Só é possível usar 1 vez o cupom!\n");
                            printf("OBS 2 = Novos cupons são inseridos a cada quinzena, atente-se nisso!\n\n");
                            printf("Entre com qualquer digito para voltar = ");
                            scanf("%d", &escolha5);
                            system("cls");
                        }

                        if(escolha2==4)
                        {
                            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                            printf("                      S O P H I A   M O D A S\n");
                            printf("               Aqui você pode tudo, SOPHIAdo que não!\n");
                            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                            printf("Endereço = Rua Cheguevara - Parque Guajará, Belém - PA, 25\n");
                            printf("Fixo = (91) 9999-9999\n");
                            printf("Whatsapp = (91) 99999-9999\n");
                            printf("Aberta de Segunda à Sábado - 09:00 até às 18:00\n\n");
                            printf("Entre com qualquer digito para voltar = ");
                            scanf("%d", &escolha5);
                            system("cls");
                        }

                        if(escolha2==5)
                        {
                            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                            printf("                          F E E D B A C K  !\n");
                            printf("        O Seu feedback é de extrema importância para a empresa\n");
                            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                            printf("Sempre queremos oferecer o melhor serviço possível para você, portanto,\n");
                            printf("sua sugestão/crítica sempre será muito bem vinda!\n\n");
                            printf("Meu feedback: \n");
                            scanf("%s", &feedback);
                            printf("1 - Enviar\n");
                            printf("2 - Cancelar\n");
                            printf("Opção: ");
                            scanf("%d", &escolha4);
                            system("cls");
                            if(escolha4==1)
                            {
                                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("             O B R I G A D O  P E L O  F E E D B A C K\n");
                                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                            }
                            else
                            {
                                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                                printf("              	F E E D B A C K  C A N C E L A D O\n");
                                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                            }
                        }
                        if(escolha2 != 0 && escolha2 != 1 && escolha2 != 2 && escolha2 != 3 && escolha2 != 4 && escolha2 != 5)
                        {
                            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                            printf("     O P Ç Ã O  I N V Á L I D A,  T E N T E   N O V A M E N T E\n");
                            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

                        }
                    }
                }
                while(escolha2<0 || escolha2>5 || escolha5>=0 );
            }
        }
        else
        {
            if(escolha1==2) // PÁGINA NÃO CLIENTE
            {

                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("                    N Ã O  P E R C A  T E M P O  !!\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
                printf("Visite já a nossa loja, cadastre-se e ganhe PRIVILÉGIOS!\n\n");
                printf("Endereço = Rua Cheguevara - Parque Guajará, Belém - PA, 25\n");
                printf("Fixo = (91) 9999-9999\n");
                printf("Whatsapp = (91) 99999-9999\n");
                printf("Aberta de Segunda à Sábado - 09:00 até 18:00\n\n");
                printf("Estaremos esperando por você! \n\n");
            }
            else
            {
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("     O P Ç Ã O  I N V Á L I D A,  T E N T E   N O V A M E N T E\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            }
        }




    }
    while(escolha1>2 || escolha1<1 || escolha3==2 );



    return 0;


}