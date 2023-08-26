#include <stdio.h>
#include <stdlib.h>

int main()
{

 int i;
 float a;
 printf("Digite sua idade e sua altura abaixo\n");
 scanf("%d %f", &i, &a);


  if (i >=6 && i<=10 && a>= 1.00) {

    printf("Infantil\n");

 }
  else if (i >=11 && i<=17 && a >= 1.40) {

    printf("Junior\n");

 }
 else if (i >=18 && i<=35 && a >= 1.70) {

    printf("Profissional\n");

 }
  else if (i >35 && a >= 1.60) {

    printf("Senior\n");
 }
 else {

    printf("Nao apto\n");

 }
 return 0;
}
