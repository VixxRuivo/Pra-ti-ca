#include <stdio.h>
#include <stdlib.h>


main ()
{
    char nome[2][20];char disc[4][20];float matriz[2][4];float matrizma[2][1];float matrizmd[2][1];float soma[2];float somad[4];float mediaaluno[2][4];int i, j, k;float media[2];float mediad[4];float d1,d2,d3,d4;
    d1 = 0;d2 = 0;d3 = 0;d4 = 0;i = 0;j = 0;k = 0;
    for(i=0; i<2; i++)
    {
        printf("Nome do Aluno %d: ",i+1);
        fgets(nome[i],20,stdin);
        fflush(stdin);
    }
    printf("\n");
    for (j=0; j<4; j++)
    {
        printf("Nome da disciplina de nrm %i:",j+1);
        fgets(disc[j],20,stdin);
        fflush(stdin);
    }
    printf("\n\n");
    i = 0;
    j = 0;
    for(i=0; i<2; i++)    {
        for(j=0; j<4; j++)
        {
            printf("Digite a Nota do aluno %d da disciplina %i: ",i+1,j+1);
            scanf("%f",&matriz[i][j]);
            fflush(stdin);
            soma[i] += matriz[i][j];
            if (j==0)
            {
                d1 = d1 + matriz[i][j];
            }
            if (j==1)
            {
                d2 = d2+matriz[i][j];
            }
            if (j==2)
            {
                d3 = d3+matriz[i][j];
            }
            if (j==3)
            {
                d4 = d4+matriz[i][j];
            }

        }
        printf("\n");
        fflush(stdin);
        media[i] = soma[i]/4;
    }
    d1 = d1/2;
    d2 = d2/2;
    d3 = d3/2;
    d4 = d4/2;

    i = 0;
    j = 0;
    for(i=0; i<2; i++)
    {
        printf("Aluno:  %s ",nome[i]);
        fflush(stdin);
        printf("\nMedia: %2.f ",media[i]);
        fflush(stdin);
        printf("\n\n");
        fflush(stdin);
    }
    printf("\n");

    i=0;
    j=0;

    for(j=0; j<4; j++)
    {
        printf("\nDisciplina:  %s ",disc[j]);
        fflush(stdin);
        if(j==0)
        {
            printf("Media: %.2f",d1);
            fflush(stdin);
        }
        if(j==1)
        {
            printf("Media: %.2f",d2);
            fflush(stdin);
        }
        if(j==2)
        {
            printf("Media: %.2f",d3);
            fflush(stdin);
        }
        if(j==3)
        {
            printf("Media: %.2f",d4);
            fflush(stdin);
        }
        printf("\n");
    }

}
