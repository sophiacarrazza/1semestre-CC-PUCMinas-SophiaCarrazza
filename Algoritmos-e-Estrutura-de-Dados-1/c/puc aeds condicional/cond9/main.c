#include <stdio.h>
#include <stdlib.h>

int main()
{

 int i;
 printf("Digite sua idade abaixo\n");
 scanf("%d", &i);

 if (i < 5) {

    printf("Idade invalida\n");

 }
  else if (i >=5 && i<=8) {

    printf("Infantil\n");

 }
  else if (i >=8 && i<=10) {

    printf("Juvenil\n");

 }
 else if (i >=11 && i<=15) {

    printf("Adolescente\n");

 }
 else if (i >=16 && i<=30) {

    printf("Adulto\n");

 }
  else if (i >30) {

    printf("Senior\n");
 }
 return 0;
}
