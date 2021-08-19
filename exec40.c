#include <stdio.h>
#include <stdlib.h>


main()
{
    int i,n,pais;
    float valor,vt,imposto,seguro,vf;
    char transp,cp;


    printf("\n Informe a quantidade de produtos a ser processado");
    scanf("%d",&n);
    fflush(stdin);

    for(i=0; i<n; i++)
    {
        seguro =0;
        printf("\n Informe o valor unitário");
        scanf("%f",&valor);
        fflush(stdin);


        printf("\n Informe o Pais de Origem..");
        scanf("%d",&pais);
        fflush(stdin);
// validação do campo pais
        while(pais !=1 && pais !=2 && pais !=3 )
        {

            printf("\n Codigo Invalido.. tente novamente");
            scanf("%d",&pais);
            fflush(stdin);

        }

        printf("\n Informe o Meio de Transporte");
        scanf("%c",&transp);
        transp=toupper(transp);
        fflush(stdin);

        while(transp != 'T' && transp != 'F' && transp != 'A')
        {
            printf("\n Codido Invalido... Tente novamente");
            scanf("%c", &transp);
            transp = toupper(transp);
            fflush(stdin);
        }

        printf("\n Informe se a Carga é Perigosa");
        scanf("%c", &cp);
        cp=toupper(cp);
        fflush(stdin);

        while(cp != 'S' && cp != 'N')
        {
            printf("\n Carga Invalida... tente novamente..");
            scanf("%c",&cp);
            cp=toupper(cp);
            fflush(stdin);
        }

// Calculando o Imposto

        if(valor <=100)
        {
            imposto = valor *0.05;
        }
        else
        {

            imposto = valor *0.10;
        }
        // Valor do Transporte

        if(cp == 'S' && pais == 1)
        {
            printf("\n passei por aquiiii");
            vt = 50;
        }
        else if( cp == 'S' && pais == 2)
        {
            vt = 35;
        }
        else if(cp == 'S'&& pais ==3)
        {
            vt=24;
        }

        if (cp == 'N')
        {
            if(pais == 1)
            {
                vt = 12;
            }
            else if(pais == 2)
            {
                vt = 34;
            }
            else
            {
                vt = 60;
            }
        }
        // calculando o Seguro

        if(pais == 2 && transp == 'A')
        {
            seguro = (valor/2);
        }

        vf= (valor+imposto+transp);
        printf("\n O valor do seguro %.2f",seguro);
        printf("\n Valor Transporte..%.2f",vt);
        printf("\n Valor do imposto..%.2f",imposto);
        printf("\n valor Final do Produto...%.2f",vf);
        printf("\n\n");
        system("pause");



    }





}
