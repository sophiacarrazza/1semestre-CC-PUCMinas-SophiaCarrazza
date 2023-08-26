#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, dif;
    scanf("%d", &n);
    int inteiros[n];
    for(int i=0; i<n-1; i++){
        scanf("%d", &inteiros[i]);
    }
    if (n >= 2 && n <= 1000){
    for(int i=0; i<n; i++){
             if (inteiros[n-1] == n){
                dif = n;
            } else if(inteiros[i] != i+1){
           dif = i;
           }
    }
    }
    printf("%d", dif);
    return 0;
}
