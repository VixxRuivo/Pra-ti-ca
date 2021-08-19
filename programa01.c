#include <stdio.h>
#include <stdlib.h>

main()

{
    int matriz[2][4];
    int i,j, cont;
    int maior1, menor1;
    float mediapar1, somapar1;

    mediapar1=0;
    cont=0;
    maior1=0;
    menor1=999999;
    somapar1=0;

    for (i=0; i<2; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("Entre com o valor: ");
            scanf("%d",&matriz[i][j]);

            if (matriz[i][j] % 2 == 0)
            {
                cont= cont+1;
                somapar1+= matriz[i][j];
            }if (matriz[i][j] < menor1)
            {
                menor1 = matriz[i][j];
            }if (matriz[i][j] > maior1)
            {
                maior1 = matriz[i][j];
            }


        }
    }
    mediapar1 = (somapar1/cont);
    printf("\n\n");
    printf("Maior Elemento da Matriz :%d",maior1);
    printf("\nMenor Elemento da Matriz :%d",menor1);
    printf("\nMedia de Numeros pares :%.2f",mediapar1);

}
