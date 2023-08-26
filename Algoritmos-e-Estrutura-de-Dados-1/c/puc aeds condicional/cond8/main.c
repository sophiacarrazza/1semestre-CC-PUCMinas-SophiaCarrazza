#include <stdio.h>
#include <stdlib.h>

int main()
{
 int c;
 float sa, sn, va;

 printf("Digite o codigo de seu cargo e seu salario atual\n");
 scanf("%d %f", &c, &sa);

 if (c == 1) {
    va = (sa * 0.5);
    sn = (sa * 1.5);
    printf("Em seu cargo de Escrituario, o valor do seu aumento e: %.2f e seu novo salario e: %.2f\n", va, sn);
 } else if (c == 2) {
    va = (sa * 0.35);
    sn = (sa * 1.35);
    printf("Em seu cargo de Secretario, o valor do seu aumento e: %.2f e seu novo salario e: %.2f\n", va, sn);
 } else if (c == 3) {
    va = (sa * 0.2);
    sn = (sa * 1.2);
    printf("Em seu cargo de Caixa, o valor do seu aumento e: %.2f e seu novo salario e: %.2f\n", va, sn);
 } else if (c == 3) {
    va = (sa * 0.1);
    sn = (sa * 1.1);
    printf("Em seu cargo de Gerente, o valor do seu aumento e: %.2f e seu novo salario e: %.2f\n", va, sn);
 } else if (c == 4) {
    printf("Em seu cargo de Diretor, seu salario nao sofreu mudancas\n");
 } else {
    printf("Codigo invalido!\n");
 }


}
