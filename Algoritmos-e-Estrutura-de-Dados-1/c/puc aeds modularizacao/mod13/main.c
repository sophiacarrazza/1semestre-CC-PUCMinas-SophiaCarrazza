#include <stdio.h>
#include <stdlib.h>

int multiplicacao(int x, int n){
    int r;
    if (x>0){
        x--;
        r = n;
    } else if(x<0){
        x++;
        r = -n;
    }

    if(x==0){
        return r;
    } else {
        return r + multiplicacao(x, n);
    }
}
int main()
{
    int x, n;
    printf("Digite o valor de x:\n");
    scanf("%d", &x);
    printf("Digite o valor de n:\n");
    scanf("%d", &n);

    int res = multiplicacao(x, n);
    printf("O resultado e: %d\n", res);
    return 0;
}
