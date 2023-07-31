#include <stdio.h>
#include <locale.h>

int SenhaCorreta(int newPassword, int password)
{
    printf("Acesso permitido\n");
}

int senhaIncorreta(int fail)
{
    printf("Fim do programa, você errou 3 vezes !!!\n");
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int novaSenha, senha, erro = 0;

    printf("Crie um senha: ");
    scanf("%d", &novaSenha);

    do
    {

        printf("Digite sua senha: ");
        scanf("%d", &senha);

        if (senha == novaSenha)
        {
            SenhaCorreta(novaSenha, senha);
            return 0;
        }
        else
        {
            printf("Senha incorreta !!!\n");
            erro++;
        }

    } while (erro < 3);

    senhaIncorreta(erro);

    return 0;
}