#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salarioatual, salarionovo;

    printf("Informe o sálrio atual: \n");
    scanf("%f", &salarioatual);

    if (salarioatual <= 750)
    {

        salarionovo = salarioatual + (salarioatual * 0.05) + 100;
    }
    else
    {

        salarionovo = salarioatual + (salarioatual * 0.05);
    }

    printf("O salário reajustado é de R$%.2f:", salarionovo);

    return 0;
}