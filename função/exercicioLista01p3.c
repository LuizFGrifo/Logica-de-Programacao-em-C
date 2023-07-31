#include <stdio.h>
#include <locale.h>

double mediaConsumo(double com, double dis, double res)
{
    res = dis / com;

    return res;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double combustivel, distancia, total;

    printf("Digite a distancia percorrida em Km/h: ");
    scanf("%lf", &distancia);

    printf("Digite a quantidade de combustível gasto: ");
    scanf("%lf", &combustivel);

    printf("A média é %.1f Km/l", mediaConsumo(combustivel, distancia, total));

    return 0;
}