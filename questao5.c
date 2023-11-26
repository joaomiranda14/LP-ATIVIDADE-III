
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL, "portuguese");

    int quantidade[20];
    int codigo;
    float vendastotal = 0;
    char nome[20][200];
    int j, i = 0;
    float preco[20];
    

    printf("===============MENU===============\n");
    printf("1. ADICIONAR UM PRODUTO\n");
    printf("2. SAIR DO MENU\n\n");
    printf("escolha uma opção: ");
    scanf("%d", &codigo);

    system("cls || clear");


    do { 

        fflush(stdin);
        printf("Qual o produto?: ");
        gets(nome[i]);

        printf("Digite a quantidade: ");
        scanf("%d", &quantidade[i]);

        printf("Digite o preço: ");
        scanf("%f", &preco[i]);


        printf("Digite 1 para adicionar um novo produto:\n");
        printf("Digite 2 para exibir total de vendas ");
        scanf("%d", &codigo);

        system("CLS || clear");
        i++;

    
    }

    while (codigo != 2);

    for (j = 0; j < i; j++){
        vendastotal = vendastotal + preco[j] * quantidade[j];
    }

    printf("TOTAL DE VENDAS: R$%.1f", vendastotal);
    

    

    return 0;
}