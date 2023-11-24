#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char alunos[5][200];
    int idade [5];
    float notas[5][3];
    int i, j;
    float media[5];
    int somaNota = 0;
    char resultado[500];



    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o nome do aluno: ");
        gets(alunos[i]);

        printf("Digite a idade: ");
        scanf("%d", &idade[i]);

        for (j = 0; j < 3; j++)
        {
            printf("Digite as notas: ");
            scanf("%f", &notas[i][j]);
            somaNota+= notas[i][j];    
        }

        media[i] = somaNota / j;

        somaNota = 0;
        fflush(stdin);
    }



printf("Exibindo dados\n");

    printf("\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nAlunos %s \n", alunos[i]);
        printf("Idade %d \n", idade[i]);
    
        for (j = 0; j < 3; j++){
            printf("nota %.1f \n", notas[i][j]);
        }


          printf("Media %.0f\n", media[i]);
          
            if (media[i] >= 7)
            {
                printf("APROVADO\n");
            }   
            else if (media[i] >= 5 && media[i] < 7)
            {
                printf("RECU\n");
            }
            else if (media[i] < 5)

            {
                printf("RECUPERAÇAO\n");
            }



    }

























return 0;
}