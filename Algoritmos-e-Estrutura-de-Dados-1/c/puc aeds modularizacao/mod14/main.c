#include <stdio.h>
#include <stdlib.h>
int fat(int x){
    if (x == 0){
        return 1;
    } else {
    x = x*fat(x-1);
}
return x;
}

int main()
{
    int num;
    printf("Digite um numero para calcular seu fatorial\n");
    scanf("%d", &num);

    printf("O fatorial deste numero e: %d\n", fat(num));

    return 0;
}
