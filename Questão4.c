


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int numeros[5];
    int somaNumeros;
    int contNumeros;
    int contPar = 0;
    int contImpar = 0;
    int par;
    int somaPar = 0;
    int somaImpar = 0;
    int impar = 0;
    int contPositivo = 0;
    int contNegativo = 0;
    int maior = 0;
    int menor = 9999;
    float mediaPares = 0;
    float media = 0;
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("Digite o valor\n" );
        scanf("%d", &numeros[i]);

    printf("\n");

        somaNumeros += numeros[i];

        if (numeros[i] % 2 == 0)
        {
            somaPar += numeros[i];
            contPar++;
        }
        else
        {
            somaImpar += numeros[i];
            contImpar++;
        }
            
         
         
          if (numeros[i] > 0)
          {
            contPositivo++;
         }
         else 
        {
            contNegativo++;
        }
         
        maior = numeros [i] > maior ? numeros[i] : maior;
        menor = numeros [i] < menor ? numeros[i] : menor;


    }



    

    mediaPares = (float) somaPar/ contPar;
    media = somaNumeros / i;

    printf("Quantidade de pares: %d\n", contPar);
    printf("Quantide impares %d\n", contImpar);
    
    printf("\n");
    
    printf("Media par: %.1f\n", mediaPares);
    printf("Media total: %0f\n", media);

    printf("\n");
    
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    printf("\n");

    printf ("Quantidade de numeros negativos: %d\n", contNegativo);
    printf ("Quantidade de numeros positivos: %d\n", contPositivo);

    printf("\n");




    return 0;
}



















