#include <stdio.h>
#include <stdlib.h>



int main()
{
    const int lin = 4;
    const int col = 4;

    int v [lin] [col];

    for(int i=0; i<lin; i++)
    {
    printf("Digite os elementos da linha %d:\n", i);

        for(int j=0; j<col; j++)
        {
            scanf("%d", &v[i][j]);
        }
    }

    printf("Os elementos na diagonal principal ou abaixo dela sao:\n");
    for(int i=0; i<lin; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(i==j || i>j)
            {
                printf("%d ", v[i][j]);
            }
        }
        printf(" \n");
    }


    return 0;
}
