#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qntd;
    float *notas, m, s = 0;
    printf("Digite a quantidade de alunos da turma:\n");
    scanf("%d", &qntd);

    notas =(float*)malloc(qntd*sizeof(float));

    for (int i=0; i<qntd; i++) {
        printf("Digite a nota do %do aluno:\n", i+1);
        scanf("%f", &notas[i]);
        s += notas[i];
    }

    m = s / qntd;

    printf("As notas dos alunos sao:\n");
    for (int i=0; i<qntd; i++) {
        printf("%.2f ", notas[i]);
    }

    printf("\nA media das notas dos alunos e:\n %.2f:\n", m);

    return 0;
}
