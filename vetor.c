#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include<time.h>


int main (void)
{

    int i;
    int j;
    int menu;




    setlocale(LC_ALL,"portuguese");

    struct vetor
    {

        int vetor1[10];
        int vetor2[10];
        int vetor3[10];
        int vetor4[10];



    };

    struct vetor gerar;

    struct menu
    {

        int uni[20];
        int inter[10];
        int dif[20];


    };

    struct menu gerar1;

    printf ("\n\t**********************************GERAÇÃO DE CONJUNTOS***************************************\n\n");
    srand(time(NULL));

    printf("\n\t\t\t\t\tCONJUNTOS COM 9 NÚMEROS.\n\n");

    printf ("\n\t*********************************PRIMEIRO CONJUNTO*******************************************\n\n");

    for (i=0; i<10; i++)
    {
        gerar.vetor1 [i] = rand() % 100;
        printf("\n\tPosição - %d - = ",i+1);
        printf("%d \n", gerar.vetor1[i]);
        gerar1.uni[i]=gerar.vetor1[i];

    }

    printf("\n\n");

    printf("\n\tO primeiro conjunto é: ");

    for (i=0; i<10; i++)
    {
        printf(" %d ", gerar.vetor1[i]);

    }

    printf("\n\n\n");

    printf ("\n\t********************************SEGUNDO CONJUNTO*********************************************\n\n");

    for (i=0; i<10; i++)
    {
        gerar.vetor2 [i] = rand() % 100;
        printf("\n\tPosição - %d - = ",i+1);
        printf("%d \n",gerar.vetor2[i]);
        gerar1.uni[i+10]=gerar.vetor2[i];

    }

    printf("\n\n");

    printf("\n\tO segundo conjunto é: ");

    for (i=0; i<10; i++)
    {
        printf(" %d ", gerar.vetor2[i]);

    }

    printf("\n\n\n");

    printf("\n\t*******************************CÁLCULOS - MENU DE OPÇÕES*************************************\n\n");

    printf("\n\tApós gerar os conjuntos realize a escolha de uma opção do menu inserido a baixo.\n\n");

    printf("\n\t*********************************************************************************************\n\n");

    printf ("\n\t*************************************MENU DE OPÇÕES******************************************\n\n");

    printf("\n\t\tDIGITE - (1) - PARA REALIZAR A UNIÃO DOS CONJUNTOS.\n\n");

    printf("\n\t\tDIGITE - (2) - PARA REALIZAR A INTERSECÇÃO DOS CONJUNTOS.\n\n");

    printf("\n\t\tDIGITE - (3) - PARA REALIZAR A DIFERENÇA DOS CONJUNTOS.\n\n");

    printf("\n\n");

    printf ("\n\t**********************************************************************************************\n\n");

    printf ("\n\t**************************************OPÇÃO ESCOLHIDA*****************************************\n\n");

    scanf("%d",&menu);


    switch (menu)
    {

    case 1:
        printf ("\n\t***********************************UNIÃO DOS CONJUNTOS**************************************\n\n");

        for (i=0; i<20; i++)
        {
            for (j=i+1; j<20; j++)
            {

                if (gerar1.uni[i] == gerar1.uni[j])
                {

                    gerar1.uni[j]=0;
                }
                else {}
            }

        }

        for (i=0; i<20; i++)
        {
            for (j=i+1; j<20; j++)
            {

                if (gerar1.uni[i] == gerar1.uni[j])
                {

                    gerar1.uni[j]=0;
                }
                else {}
            }

        }


        printf("\n\tA UNIÃO É: ");

        for (i=0; i<20; i++)
        {

            if(gerar1.uni[i] != 0)
            {

                printf(" %d ",gerar1.uni[i]);

            }
            else {}
        }

        printf("\n\n\n");

        break;


    case 2:
        printf ("\n\t*****************************INTERSECÇÃO DOS CONJUNTOS***************************************\n\n");

        printf("\n\t\tA INTERSECÇÃO É: ");

        for (i=0; i<10; i++)
        {
            for (j=0; j<10; j++)
            {
                if(gerar.vetor1[i]==gerar.vetor2[j])
                {

                    printf(" %d ",gerar.vetor1[i]);
                }
            }
        }

        printf("\n\n");

        break;


    case 3:
        printf ("\n\t**********************************DIFERENÇA DOS CONJUNTOS*************************************\n\n");

        printf("\n\tA DIFERENÇA DO (PRIMEIRO CONJUNTO) EM RELAÇÃO AO (SEGUNDO CONJUNTO): ");

        for(i=0; i<10; i++)
        {
            for (j=0; j<10; j++)
            {
                if(gerar.vetor1[i]!=gerar.vetor2[j])
                {

                    gerar1.inter[i]=gerar.vetor1[i];

                }
                if(gerar.vetor1[i]==gerar.vetor2[j])
                {

                    gerar.vetor1[i]=0;
                }
            }
        }

        for (i=0; i<10; i++)
        {

            if(gerar1.inter[i]!=0)
            {

                printf(" %d ", gerar1.inter[i]);
            }
        }

        printf("\n\n\n");


        printf("\n\tA DIFERENÇA DO (SEGUNDO CONJUNTO) EM RELAÇÃO AO (PRIMERIO CONJUNTO): ");

        for(j=0; j<10; j++)
        {
            for (i=0; i<10; i++)
            {
                if(gerar.vetor2[j]!=gerar.vetor1[i])
                {

                    gerar1.inter[j]=gerar.vetor2[j];

                }
                if(gerar.vetor2[j]==gerar.vetor1[i])
                {

                    gerar.vetor2[j]=0;
                }
            }
        }


        for (j=0; j<10; j++)
        {

            if(gerar1.inter[j]!=0)
            {

                printf(" %d ", gerar1.inter[j]);
            }
        }

        printf("\n\n\n");

        break;

    default:
        printf("\n\tOPÇÃO ESCOLHIDA NÃO POSSUI!!\n\n");
        break;

    }
}
