#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float salarioBruto, inss = 11, salarioLiquido;
    char nome[50];

    printf("Digite o nome do funcionario: ");
    scanf("%[^\n]", nome);

    printf("Digite o sal�rio bruto: ");
    scanf("%f", &salarioBruto);

    salarioLiquido = salarioBruto - (salarioBruto * (inss / 100));

    printf("Nome do funcionario: %s\n", nome);
    printf("O sal�rio bruto � R$ %.2f\n", salarioBruto);
    printf("O salario liquido � R$ %.2f\n", salarioLiquido);

    return 0;
}