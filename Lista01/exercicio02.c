#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float m, h;

    printf("Digite os minutos para converter em horas: ");
    scanf("%f", &m);

    h = m / 60;

    printf("Os %.0f minutos convertido em horas equivalem á %.1fh\n", m, h);

    return 0;
}