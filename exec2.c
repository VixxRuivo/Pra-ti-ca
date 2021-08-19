#include <stdio.h>
#include <stdlib.h>

main()
{
int n,i;

char sexo, op;

int idade;
int menor, masc,fem,k,v,soma;
float media, porc,p;

menor=100;
masc=0;
soma=0;
fem =0;
k=0;
v=0;
p=0;
printf("\n Informe o numero de Candidatos..\n");
scanf("%d",&n);
fflush(stdin);

for(i=0;i<n;i++)
{

printf("\n Informe o sexo da Pessoa");
scanf("%c",&sexo);
sexo = toupper(sexo);
fflush(stdin);

printf("\n Informe a idade da Pessoa");
scanf("%d",&idade);
fflush(stdin);

printf("\n Informe a Experiência [Sim]- S ou [N] - N");
scanf ("%c", &op);
op= toupper(op);
fflush(stdin);

if(sexo == 'M')
{
    masc++;
}else{

    fem++;
}

if (sexo == 'M' && op == 'S')
{
    soma=soma+idade;
    k++;
}

if (sexo == 'M' && idade > 45)
{
    p++;
}

if(sexo == 'F' && idade < 35)
{
    v++;
}

if (sexo == 'F' && op == 'S')
{
    if (idade < menor)
    {
        menor=idade;
    }
}
}
media = (soma/k);
porc =  (p/n)*100;
printf("\n O numero de homens encontrado no grupo %d",masc);
printf("\n O numero de mulheres encontrado no grupo %d",fem);
printf("\n A idade media dos HOmens com experiênacia %.2f", media);
printf("\n Porcentagem dos homens  com mais de 45 anos %.2f",porc);
printf("\n O numero de mulheres inferior a 35 anos %d",v);
printf("\n A menor idade entre as mulheres com experiência %d",menor);



}
