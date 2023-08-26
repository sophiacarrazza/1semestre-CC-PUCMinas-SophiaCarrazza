#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, s = 1, i, num = 1, den = 1;

    printf("Insira n\n");
    scanf("%f", &n);

    for (i=1; i<=n; i++) {
        num = num + 2;
        den = den + 1;
        s = s + (num/den);
    }

    printf("A soma dessa sequencia e: %.2f\n", s);
    return 0;
}
