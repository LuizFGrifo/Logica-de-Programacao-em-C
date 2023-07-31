#include <stdio.h>

float coversorMin(float m, float h)
{
    h = m / 60;

    return h;
}

int main()
{

    float min, hor;

    printf("Digite o valor em minutos para converter em horas: ");
    scanf("%f", &min);

    printf("Os minutos equivalem a %.1f horas", coversorMin(min, hor));
    return 0;
}