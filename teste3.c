

#include <stdio.h>
#include <stdlib.h>

main()
{
char sexo;
int n;
int i;

printf("\n Informe a quantidade de pessoas a serem processadas");
scanf("%d",&n);
fflush(stdin);
for(i=0;i<n;i++)
{

printf("\n Informe o sexo");
scanf("%c",&sexo);
fflush(stdin);
sexo = toupper(sexo);

if (sexo == 'F')
{
    printf("\n O sexo é Feminino");
}else
    printf("\n O sexo é Masculino");
}
}




