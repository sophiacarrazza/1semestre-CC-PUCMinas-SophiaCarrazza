#include <stdio.h>
#include <stdlib.h>

void conceito (int m) {
    if (m <= 39) {
        printf("Conceito: F\n");
    } else if (m >= 40 && m <= 59) {
        printf("Conceito: E\n");
    }else if (m >= 60 && m <= 69) {
        printf("Conceito: D\n");
    }else if (m >=70 && m <= 79) {
        printf("Conceito: C\n");
    }else if (m >= 80 && m <= 89) {
        printf("Conceito: B\n");
    }else if (m >= 90) {
        printf("Conceito: A\n");
    }

}

int main()
{
    int n, m;

    printf("Digite a quantidade de alunos a calcular a media\n");
    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        printf("Digite a media do aluno %d\n", i+1);
        scanf("%d",&m);

        conceito(m);
    }
    return 0;
}
