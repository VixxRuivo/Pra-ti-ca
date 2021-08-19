#include <stdio.h>
#include <stdlib.h>

main(){

    int i, n;
    float preco, valor_transp, imposto, seguro, total;
    char origem, transp, carga_perigosa;
    imposto = 0;
    seguro = 0;
    total = 0;

    printf("\n Informe a quantidade de produtos a ser processada: ");
    scanf("%d",&n);
    fflush(stdin);

    for(i=0; i<n; i++) {

        printf("\n Informe o preco unitario: ");
        scanf("%f", &preco);
        fflush(stdin);

        printf("\n Informe o pais de origem (1- EUA, 2- Mexico e 3- Outros): ");
        scanf("%d", &origem);
        fflush(stdin);
        while(origem >= 4){
            printf("\n Codigo invalido, informe o pais de origem (1- EUA, 2- Mexico e 3- Outros): ");
            scanf("%d", &origem);
            fflush(stdin);
        }

        printf("\n Informe o meio de transporte (T- Terrestre, F- Fluvial e A- Aereo): ");
        scanf("%c", &transp);
        transp=toupper(transp);
        fflush(stdin);
        while(transp !='T' && transp !='F' && transp !='A'){
            printf("\n Codigo invalido, informe o meio de transporte (T- Terrestre, F- Fluvial e A- Aereo): ");
            scanf("%c", &transp);
            transp=toupper(transp);
            fflush(stdin);
        }

        printf("\n Informe se a carga e perigosa [S]im  ou [N]ao: ");
        scanf("%c",&carga_perigosa);
        fflush(stdin);
        carga_perigosa=toupper(carga_perigosa);
        while(carga_perigosa !='S' && carga_perigosa !='N'){
            printf("\n Codigo invalido, informe se a carga e perigosa [S]im  ou [N]ao: ");
            scanf("%c", &carga_perigosa);
            carga_perigosa=toupper(carga_perigosa);
            fflush(stdin);
        }
        // calculando valor imposto
        if(preco <= 100){
            imposto = (preco * 0.05);
        } else {
            imposto = (preco * 0.1);
        }

        // calculando tabela transporte
        if(carga_perigosa == 'S' && origem == 1){
            valor_transp = 50;
        } else if(carga_perigosa == 'S' && origem == 2){
            valor_transp = 35;
        } else if(carga_perigosa == 'S' && origem == 3){
            valor_transp = 24;
        }
        if(carga_perigosa == 'N' && origem == 1){
            valor_transp = 12;
        } else if(carga_perigosa == 'N' && origem == 2){
            valor_transp = 34.5;
        } else if(carga_perigosa == 'N' && origem == 3){
            valor_transp = 60;
        }

        // valor seguro
        if(origem == 2 || transp == 'A'){
            seguro = (preco / 2);
        }

        // valor total
        total = (preco + imposto + valor_transp + seguro);

        printf("\n Valor final do produto: %.2f", total);
        printf("\n Total dos impostos: %.2f", imposto);
        printf("\n Custo de transporte: %.2f", valor_transp);

        printf("\n\n");
        system("pause");
    }
}
