#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int distancia, tlitros, media;

    printf("Digite a dist�ncia percorrida: ");
    scanf("%d", &distancia);

    printf("Digite o total de litros de conbust�vel gasto: ");
    scanf("%d", &tlitros);

    media = distancia / tlitros;

    printf("Seu veiculo consome 1 litro a cada %d quil�metros\n", media);

    return 0;
}