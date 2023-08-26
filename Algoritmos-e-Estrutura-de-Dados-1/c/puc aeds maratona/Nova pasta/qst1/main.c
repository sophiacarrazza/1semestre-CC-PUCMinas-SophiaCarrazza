#include <stdio.h>
#include <stdlib.h>

int main()
{
    int enc, qnt, som=0, tabtot;
    scanf("%d", &enc);

    for (int i=0; i<enc; i++){
        scanf("%d", &qnt);
        if (qnt > 0){
        som += qnt;
    }
    }
        tabtot = som/16 +1;

    printf("%d", tabtot + 1);
    return 0;
}
