#include <stdio.h>
#include <locale.h>

float converterTemperatura(float f, float c)
{
    c = (f - 32) * 5 / 9;

    return c;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float Fahrenheit, Celsius;

    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &Fahrenheit);

    printf("A temperatura em Fahrenheit para Celsius é: %.1f", converterTemperatura(Fahrenheit, Celsius));

    return 0;
}