#include <stdio.h>
#include <math.h>

#define GRAVIDADE 9.81

int main() {
    float altura_inicial, velocidade_inicial, angulo;
    float tempo_voo, alcance_horizontal;

    // Passo 1: Receber os dados do usuário
    printf("Digite a altura inicial em metros: ");
    scanf("%f", &altura_inicial);

    printf("Digite a velocidade inicial em m/s: ");
    scanf("%f", &velocidade_inicial);

    printf("Digite o angulo de lancamento em graus: ");
    scanf("%f", &angulo);

    // Convertendo o ângulo de graus para radianos
    angulo = angulo * M_PI / 180;

    // Passo 2: Calcular o tempo de voo
    tempo_voo = (2 * velocidade_inicial * sin(angulo)) / GRAVIDADE;

    // Passo 3: Calcular o alcance horizontal
    alcance_horizontal = velocidade_inicial * cos(angulo) * tempo_voo;

    // Passo 4: Mostrar o resultado ao usuário
    printf("O projétil atingirá o solo a %.2f metros de distância.\n", alcance_horizontal);

    return 0;
}