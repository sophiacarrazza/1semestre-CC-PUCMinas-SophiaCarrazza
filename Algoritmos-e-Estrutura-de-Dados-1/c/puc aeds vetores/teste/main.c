#include <stdio.h>
#include <stdlib.h>

int main()
{

  printf("Digite uma string\n");
  char frase[10];
  gets( frase);
  printf("%s", frase);

  char str[20];
  printf("\nDigite uma outra string\n");
  scanf("%[ ^\n]", str);
  printf(" %s", str);


  return 0;
}
