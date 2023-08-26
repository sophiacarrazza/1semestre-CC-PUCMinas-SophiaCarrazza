#include <stdio.h>
#include <stdlib.h>

int main()
{
         float nht, vsm, nhet,sb, he, sf;
         printf("digite o numero de horas trabalhadas, o valor do salario minimo e o numero de horas extras trabalhadas:\n");
         scanf("%f %f %f", &nht, &vsm, &nhet);

         sb = ((nht) * ((0.125)*(vsm)));

         he = ((nhet) * ((0.25)*(vsm)));

         sf = (sb + he);

         printf("seu salario final e: %.2f\n", sf);

        return 0;
}
