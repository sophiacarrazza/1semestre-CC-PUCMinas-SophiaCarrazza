#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, *px;
    float y, *py;
    char z, *pz;

    px = &x;
    py = &y;
    pz = &z;


    printf("Digite os valores de x, y e z\n");
    scanf("%d %f %c", px, py, pz);

    printf("O endereco de x e: %p e seu valor e: %d\n", px, *px);
    printf("O endereco de y e: %p e seu valor e: %.2f\n", py, *py);
    printf("O endereco de z e: %p e seu valor e: %c\n", pz, *pz);

    return 0;
}
