#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat [4] [2];

    for (int i=0; i<4; i++) {
        for(int j=0; j<2; j++){
            printf("Digite o valor da linha %d e da coluna %d:\n", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

      for (int i=0; i<4; i++) {
        for(int j=0; j<2; j++){
            printf("%d ", mat[i][j]);
        }
    printf("\n");
    }

    return 0;
}
