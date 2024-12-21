#include <stdio.h>
#include "tempo.h"

void converter_tempo(int TipoUnidade, float valor) {

    float segundos = 0, minutos = 0, horas = 0;
    switch (tipo_unidade) {
        case 1: // caso o valor seja fornecido em segundos
            minutos = valor / 60;
            horas = valor / 3600;
            printf("%.2f segundos equivale a:\n", valor);
            printf("- %.2f minutos\n", minutos);
            printf("- %.2f horas\n", horas);
            break;

        case 2: // caso o valor seja fornecido em minutos
            segundos = valor * 60;
            horas = valor / 60;
            printf("%.2f minutos equivale a:\n", valor);
            printf("- %.2f segundos\n", segundos);
            printf("- %.2f horas\n", horas);
            break;

        case 3: // caso o valor seja fornecido em horas
            segundos = valor * 3600;
            minutos = valor * 60;
            printf("%.2f horas equivale a:\n", valor);
            printf("- %.2f segundos\n", segundos);
            printf("- %.2f minutos\n", minutos);
            break;

        default:
            printf("Tipo de unidade inválido.\n");
            return;
    }
}
