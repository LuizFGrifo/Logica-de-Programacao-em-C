#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade, socio;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Voc� � socio do clube ? 1 para sim | 0 para n�o: ");
    scanf("%d", &socio);

    if (idade >= 60 || socio == 1)
        printf("Voc� possui desconto !!!\n");
    else if (idade < 60 || socio == 0)
        printf("Voc� n�o possui desconto !!!\n");

    return 0;
}