#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vet[6], x, y, soma;

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o vetor %d: ", i);
        scanf("%d", &vet[i]);
    }

    printf("Qual o primeiro indice do vetor você deseja ? ");
    scanf("%d", &x);
    printf("Qual o segundo indice do vetor você deseja ? ");
    scanf("%d", &y);

    soma = vet[x] + vet[y];

    printf("A soma é %d\n", soma);

    return 0;
}