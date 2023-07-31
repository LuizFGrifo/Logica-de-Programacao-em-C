#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float cat1, cat2, hipo;

    printf("Digite a medida do cateto 1: ");
    scanf("%f", &cat1);

    printf("Digite a medida do cateto 2: ");
    scanf("%f", &cat2);

    hipo = sqrt(pow(cat1, 2) + pow(cat2, 2));

    printf("O valor da hipotenusa é %.1f", hipo);

    return 0;
}