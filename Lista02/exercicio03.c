#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, operacao;

    printf("Escolha as ooperações:\n");
    printf("0 para Soma | 1 para Subtração | 2 para Multiplicação | 3 para Divisão: ");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 0:
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);

        printf("O ressultado da soma dos números é %d", num1 + num2);
        break;
    case 1:
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);

        printf("O ressultado da sumbtração dos números é %d", num1 - num2);
        break;
    case 2:
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);

        printf("O ressultado da multiplicação dos números é %d", num1 * num2);
        break;
    case 3:
        printf("Digite o primeiro número: ");
        scanf("%d", &num1);
        printf("Digite o segundo número: ");
        scanf("%d", &num2);

        if (num1 == 0)
            printf("Erro, não pode dividir por 0");
        else
            printf("O ressultado da divisão dos números é %d", num1 / num2);
        break;
    default:
        printf("Operação invalida !!!");
        break;
    }

    return 0;
}