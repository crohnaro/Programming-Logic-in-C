#include <stdio.h>

int main() {
    int velocidade_maxima, velocidade_motorista, excesso_velocidade, multa;

    // Passo 1: Receber a velocidade máxima e a velocidade do motorista
    printf("Digite a velocidade máxima permitida em km/h: ");
    scanf("%d", &velocidade_maxima);

    printf("Digite a velocidade do motorista em km/h: ");
    scanf("%d", &velocidade_motorista);

    // Passo 2: Calcular o excesso de velocidade e a multa
    excesso_velocidade = velocidade_motorista - velocidade_maxima;
    multa = excesso_velocidade * 5;

    // Passo 3: Verificar se há multa
    if (excesso_velocidade > 0) {
        printf("Excesso de velocidade detectado.\n");
        printf("O motorista ultrapassou a velocidade máxima em %d km/h.\n", excesso_velocidade);
        printf("Multa a ser paga: R$ %d,00.\n", multa);
    } else {
        printf("Velocidade dentro do limite permitido. Não há multa.\n");
    }

    return 0;
}