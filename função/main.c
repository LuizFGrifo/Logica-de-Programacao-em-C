#include <stdio.h>
#include <locale.h>

// Defini��o da fun��o

void imprimeNome(char text[80])
{
    printf("O colaborador do m�s � o %s \n", text);
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

    printf("Digite um n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    printf("\n---------------------------Divis�o---------------------------\n\n");

    printf("Digite o primeiro n�mero: ");
    scanf("%f", &num3);

    printf("Digite o segundo n�mero: ");
    scanf("%f", &num4);

    imprimeNome(nome);

    printf("O resultado da soma � %d\n", somarNumeros(num1, num2));
    printf("O resultado da divis�o � %.2f\n", dividirNumeros(num3, num4));

    return 0;
}
