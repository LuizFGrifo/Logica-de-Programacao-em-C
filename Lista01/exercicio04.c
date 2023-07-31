#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double c, f;

    printf("Digite a temperatura em graus Fahrenheit, para transformar em  graus Celsius: ");
    scanf("%lf", &f);

    c = (f - 32) * 5 / 9;

    printf("A temperatura em Celsius é: %.1lf°C", c);

    return 0;
}