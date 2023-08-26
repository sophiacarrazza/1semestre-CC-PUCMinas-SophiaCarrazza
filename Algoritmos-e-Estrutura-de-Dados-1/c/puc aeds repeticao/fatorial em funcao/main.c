#include <stdio.h>
#include <stdlib.h>

int fatorial(int n) {
    int f = 1, i;
    for (i=1; i<=n; i++) {
    f = f * i;
    }
    return f;

}

int main()
{
    int n;

    printf("Insira n\n");
    scanf("%d", &n);

    int f= fatorial(n);


    printf("O fatorial desse numero e: %d\n", f);
    return 0;
}
