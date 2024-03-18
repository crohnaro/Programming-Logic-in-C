#include <stdio.h>

int main() {
    float nota1, nota2, media, nota_exame;

    // Passo 1: Receber as duas notas parciais do aluno
    printf("Digite a primeira nota (0 a 100): ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota (0 a 100): ");
    scanf("%f", &nota2);

    // Passo 2: Calcular a média das notas
    media = (nota1 + nota2) / 2;

    // Passo 3: Verificar se o aluno está aprovado, em exame final ou reprovado
    if (media >= 70) {
        printf("Aluno aprovado com media %.2f.\n", media);
    } else if (media >= 40 && media < 70) {
        printf("Aluno em exame final. Media: %.2f.\n", media);
        // Pedir a nota do exame
        printf("Digite a nota do exame (0 a 100): ");
        scanf("%f", &nota_exame);
        // Verificar se o aluno está aprovado ou reprovado após o exame
        if (media + nota_exame >= 100) {
            printf("Aluno aprovado com media final %.2f.\n", media + nota_exame);
        } else {
            printf("Aluno reprovado com media final %.2f.\n", media + nota_exame);
        }
    } else {
        printf("Aluno reprovado com media %.2f.\n", media);
    }

    return 0;
}