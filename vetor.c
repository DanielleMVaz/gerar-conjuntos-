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

    printf ("\n\t**********************************GERA��O DE CONJUNTOS***************************************\n\n");
    srand(time(NULL));

    printf("\n\t\t\t\t\tCONJUNTOS COM 9 N�MEROS.\n\n");

    printf ("\n\t*********************************PRIMEIRO CONJUNTO*******************************************\n\n");

    for (i=0; i<10; i++)
    {
        gerar.vetor1 [i] = rand() % 100;
        printf("\n\tPosi��o - %d - = ",i+1);
        printf("%d \n", gerar.vetor1[i]);
        gerar1.uni[i]=gerar.vetor1[i];

    }

    printf("\n\n");

    printf("\n\tO primeiro conjunto �: ");

    for (i=0; i<10; i++)
    {
        printf(" %d ", gerar.vetor1[i]);

    }

    printf("\n\n\n");

    printf ("\n\t********************************SEGUNDO CONJUNTO*********************************************\n\n");

    for (i=0; i<10; i++)
    {
        gerar.vetor2 [i] = rand() % 100;
        printf("\n\tPosi��o - %d - = ",i+1);
        printf("%d \n",gerar.vetor2[i]);
        gerar1.uni[i+10]=gerar.vetor2[i];

    }

    printf("\n\n");

    printf("\n\tO segundo conjunto �: ");

    for (i=0; i<10; i++)
    {
        printf(" %d ", gerar.vetor2[i]);

    }

    printf("\n\n\n");

    printf("\n\t*******************************C�LCULOS - MENU DE OP��ES*************************************\n\n");

    printf("\n\tAp�s gerar os conjuntos realize a escolha de uma op��o do menu inserido a baixo.\n\n");

    printf("\n\t*********************************************************************************************\n\n");

    printf ("\n\t*************************************MENU DE OP��ES******************************************\n\n");

    printf("\n\t\tDIGITE - (1) - PARA REALIZAR A UNI�O DOS CONJUNTOS.\n\n");

    printf("\n\t\tDIGITE - (2) - PARA REALIZAR A INTERSEC��O DOS CONJUNTOS.\n\n");

    printf("\n\t\tDIGITE - (3) - PARA REALIZAR A DIFEREN�A DOS CONJUNTOS.\n\n");

    printf("\n\n");

    printf ("\n\t**********************************************************************************************\n\n");

    printf ("\n\t**************************************OP��O ESCOLHIDA*****************************************\n\n");

    scanf("%d",&menu);


    switch (menu)
    {

    case 1:
        printf ("\n\t***********************************UNI�O DOS CONJUNTOS**************************************\n\n");

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


        printf("\n\tA UNI�O �: ");

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
        printf ("\n\t*****************************INTERSEC��O DOS CONJUNTOS***************************************\n\n");

        printf("\n\t\tA INTERSEC��O �: ");

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
        printf ("\n\t**********************************DIFEREN�A DOS CONJUNTOS*************************************\n\n");

        printf("\n\tA DIFEREN�A DO (PRIMEIRO CONJUNTO) EM RELA��O AO (SEGUNDO CONJUNTO): ");

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


        printf("\n\tA DIFEREN�A DO (SEGUNDO CONJUNTO) EM RELA��O AO (PRIMERIO CONJUNTO): ");

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
        printf("\n\tOP��O ESCOLHIDA N�O POSSUI!!\n\n");
        break;

    }
}
