#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int flag = 1, cont = 0;
    float peso, soma = 0, media = 0;

    while (flag != 0)
    {
        printf("Digite o peso do caminhão: ");
        scanf("%f", &peso);
        cont++;

        printf("Deseja inserir outro peso ? [0] para não | [1] para sim: ");
        scanf("%d", &flag);

        soma += peso;
        media = soma / cont;
    }

    printf("A média do peso dos caminhões é: %.3f\n", media);
    printf("Número de caminhões que passou: %d\n", cont);

    return 0;
}