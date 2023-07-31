#include <stdio.h>

int main()
{

    int novaSenha, senha, cont = 3;

    printf("Crie uma senha: ");
    scanf("%d", &novaSenha);

    do
    {

        printf("Digite sua senha: ");
        scanf("%d", &senha);

        if (senha == novaSenha)
        {
            printf("Acesso permitido !!!\n");
            return 0;
        }

        else
        {
            printf("Senha invalida, tente novamente !!!\n");
            printf("%d tentativas restantes.\n", cont);
            cont--;
        }

    } while (cont != 0);

    printf("Acesso negado, voce errou mais do que tres vezes !!!\n");

    return 0;
}