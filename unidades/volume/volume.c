#include "volume.h"
#include<stdio.h>

void converter_volume()
{
    int TipoUnidade = 0;
    float entrada_l;
    float entrada_ml;
    float entrada_m3;
    
    printf("Digite o valor de entrada\n 1 para litro(l)\n 2 para mililitro(ml)\n 3 para metro cubico(m3)\n 4 para voltar <-\n:");
    fflush(stdout);
    scanf("%d",&TipoUnidade);

    switch(TipoUnidade){
        case 1:
            printf("digite o valor em mililitro:");
            scanf("%f", &entrada_ml);
            printf("\n O valor em equivalente em l eh: %f \n",entrada_ml/1000);
            printf("\n O valor em equivalente em m3 eh: %f \n",entrada_ml/(1000*1000));
            break;
        case 2:
            printf("digite o valor em litro:");
            scanf("%f", &entrada_l);
            printf("\n O valor em equivalente em ml eh: %f \n",entrada_l*1000);
            printf("\n O valor em equivalente em m3 eh: %f \n",entrada_l/1000);
            break;
        case 3:
            printf("digite o nalor em metros cubicos:");
            scanf("%f", &entrada_m3);
            printf("\n O valor em equivalente em g eh: %f \n",entrada_m3*1000*1000);
            printf("\n O valor em equivalente em Kg eh: %f \n",entrada_m3*1000);
            break;
         case 4:          //volta ao menu inicial quando digita 4
            break;
        default:
            printf("O valor digitado foi invalido.\n");
    } 
    
    return 0;
}


int main()
{
    int escolha = 0;
    do{
        printf("\nDigite 1 para converter unidades de volume.\nDigite 2 para sair\n:");
    scanf("%d", &escolha);
    switch(escolha){
        case 1:
            converter_volume();
            break;
        case 2:            // sai do loop e encerra o programa quando digita 2
            break;    
        default:
            printf("O valor digitado foi invalido.");
        }
    }while (escolha != 2); 
    return 0;

}
