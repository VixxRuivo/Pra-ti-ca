

#include <stdio.h>
#include <stdlib.h>

maind()
{
float saldo;
float credito;
int i;
credito =0;
for(i=0;i<3;i++)
{
printf("\n Informe o Saldo Médio");
scanf("%f",&saldo);

if(saldo > 400)
{
  credito = saldo *0.30;
  }else if (saldo >= 300 && saldo <=400)
  {
  credito = saldo *0.25;
  }else if (saldo >=200 && saldo <=300)
  {
  credito = saldo *0.20;
  }else {
  credito = saldo*0.10;
  }
  printf("\n O Credito a ser concedido ao Cliente será %.2f", credito);
  system("pause");
}
}









