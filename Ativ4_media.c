#include<stdio.h>
int main(){
    float nota1;
    float nota2;
    float media;
    
    printf("Informe sua primeira nota: \n");
    scanf("%f",&nota1);
    printf("Sua nota 1 é: %.2f", nota1);
    
    printf("\nInforme sua segunda nota: \n");
    scanf("%f",&nota2);
    printf("Sua nota 2 é: %.2f", nota2);

    media = (nota1 + nota2) / 2;
    printf("\nSua média é: %.2f", media);
    
    return 0;
}
