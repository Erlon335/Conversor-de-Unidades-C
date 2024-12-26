#include "dados.h"
#include <stdio.h>

void converterDados() {
    double valor, bits, bytes, kilobytes, gigabytes, terabytes, megabytes;
    int opcao;
    char continuar;

    do {
        printf("\nConversor de Unidades de Dados\n");
        printf("Escolha a unidade que deseja converter:\n");
        printf("1. Megabytes (MB) para outras unidades\n");
        printf("2. Kilobytes (KB) para outras unidades\n");
        printf("3. Gigabytes (GB) para outras unidades\n");
        printf("4. Terabytes (TB) para outras unidades\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor em Megabytes (MB): ");
                scanf("%lf", &valor);

                bits = valor * 1024 * 1024 * 8;
                bytes = valor * 1024 * 1024;
                kilobytes = valor * 1024;
                gigabytes = valor / 1024;
                terabytes = valor / (1024 * 1024);

                printf("Conversao de %.2f MB:\n", valor);
                printf("Bits: %.2lf\n", bits);
                printf("Bytes: %.2lf\n", bytes);
                printf("Kilobytes (KB): %.2lf\n", kilobytes);
                printf("Gigabytes (GB): %.6lf\n", gigabytes);
                printf("Terabytes (TB): %.9lf\n", terabytes);
                break;

            case 2:
                printf("Digite o valor em Kilobytes (KB): ");
                scanf("%lf", &valor);

                bits = valor * 1024 * 8;
                bytes = valor * 1024;
                megabytes = valor / 1024;
                gigabytes = valor / (1024 * 1024);
                terabytes = valor / (1024 * 1024 * 1024);

                printf("Conversao de %.2f KB:\n", valor);
                printf("Bits: %.2lf\n", bits);
                printf("Bytes: %.2lf\n", bytes);
                printf("Megabytes (MB): %.2lf\n", megabytes);
                printf("Gigabytes (GB): %.6lf\n", gigabytes);
                printf("Terabytes (TB): %.9lf\n", terabytes);
                break;

            case 3:
                printf("Digite o valor em Gigabytes (GB): ");
                scanf("%lf", &valor);

                bits = valor * 1024 * 1024 * 8;
                bytes = valor * 1024 * 1024;
                kilobytes = valor * 1024;
                megabytes = valor * 1024;
                terabytes = valor / 1024;

                printf("Conversao de %.2f GB:\n", valor);
                printf("Bits: %.2lf\n", bits);
                printf("Bytes: %.2lf\n", bytes);
                printf("Kilobytes (KB): %.2lf\n", kilobytes);
                printf("Megabytes (MB): %.2lf\n", megabytes);
                printf("Terabytes (TB): %.9lf\n", terabytes);
                break;

            case 4:
                printf("Digite o valor em Terabytes (TB): ");
                scanf("%lf", &valor);

                bits = valor * 1024 * 1024 * 1024 * 8;
                bytes = valor * 1024 * 1024 * 1024;
                kilobytes = valor * 1024 * 1024;
                megabytes = valor * 1024 * 1024;
                gigabytes = valor * 1024;

                printf("Conversao de %.2f TB:\n", valor);
                printf("Bits: %.2lf\n", bits);
                printf("Bytes: %.2lf\n", bytes);
                printf("Kilobytes (KB): %.2lf\n", kilobytes);
                printf("Megabytes (MB): %.2lf\n", megabytes);
                printf("Gigabytes (GB): %.6lf\n", gigabytes);
                break;

            default:
                printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
                break;
        }

        printf("\nDeseja fazer outra conversao? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Encerrando o conversor de unidades de dados. Ate logo!\n");
}
