#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vet[5], x, y, soma;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d n�mero: ", i);
        scanf("%d", &vet[i]);
    }

    /*
        for (int i = 0; i < 5; i++)
        {
            printf("Os n�meros digitados � %d\n", vet[i]);
        }
    */
    printf("Digite a primeira posi��o para somar: ");
    scanf("%d", &x);

    printf("Digite a segunda posi��o para somar: ");
    scanf("%d", &y);

    soma = vet[x] + vet[y];

    printf("A soma � %d\n", soma);

    return 0;
}