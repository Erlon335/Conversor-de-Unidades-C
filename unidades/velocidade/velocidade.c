#include <stdio.h>
#include "velocidade.h"

float metrosPorSegundoParaKmPorHora(float metrosPorSegundo) {
    return metrosPorSegundo * 3.6;
}

float metrosPorSegundoParaMilhasPorHora(float metrosPorSegundo) {
    return metrosPorSegundo * 2.23694;
}

void converterVelocidade() {
    int opcao;
    float metrosPorSegundo, resultado;
    char continuar;

    do {
        printf("\n--- Conversor de Velocidade ---\n");
        printf("Escolha uma opcao:\n");
        printf("1. Converter de m/s para km/h\n");
        printf("2. Converter de m/s para mph\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o valor em m/s (metros por segundo): ");
            scanf("%f", &metrosPorSegundo);
            resultado = metrosPorSegundoParaKmPorHora(metrosPorSegundo);
            printf("%.2f m/s equivalem a %.2f km/h.\n", metrosPorSegundo, resultado);
        } else if (opcao == 2) {
            printf("Digite o valor em m/s (metros por segundo): ");
            scanf("%f", &metrosPorSegundo);
            resultado = metrosPorSegundoParaMilhasPorHora(metrosPorSegundo);
            printf("%.2f m/s equivalem a %.2f mph.\n", metrosPorSegundo, resultado);
        } else {
            printf("Opcao invalida.\n");
        }

        printf("\nDeseja fazer outra conversao? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("Encerrando o conversor de unidades de velocidade. Ate logo!\n");
}
