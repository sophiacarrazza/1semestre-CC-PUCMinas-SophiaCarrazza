#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){

if (n==1){
    return 0;
} else if (n==2){
    return 1;
} else {
    return fibonacci(n-1)+fibonacci(n-2);
}
}
int main()
{
    int n;
    printf("Digite o Nesimo valor da sequencia de fibonacci desejada, que seja maior que zero\n");
    scanf("%d", &n);


    printf("O termo %d da sequencia de fibonacci e: %d ", n, fibonacci(n));

    return 0;
}
