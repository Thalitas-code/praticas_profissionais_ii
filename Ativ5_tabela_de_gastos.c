#include<stdio.h>
int main(){
    float salario;
    float vt;
    float vr;
    float produto1;
    float produto2;
    float produto3;
    float gastos;
    float saldo;
    
    //CADASTRO
    printf("Informe o valor do seu salário: \n");
    scanf("%f",&salario);
    printf("Seu salário é: %.2f", salario);
    
    printf("\nInforme o valor do seu VT: \n");
    scanf("%f",&vt);
    printf("Seu VT é: %.2f", vt);
    
    printf("\nInforme o valor do seu VR: \n");
    scanf("%f", &vr);
    printf("Seu VR é: %.2f", vr);
    
    
    //DESPESAS
    printf("\nInforme o valor do produto 1: \n");
    scanf("%f",&produto1);
    printf("Produto1: %.2f", produto1);
    
    printf("\nInforme o valor do seu produto 2: \n");
    scanf("%f",&produto2);
    printf("Produto2: %.2f", produto2);
    
    printf("\nInforme o valor do seu produto 3: \n");
    scanf("%f", &produto3);
    printf("Produto3: %.2f", produto3);
    
    
    //CÁLCULOS
    saldo = (salario + vt + vr - produto1 - produto2 - produto3);
    printf("\nSeu saldo é: %.2f", saldo);
    gastos = (produto1 + produto2 + produto3);
    printf("\nSeus gastos é: %.2f", gastos);
    
    //IMPRESSÃO
    printf("Saldo: %.2f", saldo);
    printf("Produto1: %.2f", produto1);
    printf("Produto2 %.2f", produto2);
    printf("Produto3: %.2f", produto3);
    printf("Total de gastos: %.2f", gastos);
}
