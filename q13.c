#include <stdio.h>

int main() {
    float horas_trabalhadas, valor_hora, salario;

    // Passo 1: Receber as horas trabalhadas e o valor da hora do usuário
    printf("Digite o numero de horas trabalhadas na semana: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o valor da hora de trabalho: R$ ");
    scanf("%f", &valor_hora);

    // Passo 2: Calcular o salário semanal
    if (horas_trabalhadas <= 40) {
        salario = horas_trabalhadas * valor_hora;
    } else if (horas_trabalhadas <= 60) {
        salario = 40 * valor_hora + (horas_trabalhadas - 40) * valor_hora * 1.5;
    } else {
        salario = 40 * valor_hora + 20 * valor_hora * 1.5 + (horas_trabalhadas - 60) * valor_hora * 2;
    }

    // Passo 3: Mostrar o salário ao usuário
    printf("O salario semanal do trabalhador e: R$ %.2f\n", salario);

    return 0;
}