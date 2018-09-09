#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);

    if (n < 0)
    {
        printf("O valor digitado eh negativo.\n");
    }
    else
    {
        printf("O valor digitado eh positivo.\n");
    }

    return 0;
}
