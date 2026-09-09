#include<stdio.h>
int main (){
    int idade, opcao;
    
    printf("Cadastrar idade? 1 = sim / 2 = não ");
    scanf("%d", &opcao);
    while(opcao == 1){
        printf("Cadastre a idade: ");
        scanf("%d", &idade);
        
        printf("Cadastrar idade? 1 = sim / 2 = não ");
        scanf("%d", &opcao);
    }
    printf("Fim do programa");
    return 0;
}