#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int distancia, tlitros, media;

    printf("Digite a distância percorrida: ");
    scanf("%d", &distancia);

    printf("Digite o total de litros de conbustível gasto: ");
    scanf("%d", &tlitros);

    media = distancia / tlitros;

    printf("Seu veiculo consome 1 litro a cada %d quilômetros\n", media);

    return 0;
}