#include <stdio.h>
#include <math.h>

#define GRAVIDADE 9.81

// Estrutura para representar a posição (x, y) do projétil
typedef struct {
    float x;
    float y;
} Posicao;

int main() {
    float altura_inicial, velocidade_inicial, angulo, dt;
    Posicao posicao;
    float tempo = 0;

    // Passo 1: Receber os dados do usuário
    printf("Digite a altura inicial em metros: ");
    scanf("%f", &altura_inicial);

    printf("Digite a velocidade inicial em m/s: ");
    scanf("%f", &velocidade_inicial);

    printf("Digite o angulo de lancamento em graus: ");
    scanf("%f", &angulo);

    printf("Digite o intervalo de tempo em segundos (dt): ");
    scanf("%f", &dt);

    // Convertendo o ângulo de graus para radianos
    angulo = angulo * M_PI / 180;

    // Inicializar a posição inicial do projétil
    posicao.x = 0;
    posicao.y = altura_inicial;

    // Passo 2: Simular a trajetória parabólica do projétil
    while (posicao.y >= 0) {
        // Atualizar a posição do projétil
        posicao.x = velocidade_inicial * cos(angulo) * tempo;
        posicao.y = altura_inicial + (velocidade_inicial * sin(angulo) * tempo) - (0.5 * GRAVIDADE * pow(tempo, 2));

        // Mostrar a posição do projétil
        printf("Tempo: %.2f s, Posicao: (%.2f, %.2f)\n", tempo, posicao.x, posicao.y);

        // Atualizar o tempo
        tempo += dt;
    }

    return 0;
}