#include "massa.h"
#include <stdio.h>

void converter_massa()
{
    int TipoUnidade = 0;
    float entrada_g;
    float entrada_Kg;
    float entrada_T;
    
    printf("Digite o valor de entrada\n 1 para gramas(g)\n 2 para quilogramas(Kg)\n 3 para toneladas(T)\n 4 para voltar <-\n:");
    fflush(stdout);
    scanf("%d",&TipoUnidade);

    switch(TipoUnidade){
        case 1:
            printf("digite o valor em gramas:");
            scanf("%f", &entrada_g);
            printf("\n O valor em equivalente em Kg eh: %f \n",entrada_g/1000);
            printf("\n O valor em equivalente em T eh: %f \n",entrada_g/(1000*1000));
            break;
        case 2:
            printf("digite o valor em quilogramas:");
            scanf("%f", &entrada_Kg);
            printf("\n O valor em equivalente em g eh: %f \n",entrada_Kg*1000);
            printf("\n O valor em equivalente em T eh: %f \n",entrada_Kg/1000);
            break;
        case 3:
            printf("digite o nalor em toneladas:");
            scanf("%f", &entrada_T);
            printf("\n O valor em equivalente em g eh: %f \n",entrada_T*1000*1000);
            printf("\n O valor em equivalente em Kg eh: %f \n",entrada_T*1000);
            break;
        case 4:      //volta ao menu inicial quando digita 4
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
        printf("\nDigite 1 para converter unidades de massa.\nDigite 2 para sair\n:");
    scanf("%d", &escolha);
    switch(escolha){
        case 1:
            converter_massa();
            break;
        case 2:            
            break;    
        default:
            printf("O valor digitado foi invalido.");
        }
    }while (escolha != 2); // sai do loop e encerra o programa quando digita 2
    return 0;

}
