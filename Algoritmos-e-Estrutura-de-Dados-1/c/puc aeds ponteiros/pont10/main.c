#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int n = 30;
    int *p;

    p = (int*)calloc(n,sizeof(int));

    for(int i=0; i<10; i++){
        p[i] = i+1;
    }
    for(int i=20, j = 10; i<30, j>0; i++, j--){
        p[i] = j;
    }

    for(int i=0; i<n; i++){
        if (i%10 == 0){
            printf(" \n");
        }
        printf("%d ", p[i]);
    }

    return 0;
}
