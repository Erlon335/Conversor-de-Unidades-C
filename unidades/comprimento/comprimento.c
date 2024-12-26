#include <stdio.h>
#include <stdlib.h>
#include "comprimento.h"

double metros_centimetros(double metros){
    return (metros * 100.0);
}
double metros_quilometros(double metros){
    return (metros / 1000.0);
}
double metros_milimetros(double metros){
    return (metros * 1000.0);
}

double centimetros_metros(double centimetros){
    return (centimetros / 100.0);
}
double centimetros_quilometros(double centimetros){
    return (centimetros / 100000.0);
}
double centimetros_milimetros(double centimetros){
    return (centimetros * 10.0);
}

double quilometros_metros(double quilometros){
    return (quilometros * 1000.0);
}
double quilometros_centimetros(double quilometros){
    return (quilometros * 100000.0);
}
double quilometros_milimetros(double quilometros){
    return (quilometros * 1000000.0);
}

double milimetros_metros(double milimetros){
    return (milimetros / 1000.0);
}
double milimetros_centimetros(double milimetros){
    return (milimetros / 10.0);
}
double milimetros_quilometros(double milimetros){
    return (milimetros / 1000000.0);
}

int converterComprimento(){

    const char *opcoes[] = {
        "Metros para Centimetros",
        "Metros para Quilometros",
        "Metros para Milimetros",
        "Centimetros para Metros",
        "Centimetros para Quilometros",
        "Centimetros para Milimetros",
        "Quilometros para Metros",
        "Quilometros para Centimetros",
        "Quilometros para Milimetros",
        "Milimetros para Metros",
        "Milimetros para Centimetros",
        "Milimetros para Quilometros"
    };

    int total_opcoes = sizeof(opcoes) / sizeof(opcoes[0]);
    int escolha;
    double valor, resultado;
    char continuar;

    do{
        printf("\n === Conversor de Medidas de Comprimento ===\n");
        for(int i=0; i < total_opcoes; i++){
            printf("%d. %s\n", i + 1, opcoes[i]);
        }

        printf("Digite a opcao desejada (1-%d): ", total_opcoes);
        scanf("%d", &escolha);

        if (escolha < 1 || escolha > total_opcoes){
            printf("Opcao Invalida!\n");
            continue;
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%lf", &valor);

        switch (escolha) {
            case 1: resultado = metros_centimetros(valor); break;
            case 2: resultado = metros_quilometros(valor); break;
            case 3: resultado = metros_milimetros(valor); break;
            case 4: resultado = centimetros_metros(valor); break;
            case 5: resultado = centimetros_quilometros(valor); break;
            case 6: resultado = centimetros_milimetros(valor); break;
            case 7: resultado = quilometros_metros(valor); break;
            case 8: resultado = quilometros_centimetros(valor); break;
            case 9: resultado = quilometros_milimetros(valor); break;
            case 10: resultado = milimetros_metros(valor); break;
            case 11: resultado = milimetros_centimetros(valor); break;
            case 12: resultado = milimetros_quilometros(valor); break;
}


                printf("Resultado: %.2lf\n", resultado);

        
        printf("\nDeseja realizar outra conversao? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Encerrando o conversor de unidades de comprimentos. Ate mais!\n");
    return 0;


}
