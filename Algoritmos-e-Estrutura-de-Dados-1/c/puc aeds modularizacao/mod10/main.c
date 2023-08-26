#include <stdio.h>
#include <stdlib.h>

void media(float notas[], int n){
    float somaaprovados = 0;
    int qntaprovados = 0;
    for(int i=0; i<n; i++){
        if(notas[i]>=6){
            somaaprovados += notas[i];
            qntaprovados++;
        }
    }
    float m= somaaprovados/qntaprovados;
    printf("A media dos aprovados e %.2f", m);
}
int main()
{
    int n;

    printf("Digite o numero de alunos\n");
    scanf("%d", &n);

    float notas[n];
    printf("Digite as notas de cada aluno\n");
    for (int i=0; i<n; i++){
        scanf("%f", &notas[i]);
    }
    media(notas, n);

    return 0;
}
