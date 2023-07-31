#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, n3, media;
    char nome[12];

    printf("Digite seu nome: ");
    gets(nome); // Armazena um String inteira

    printf("Digite três notas: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a ultima nota: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;

    printf("O aluno %s teve a média %.1f\n", nome, media);

    return 0;
}