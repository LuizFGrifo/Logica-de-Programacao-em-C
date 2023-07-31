#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, i, menor = 0;

    for (i = 1; i <= 3; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (menor == 0)
            menor = num;
        else
        {
            if (num < menor)
                menor = num;
        }
    }

    printf("O menor número é %d", menor);

    return 0;
}