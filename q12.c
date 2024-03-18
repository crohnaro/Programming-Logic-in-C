#include <stdio.h>

int main() {
    int valor, cedulas_100, cedulas_50, cedulas_20, cedulas_10, cedulas_5, cedulas_2, cedulas_1;

    // Passo 1: Receber o valor do usuário
    printf("Digite o valor em reais: ");
    scanf("%d", &valor);

    // Passo 2: Calcular o número mínimo de cédulas
    cedulas_100 = valor / 100;
    valor = valor % 100;

    cedulas_50 = valor / 50;
    valor = valor % 50;

    cedulas_20 = valor / 20;
    valor = valor % 20;

    cedulas_10 = valor / 10;
    valor = valor % 10;

    cedulas_5 = valor / 5;
    valor = valor % 5;

    cedulas_2 = valor / 2;
    valor = valor % 2;

    cedulas_1 = valor;

    // Passo 3: Mostrar o resultado ao usuário
    printf("R$ %d = %d cedulas de 100, %d cedulas de 50, %d cedulas de 20, %d cedulas de 10, %d cedulas de 5, %d cedulas de 2 e %d cedulas de 1.\n",
           valor, cedulas_100, cedulas_50, cedulas_20, cedulas_10, cedulas_5, cedulas_2, cedulas_1);

    return 0;
}