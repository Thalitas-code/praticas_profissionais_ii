#include <stdio.h>
#include <stdlib.h>
int main(){
    float valor1, valor2, valor3;
    int quant1, quant2, quant3;
    float total1, total2, total3;
    
    float TOTAL_FINAL;
    
    //CADASTRO
 
    printf("Informe o valor do primeiro produto: ");
    scanf("%f", &valor1);
    printf("Informe a quantidade do primeiro produto: \n");
    scanf("%i", &quant1);
    total1 = valor1 * quant1;
    system("clear");
    
    printf("\nInforme o valor do segundo produto: ");
    scanf("%f", &valor2);
    printf("\nInforme a quantidade do segundo produto: \n");
    scanf("%i", &quant2);
    total2 = valor2 * quant2;
    system("clear");
    
    printf("Informe o valor do terceiro produto: ");
    scanf("%f", &valor3);
    printf("\nInforme a quantidade do terceiro produto: \n");
    scanf("%i", &quant3);
    total3 = valor3 * quant3;
    system("clear");
    
    TOTAL_FINAL= total1 + total2 + total3;
 
//impressao
    printf("Primeiro Produto = %.2f \n Quantidade = %i \n Total = R$ %.2f \n", valor1, quant1, total1);
    printf("\nSegundo Produto = %.2f \n Quantidade = %i \n Total = R$ %.2f \n", valor2, quant2, total2);
    printf("\nTerceiro Produto = %.2f \n Quantidade = %i \n Total = R$ %.2f \n", valor3, quant3, total3);
    
    printf("\nO Valor Total é: %.2f", TOTAL_FINAL);
    
    return 0;
}
