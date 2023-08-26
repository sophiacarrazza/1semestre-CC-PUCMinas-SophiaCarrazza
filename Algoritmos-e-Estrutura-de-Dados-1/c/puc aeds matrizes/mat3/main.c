#include <stdio.h>
#include <stdlib.h>

int main()
{

    int mat [3] [3];


    for (int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Digite o valor da linha %d e da coluna %d:\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    int maior = mat[0] [0];
    int menor = mat[0] [0];

    for (int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if (mat[i][j] < menor){
                menor = mat[i][j];
            }
            if (mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
    }

printf("o menor numero dessa matriz e: %d\n", menor);
printf("o maior numero dessa matriz e: %d\n", maior);
}
