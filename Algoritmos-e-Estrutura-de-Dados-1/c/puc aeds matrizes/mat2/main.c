#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat [4] [4];
    int m = 0;

    for (int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("Digite o valor da linha %d e da coluna %d:\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if (mat[i][j]>15 && mat[i][j]<25)
            {
                m++;
            }
        }
    }
    printf("A quantidade de numeros maiores que 15 e menores que 25 e:\n");
    printf("%d", m);
    return 0;
}
