#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundos_restantes;

    // Passo 1: Receber o tempo em segundos do usuário
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    // Passo 2: Calcular horas, minutos e segundos
    horas = segundos / 3600;  // 1 hora = 3600 segundos
    segundos_restantes = segundos % 3600;
    minutos = segundos_restantes / 60;  // 1 minuto = 60 segundos
    segundos_restantes = segundos_restantes % 60;

    // Passo 3: Mostrar o resultado ao usuário
    printf("Tempo equivalente: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos_restantes);

    return 0;
}