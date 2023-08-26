#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, p, pm, pn, total = 0;
    scanf("%d %d", &m, &n);
    int  pecas[m][n];
    for (int i=0; i<m; i++){
        for(int j=0; j<n; j++){

            scanf("%d", &pecas[i][j]);
        }
        printf(" \n");
    }
    scanf("%d", &p);
    for (int i=0; i<p; i++){
        scanf("%d %d", &pm, &pn);
        if (pecas[pm-1][pn-1] > 0){
            pecas[pm-1][pn-1] -= 1;
            total += 1;
        }
    }

    printf("\n%d", total);
    return 0;
}
