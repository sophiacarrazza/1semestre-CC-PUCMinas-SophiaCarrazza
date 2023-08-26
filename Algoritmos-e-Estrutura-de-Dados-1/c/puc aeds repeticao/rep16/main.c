#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, s = 1, i;

    printf("Insira n\n");
    scanf("%f", &n);

    for (i=1; i<=n; i++) {
        s = s + (1/i);
    }

    printf("A soma dessa sequencia e: %.2f\n", s);
    return 0;
}
