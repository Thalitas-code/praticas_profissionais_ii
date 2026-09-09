#include<stdio.h>
int main (){
    int opcao;
    char planeta[50];
    
    printf("Você desja cadastrar o nome do novo planeta? 1 = sim / 2 = não ");
    scanf("%d", &opcao);

    while(opcao == 1){
        printf("\nCadastre o novo planeta: ");
        getchar();
        fgets(planeta, 50, stdin);
        printf("\nPlaneta: %s", planeta);
        
        printf("\nCadastrar o novo planeta? 1 = sim / 2 = não");
        scanf("%d", &opcao);
    }
    
    printf("Fim do programa");
    return 0;
}
