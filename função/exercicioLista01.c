#include <stdio.h>
#include <locale.h>

int media(int num1, int num2, int num3, int result)
{
    result = (num1 + num2 + num3) / 3;

    return result;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3, res;

    printf("Digite a primeira nota: ");
    scanf("%d", &n1);

    printf("Digite a segunda nota: ");
    scanf("%d", &n2);

    printf("Digite a terceira nota: ");
    scanf("%d", &n3);

    printf("A média dos 3 números é %d \n", media(n1, n2, n3, res));

    return 0;
}