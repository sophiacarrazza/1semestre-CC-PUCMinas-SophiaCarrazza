#include <stdio.h>
#include <stdlib.h>

int main() {

int n, n5, qn;
qn= 0;
n5= 0;

do {
    scanf("%d", &n);
    qn++;

    if (n==5) {
    n5++;
    }

} while (n != -1);

printf("quantidade de numeros digitados: %d\n", qn-1);
printf("quantidade de numeros 5 digitados: %d", n5);

}
