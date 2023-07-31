#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float peso, altura, ideal;
    char sexo;

    printf("Digite seu sexo: ");
    scanf("%c", &sexo);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if (sexo = "h")
    {
        ideal = 72.7 * altura - 58;
        printf("o peso ideal é %.1f", ideal);
    }
    else if (sexo = "m")
    {
        ideal = 62.7 * altura - 44.7;
        printf("o peso ideal é %.1f", ideal);
    }
    else
        printf("Opção invalida");
    return 0;
}