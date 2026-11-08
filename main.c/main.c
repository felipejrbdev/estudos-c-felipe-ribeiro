#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[50];
    int idade;
    float altura;

    printf("Digite seu nome: ");

    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Ola, %s! ", nome);
    printf("Voce tem %d anos e %.2f m de altura!\n", idade, altura);

    printf("\nObrigado por utilizar meu codigo!\n");
    return 0;
}
