#include <stdio.h>
#include <stdlib.h>

int troca(int *p, int v[], int posinicial, int posfinal) {
    int aux;
    if (posinicial >= posfinal){

    } else {
        aux = v[posinicial];
        v[posinicial] = v[posfinal];
        v[posfinal] = aux;
    troca(p, v, posinicial+1, posfinal-1);
    }
    *p = *v;
    return *p;
}

//int inversor(int v[], int n, int nf, int i) {
//    int i = -1;
//    nf = n;
//   if (n == 0 && i == nf){
//        return
//    } else {
//        v[i+1] = v[n-1];
//    }
//    return v;
//}

int main()
{
    int n;

    printf("Insira o tamanho de um arranjo de inteiros\n");
    scanf("%d", &n);

    int v[n];
    int *p = v;

    printf("Digite os inteiros deste arranjo\n");
    for(int i=0; i<n; i++){
        scanf(" %d", &v[i]);
    }
    printf("O arranjo digitado e:\n");
   for(int i=0; i<n; i++){
        printf("%d ", p[i]);
   }

    int posinicial = 0;
    troca(p, v, posinicial, n-1);

    printf("\nO arranjo invertido e:\n");
   for(int i=0; i<n; i++){
        printf("%d ", p[i]);
   }

    return 0;
}
