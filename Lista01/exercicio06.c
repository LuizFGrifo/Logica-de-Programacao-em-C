#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salario, novoSalario, reajuste;

    printf("Digite seu sal�rio: ");
    scanf("%f", &salario);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &reajuste);

    novoSalario = salario + (salario * (reajuste / 100));

    printf("Sal�rio atual: R$%.2f\n", salario);
    printf("Reajuste: %.1f%%\n", reajuste);
    printf("Sal�rio reajustado: R$%.2f\n", novoSalario);

    return 0;
}