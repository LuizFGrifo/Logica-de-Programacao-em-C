#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vet[8], cont = 0, loc, x;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite o número na posiçaõ %d: ", i);
        scanf("%d", &vet[i]);
    }

    printf("Digite o valor que você deseja do vetor: ");
    scanf("%d", &x);

    for (int i = 0; i < 8; i++)
    {
        if (vet[i] == x)
        {
            cont = 1;
            loc = i;
        }
    }

    if (cont == 1)
        printf("Número na posição %d\n", loc);
    else
        printf("Número não encontrado !!!\n");

    return 0;
}