#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vet[8], cont = 0, loc, x;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite o n�mero na posi�a� %d: ", i);
        scanf("%d", &vet[i]);
    }

    printf("Digite o valor que voc� deseja do vetor: ");
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
        printf("N�mero na posi��o %d\n", loc);
    else
        printf("N�mero n�o encontrado !!!\n");

    return 0;
}