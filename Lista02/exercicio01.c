#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, nota, soma, media;

    for (i = 1; i <= 3; i++)
    {
        printf("Digite a nota: ");
        scanf("%d", &nota);

        soma += nota;
        media = soma / i;
    }

    printf("Sua média é %d\n", media);

    if (media >= 0 && media < 4)
        printf("Reprovado !");
    else if (media >= 4 && media < 7)
        printf("Exame !");
    else if (media >= 7 && media <= 10)
        printf("Aprovado !");

    return 0;
}