#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    char numeros[50][100];
    int codigo;
    int i;
    int contador= 0;
    char nomes[50][200];

    printf("Menu");
    printf("\n\n1 -Cadastrar novo contato na lista telefonica \n");
    printf("2 - Mostrar os números cadastrados: ");
    scanf("%d", &codigo);
    system("cls || clear");

    do
    {

        fflush(stdin);

        printf("Nome: ");
        gets(nomes[contador]);

        printf("Número: ");
        gets(numeros[contador]);
  
  
    printf("\n\n1 -Cadastrar novo contato na lista telefonica \n");
    printf("2 - Mostrar os números cadastrados: ");

    printf("\nDigite a opção desejada: ");
     scanf("%d", &codigo);
        
        system("cls || clear");
        contador++;

    } while (codigo != 2);

    printf("NÚMEROS CADASTRADOS:\n\n");
    for     (i = 0; i < contador; i++)
    {
        printf("Nome: %s\n", nomes[i]);
        printf("Número: %s\n\n", numeros[i]);
    }

    return 0;
}
