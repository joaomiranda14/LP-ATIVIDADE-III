 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int quantidade;
float vendas;
int codigo;
char produto[20] ;
float valor[20];
int cont=0;
int j;

printf("================== MENU DA LOJA ==================");

printf("\n1 - ADICIONAR NOVA COMPRA\n ");
printf("2 - SAIR DO MENU ");




    
    do
    {
 
    printf("\n\nInsira o codigo da opçao desejada: ");
    scanf("%d", &codigo);
    fflush(stdin);

    switch (codigo)
    {
        case 1:
    cont++;


    printf("\nQual produto vc deseja comprar?: ");
    scanf("%s", &produto);

    fflush(stdin);

    printf("\nQual a quanitade?: ");
    scanf("%d", &quantidade);


    fflush(stdin);

    printf("Qual o valor do produto?:R$ ");
    scanf("%f", &valor);

    fflush(stdin);   
    break;


    }
  
    
    } while ( codigo != 2 );

for (j = 0; j < cont; j++){
        vendas = (float) vendas + valor[j] * quantidade[j];
    }

    printf("TOTAL DE VENDAS: R$%.2f", vendas);
    

    





getchar ();
return 0;

}
