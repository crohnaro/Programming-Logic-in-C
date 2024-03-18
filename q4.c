#include <stdio.h>

int main() {
    int numero;

    // Passo 1: Receber o número do usuário
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Passo 2: Verificar se o número é par ou não
    if (numero % 2 == 0) {
        printf("%d eh um numero par.\n", numero);
    } else {
        printf("%d nao eh um numero par.\n", numero);
    }

    return 0;
}