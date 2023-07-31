#include <stdio.h>
#include <locale.h>

// Definição da função

void imprimeNome(char text[80])
{
    printf("O colaborador do mês é o %s \n", text);
}

int somarNumeros(int n1, int n2)
{
    return n1 + n2;
}

float dividirNumeros(float x, float y)
{
    return x / y;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[80];
    int num1, num2;
    float num3, num4;

    printf("Digite um nome: ");
    scanf("%[^\n]", nome);

    printf("Digite um número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("\n---------------------------Divisão---------------------------\n\n");

    printf("Digite o primeiro número: ");
    scanf("%f", &num3);

    printf("Digite o segundo número: ");
    scanf("%f", &num4);

    imprimeNome(nome);

    printf("O resultado da soma é %d\n", somarNumeros(num1, num2));
    printf("O resultado da divisão é %.2f\n", dividirNumeros(num3, num4));

    return 0;
}
