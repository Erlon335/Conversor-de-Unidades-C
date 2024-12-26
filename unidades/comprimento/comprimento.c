#include <stdio.h>
#include "comprimento.h"

double metrosCentimetros(double metros){
    return (metros * 100.0);
}
double metrosQuilometros(double metros){
    return (metros / 1000.0);
}
double metrosMilimetros(double metros){
    return (metros * 1000.0);
}

double centimetrosMetros(double centimetros){
    return (centimetros / 100.0);
}
double centimetrosQuilometros(double centimetros){
    return (centimetros / 100000.0);
}
double centimetrosMilimetros(double centimetros){
    return (centimetros * 10.0);
}

double quilometrosMetros(double quilometros){
    return (quilometros * 1000.0);
}
double quilometrosCentimetros(double quilometros){
    return (quilometros * 100000.0);
}
double quilometrosMilimetros(double quilometros){
    return (quilometros * 1000000.0);
}

double milimetrosMetros(double milimetros){
    return (milimetros / 1000.0);
}
double milimetrosCentimetros(double milimetros){
    return (milimetros / 10.0);
}
double milimetrosQuilometros(double milimetros){
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

    int totalOpcoes = sizeof(opcoes) / sizeof(opcoes[0]);
    int escolha;
    double valor, resultado;
    char continuar;

    do{
        printf("\n === Conversor de Medidas de Comprimento ===\n");
        for(int i=0; i < totalOpcoes; i++){
            printf("%d. %s\n", i + 1, opcoes[i]);
        }

        printf("Digite a opcao desejada (1-%d): ", totalOpcoes);
        scanf("%d", &escolha);

        if (escolha < 1 || escolha > totalOpcoes){
            printf("Opcao Invalida!\n");
            continue;
        }

        printf("Digite o valor a ser convertido: ");
        scanf("%lf", &valor);

        switch (escolha) {
            case 1: resultado = metrosCentimetros(valor); break;
            case 2: resultado = metrosQuilometros(valor); break;
            case 3: resultado = metrosMilimetros(valor); break;
            case 4: resultado = centimetrosMetros(valor); break;
            case 5: resultado = centimetrosQuilometros(valor); break;
            case 6: resultado = centimetrosMilimetros(valor); break;
            case 7: resultado = quilometrosMetros(valor); break;
            case 8: resultado = quilometrosCentimetros(valor); break;
            case 9: resultado = quilometrosMilimetros(valor); break;
            case 10: resultado = milimetrosMetros(valor); break;
            case 11: resultado = milimetrosCentimetros(valor); break;
            case 12: resultado = milimetrosQuilometros(valor); break;
}


                printf("Resultado: %.2lf\n", resultado);

        
        printf("\nDeseja realizar outra conversao? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("Encerrando o conversor de unidades de comprimentos. Ate mais!\n");
    return 0;


}
