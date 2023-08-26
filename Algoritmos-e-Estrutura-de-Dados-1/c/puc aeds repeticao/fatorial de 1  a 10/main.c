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
    int f1= fatorial(1);
    int f2= fatorial(2);
    int f3= fatorial(3);
    int f4= fatorial(4);
    int f5= fatorial(5);
    int f6= fatorial(6);
    int f7= fatorial(7);
    int f8= fatorial(8);
    int f9= fatorial(9);
    int f10= fatorial(10);


    printf(" %d\n", f1);
    printf(" %d\n", f2);
    printf(" %d\n", f3);
    printf(" %d\n", f4);
    printf(" %d\n", f5);
    printf(" %d\n", f6);
    printf(" %d\n", f7);
    printf(" %d\n", f8);
    printf(" %d\n", f9);
    printf(" %d\n", f10);


    return 0;
}
