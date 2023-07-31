#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float vet[4], soma = 0, media = 0;
    int cont = 0;

    for (int i = 0; i < 4; i++)
    {
        cont++;
        printf("Digite a %d temperatura: ", cont);
        scanf("%f", &vet[i]);

        soma += vet[i];
        media = soma / cont;
    }

    printf("A média de temperatura é %.2f\n", media);

    return 0;
}