#include <stdio.h>
int main(){
    int opcao;
    
    //CADASTRO
    printf("1 - Napolitano \n");
    printf("2 - Baunilha \n");
    printf("3 - Chocolate \n");
    printf("4 - Flocos \n");
    
    printf("Escolha um sabor: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Você escolheu o sabor Napolitano \n");
            break;
        case 2:
            printf("Você escolheu o sabor Baunilha \n");
            break;
        case 3:
            printf("Você escolheu o sabor Chocolate \n");
            break;
        case 4:
            printf("Você escolheu o sabor Flocos \n");
            break;
        default:
            printf("Valor inválido! \n");
    }    
return 0;
}
