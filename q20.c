#include <stdio.h>

int main() {
    int numero, i, eh_primo = 1;

    // Passo 1: Receber o número inteiro do usuário
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    // Passo 2: Verificar se o número é primo
    if (numero <= 1) {
        eh_primo = 0;
    } else {
        for (i = 2; i <= numero / 2; ++i) {
            if (numero % i == 0) {
                eh_primo = 0;
                break;
            }
        }
    }

    // Passo 3: Mostrar o resultado ao usuário
    if (eh_primo)
        printf("%d eh um numero primo.\n", numero);
    else
        printf("%d nao eh um numero primo.\n", numero);

    return 0;
}