#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    if (n1> n2) {
        n1 -= 10;
        n2 = n1 +10;
        printf("%d %d", n1, n2);
    }
    else {
     printf("n1 e menor que n2");
    }
}
