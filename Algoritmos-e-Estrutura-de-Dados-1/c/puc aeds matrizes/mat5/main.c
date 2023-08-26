#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int col = 4;
    const int lin = 3;
    int mat [lin] [col], soma;

    soma = 0;
    for (int i=0; i<lin; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("Digite o valor da linha %d e da coluna %d:\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i=0; i<lin; i++)
    {
        for(int j=0; j<col; j++)
        {
            soma += mat[i][j];
        }
        printf("A soma dos elementos da linha %d e:\n", i+1);
        printf("%d\n", soma);
        soma =0;
    }
}
