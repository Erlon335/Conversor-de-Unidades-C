#include <stdio.h>
#include "tempo.h"

void converterTempo(int tipoUnidade, float valor) {

    float segundos = 0, minutos = 0, horas = 0;
    switch (tipoUnidade) {
        case 1:
            minutos = valor / 60;
            horas = valor / 3600;
            printf("%.2f segundos equivale a:\n", valor);
            printf("- %.2f minutos\n", minutos);
            printf("- %.2f horas\n", horas);
            break;

        case 2:
            segundos = valor * 60;
            horas = valor / 60;
            printf("%.2f minutos equivale a:\n", valor);
            printf("- %.2f segundos\n", segundos);
            printf("- %.2f horas\n", horas);
            break;

        case 3:
            segundos = valor * 3600;
            minutos = valor * 60;
            printf("%.2f horas equivale a:\n", valor);
            printf("- %.2f segundos\n", segundos);
            printf("- %.2f minutos\n", minutos);
            break;

        default:
            printf("Tipo de unidade invalido.\n");
            return;
    }
}
