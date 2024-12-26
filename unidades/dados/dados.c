#include "dados.h"
#include <stdio.h>

void converterDados() {
    double megabytes, bits, bytes, kilobytes, gigabytes, terabytes;
    char continuar;

    do {
        printf("Digite o valor em Megabytes (MB): ");
        scanf("%lf", &megabytes);

        bits = megabytes * 1024 * 1024 * 8;
        bytes = megabytes * 1024 * 1024;
        kilobytes = megabytes * 1024;
        gigabytes = megabytes / 1024;
        terabytes = megabytes / (1024 * 1024);

        printf("Conversao de %.2f MB:\n", megabytes);
        printf("Bits: %.2lf\n", bits);
        printf("Bytes: %.2lf\n", bytes);
        printf("Kilobytes (KB): %.2lf\n", kilobytes);
        printf("Gigabytes (GB): %.6lf\n", gigabytes);
        printf("Terabytes (TB): %.9lf\n", terabytes);

        printf("\nDeseja fazer outra conversao? (s/n): ");
        scanf(" %c", &continuar);
        
    } while (continuar == 's' || continuar == 'S');

    printf("Encerrando o conversor de unidades de dados. Ate logo!\n");
}
