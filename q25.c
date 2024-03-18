#include <stdio.h>

// Função para calcular o MDC usando o método de Euclides
int calcularMDC(int a, int b) {
    int resto;

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

// Função para calcular o MMC usando o MDC
int calcularMMC(int a, int b) {
    return (a * b) / calcularMDC(a, b);
}

int main() {
    int numero1, numero2, mmc;

    // Passo 1: Receber dois números do usuário
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &numero1, &numero2);

    // Passo 2: Calcular o MMC e mostrar o resultado
    mmc = calcularMMC(numero1, numero2);
    printf("O MMC de %d e %d eh: %d\n", numero1, numero2, mmc);

    return 0;
}
