#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[50];

    printf("Digite seu nome: ");

    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Ola, %s!\n", nome);
    return 0;
}
