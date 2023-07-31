#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vet[5], x, y, soma;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d número: ", i);
        scanf("%d", &vet[i]);
    }

    /*
        for (int i = 0; i < 5; i++)
        {
            printf("Os números digitados é %d\n", vet[i]);
        }
    */
    printf("Digite a primeira posição para somar: ");
    scanf("%d", &x);

    printf("Digite a segunda posição para somar: ");
    scanf("%d", &y);

    soma = vet[x] + vet[y];

    printf("A soma é %d\n", soma);

    return 0;
}