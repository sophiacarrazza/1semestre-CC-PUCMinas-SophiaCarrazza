#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int col = 3;
    const int lin = 3;
    int mat [lin] [col];


    for (int i=0; i<lin; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("Digite o valor da linha %d e da coluna %d:\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    int maior = mat[0] [0];
    for (int i=0; i<lin; i++)
    {
        for(int j=0; j<col; j++)
        {

            if (mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
    }

    for (int i=0; i<lin; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d ", (mat[i][j])*maior);

        }
        printf("\n");
    }

}
