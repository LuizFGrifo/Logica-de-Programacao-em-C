#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int flag = 1, cont = 0;
    float peso, soma = 0, media = 0;

    while (flag != 0)
    {
        printf("Digite o peso do caminh�o: ");
        scanf("%f", &peso);
        cont++;

        printf("Deseja inserir outro peso ? [0] para n�o | [1] para sim: ");
        scanf("%d", &flag);

        soma += peso;
        media = soma / cont;
    }

    printf("A m�dia do peso dos caminh�es �: %.3f\n", media);
    printf("N�mero de caminh�es que passou: %d\n", cont);

    return 0;
}