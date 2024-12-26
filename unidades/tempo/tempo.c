#include <stdio.h>
#include "tempo.h"

float segundosParaMinutos(float segundos) {
    return segundos / 60;
}

float minutosParaSegundos(float minutos) {
    return minutos * 60;
}

float minutosParaHoras(float minutos) {
    return minutos / 60;
}

float horasParaMinutos(float horas) {
    return horas * 60;
}

void converterTempo() {
    int opcao;
    float valor, resultado;
    char continuar;

    do {
        printf("\nConversor de Unidades de Tempo\n");
        printf("Escolha uma opcao:\n");
        printf("1. Converter de segundos para minutos\n");
        printf("2. Converter de minutos para segundos\n");
        printf("3. Converter de minutos para horas\n");
        printf("4. Converter de horas para minutos\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o valor em segundos: ");
            scanf("%f", &valor);
            resultado = segundosParaMinutos(valor);
            printf("%.2f segundos equivalem a %.2f minutos.\n", valor, resultado);
        } else if (opcao == 2) {
            printf("Digite o valor em minutos: ");
            scanf("%f", &valor);
            resultado = minutosParaSegundos(valor);
            printf("%.2f minutos equivalem a %.2f segundos.\n", valor, resultado);
        } else if (opcao == 3) {
            printf("Digite o valor em minutos: ");
            scanf("%f", &valor);
            resultado = minutosParaHoras(valor);
            printf("%.2f minutos equivalem a %.2f horas.\n", valor, resultado);
        } else if (opcao == 4) {
            printf("Digite o valor em horas: ");
            scanf("%f", &valor);
            resultado = horasParaMinutos(valor);
            printf("%.2f horas equivalem a %.2f minutos.\n", valor, resultado);
        } else {
            printf("Opcao invalida.\n");
        }

        printf("\nDeseja fazer outra conversao? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    printf("Encerrando o conversor de unidades de tempo. Ate logo!\n");
}
