#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, i, menor = 0;

    for (i = 1; i <= 3; i++)
    {
        printf("Digite um n�mero: ");
        scanf("%d", &num);

        if (menor == 0)
            menor = num;
        else
        {
            if (num < menor)
                menor = num;
        }
    }

    printf("O menor n�mero � %d", menor);

    return 0;
}