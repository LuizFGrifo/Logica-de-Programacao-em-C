#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vet[6], par = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um n�mero na posi��o %d: ", i);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        if (vet[i] % 2 == 0)
            par++;
    }

    printf("Tem %d n�meros pares no vetor\n", par);

    return 0;
}