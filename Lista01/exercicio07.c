#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int base, altura, area;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite a altura: ");
    scanf("%d", &altura);

    area = base * altura;

    printf("A �rea do retangulo � %d cm2\n", area);

    return 0;
}