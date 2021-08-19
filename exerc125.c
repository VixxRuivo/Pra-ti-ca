#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <conio.h>


int main()
{

int numpessoas, idade, i, k, l, r;
float altura, peso, soma, media, porc,p;
char corolhos, corcabelos;
soma=0;
i=0;
k=0;
l=0;
p=0;
r=0;
porc=0;
    printf("Informe a quantidade de pessoas:\n ");
    scanf("%d",&numpessoas);

    for(i=0;i<numpessoas;i++)

    {
        printf("Informe a Altura:\n");
        scanf("%f",&altura);
        fflush(stdin);

        printf("Informe a idade:\n");
        scanf("%d",&idade);
        fflush(stdin);

        printf("Informe o peso:\n");
        scanf("%f",&peso);
        fflush(stdin);

        printf("\n Informe a cor dos olhos (A-Azul, P-Preto, V-Verde e C- Castanhos)\n");
        scanf("%c",&corolhos);
        fflush(stdin);
        corolhos = toupper(corolhos);

        printf("\n Informe a cor dos cabelos ( P-Preto, C- Castanhos, L-Louro e R-Ruivo)\n");
        scanf("%c",&corcabelos);
        fflush(stdin);
        corcabelos = toupper(corcabelos);

        if(idade>50 && peso<60)
        {
            k++;
        }
        if(altura<1.50)
        {
            soma=soma+idade;
            l++;
        }
        if(corolhos == 'A')
        {
            p++;
        }
        if(corcabelos == 'R' && corolhos != 'A')
        {
            r++;
        }
    }

media = (soma/l);
porc = (p/numpessoas)*100;

    printf("\n A quantidade de pessoas com idade  superior a 50 anos e peso inferior a 60 Kilos %d",k);
    printf("\n A média  das idades das pessoas  com altura inferior a 1,50 %.2f",media);
    printf("\n A porcentagem de pessoas  com olhos azuis entre todas as pessoas analisadas é %.2f", porc);
    printf("\n A quantidade de pessoas  ruivas e que não possuem olhos azuis é %d",r);

    return 0;
}
