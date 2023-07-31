#include <stdio.h>

int main()
{

    int vet[5], cont = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the position value %d: ", i);
        scanf("%d", &vet[i]);
    }

    for (int i = 4; i >= 0; i--)
    {
        printf("Vector in position %d has the value %d\n", cont, vet[i]);
        cont++;
    }

    return 0;
}