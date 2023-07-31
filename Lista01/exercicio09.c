#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int velocidade, velocidadeFinal;

    printf("Digite a velocidade: ");
    scanf("%d", &velocidade);

    velocidadeFinal = velocidade + (velocidade * 0.057);

    printf("Velocidade do radar: %d Km/h\n", velocidadeFinal);
    printf("Velocidade real: %d km/h\n", velocidade);

    return 0;
}