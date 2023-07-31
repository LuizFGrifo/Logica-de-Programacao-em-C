#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int velocidade, veiculo;

    printf("Digite a velocidade: ");
    scanf("%d", &velocidade);

    printf("Qual o tipo do veiculo: 1 para leve | 2 para pesado: ");
    scanf("%d", &veiculo);

    if (velocidade <= 120 && veiculo == 1)
        printf("Veiculo não multado !!!");
    else if (velocidade <= 90 && veiculo == 2)
        printf("Veiculo não multado !!!");
    else
        printf("Veiculo multado !!!");

    return 0;
}