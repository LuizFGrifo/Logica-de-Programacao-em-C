#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, operacao;

    printf("Escolha as oopera��es:\n");
    printf("0 para Soma | 1 para Subtra��o | 2 para Multiplica��o | 3 para Divis�o: ");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 0:
        printf("Digite o primeiro n�mero: ");
        scanf("%d", &num1);
        printf("Digite o segundo n�mero: ");
        scanf("%d", &num2);

        printf("O ressultado da soma dos n�meros � %d", num1 + num2);
        break;
    case 1:
        printf("Digite o primeiro n�mero: ");
        scanf("%d", &num1);
        printf("Digite o segundo n�mero: ");
        scanf("%d", &num2);

        printf("O ressultado da sumbtra��o dos n�meros � %d", num1 - num2);
        break;
    case 2:
        printf("Digite o primeiro n�mero: ");
        scanf("%d", &num1);
        printf("Digite o segundo n�mero: ");
        scanf("%d", &num2);

        printf("O ressultado da multiplica��o dos n�meros � %d", num1 * num2);
        break;
    case 3:
        printf("Digite o primeiro n�mero: ");
        scanf("%d", &num1);
        printf("Digite o segundo n�mero: ");
        scanf("%d", &num2);

        if (num1 == 0)
            printf("Erro, n�o pode dividir por 0");
        else
            printf("O ressultado da divis�o dos n�meros � %d", num1 / num2);
        break;
    default:
        printf("Opera��o invalida !!!");
        break;
    }

    return 0;
}