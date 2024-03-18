#include <stdio.h>

int main() {
    char operacao;
    float num1, num2, resultado;

    // Passo 1: Receber a operação e os números do usuário
    printf("Digite a operacao desejada (+, -, / ou *): ");
    scanf(" %c", &operacao);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Passo 2: Executar a operação desejada
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: Divisao por zero!\n");
                return 1; // Retorna 1 para indicar erro
            }
            break;
        default:
            printf("Erro: Operacao invalida!\n");
            return 1; // Retorna 1 para indicar erro
    }

    // Passo 3: Mostrar o resultado ao usuário
    printf("O resultado da operacao %.2f %c %.2f = %.2f\n", num1, operacao, num2, resultado);

    return 0;
}