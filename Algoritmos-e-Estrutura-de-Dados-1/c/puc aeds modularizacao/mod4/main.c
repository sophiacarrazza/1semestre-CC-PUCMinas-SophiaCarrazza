#include <stdio.h>
#include <stdlib.h>
int triangulo(int x, int y, int z) {

if (x == y && x == z && y == z) {
    return(1);
} else if (x == z || z == y || x == y){
    return(2);
} else{
    return(3);
}

}

int main()
{
    int x, y, z, t;

    printf("Digite os valores X, Y e X dos lados do triangulo:\n");
    scanf("%d %d %d", &x, &y, &z);
    t = triangulo (x, y, z);
    if (t == 1) {
        printf("Triangulo Equilatero\n");
    } else if (t == 2) {
        printf("Triangulo Isosceles\n");
    } else if (t == 3) {
        printf("Triangulo Escaleno\n");
    }

    return 0;
}
