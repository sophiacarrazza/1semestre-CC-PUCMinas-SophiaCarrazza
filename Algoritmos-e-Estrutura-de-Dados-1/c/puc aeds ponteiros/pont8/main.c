#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p = (int*)malloc(5*sizeof(int));

    for(int i = 0; i<5; i++) {
       printf("Digite o %do numero\n", i+1);
       scanf("%d", &p[i]);
    }

    printf("Os numeros digitados sao:\n");
     for(int i = 0; i<5; i++) {
       printf("%d ", p[i]);
    }

    free(p);

    return 0;
}
