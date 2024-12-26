#include <stdio.h>
#include <stdlib.h>
#include "unidades/comprimento/comprimento.h"
/*#include "unidades/massa/massa.h"
#include "unidades/volume/volume.h"
#include "unidades/temperatura/temperatura.h"
#include "unidades/velocidade/velocidade.h"
#include "unidades/potencia/potencia.h"*/
#include "unidades/area/area.h"
/*#include "unidades/tempo/tempo.h"*/
#include "unidades/dados/dados.h"

void exibirMenuPrincipal() {
    printf("\n ========== Conversor de Unidades ==========\n");
    printf("1 - Conversao de Comprimento\n");
    printf("2 - Conversao de Massa\n");
    printf("3 - Conversao de Volume\n");
    printf("4 - Conversao de Temperatura\n");
    printf("5 - Conversao de Velocidade\n");
    printf("6 - Conversao de Potencia\n");
    printf("7 - Conversao de Area\n");
    printf("8 - Conversao de Tempo\n");
    printf("9 - Conversao de Bits/Bytes\n");
    printf("0 - Sair\n");
    printf("===========================================\n");
    printf("Escolha uma opcao: ");
}

void pausarTela() {
    printf("Pressione Enter para continuar...");
    while (getchar() != '\n');
    getchar();
}

int main() {
    int opcao;

    while (1) {
        exibirMenuPrincipal();

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida. Tente novamente.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (opcao) {
            case 1:
                printf("\n--- Conversao de Comprimento ---\n");
                converterComprimento();
                break;
            /*case 2:
                printf("\n--- Conversao de Massa ---\n");
                converterMassa();
                break;
            case 3:
                printf("\n--- Conversao de Voluma---\n");
                converterVoluma();
                break;
            case 4:
                printf("\n--- Conversao de Temperatura---\n");
                converterTemperatura();
                break;
            case 5:
                printf("\n--- Conversao de Velocidade---\n");
                converterVelocidade();
                break;
            case 6:
                printf("\n--- Conversao de Potencia---\n");
                converterPotencia();
                break;*/
            case 7:
                printf("\n--- Conversao de Area---\n");
                converterArea();
                break;
            /*case 8:
                printf("\n--- Conversao de Tempo---\n");
                converterTempo();
                break;
            case 9:
                printf("\n--- Conversao de Bits/Bytes ---\n");
                converterDados();
                break;*/
            case 0:
                printf("Saindo do programa. Ate logo!\n");
                exit(0);
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

        pausarTela();
    }

    return 0;
}
