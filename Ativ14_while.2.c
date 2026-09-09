#include<stdio.h>
#include<stdlib.h>
int main (){
   int opcao;
   float n1;
   float n2;
   float media;
   
   printf("Deseja cadastrar as notas? 1 = sim / 2 = não ");
   scanf("%d", &opcao);
   
   while(opcao == 1){
       printf("Cadastre a nota 1: ");
       scanf("%f", &n1);
       system("clear");
       
       printf("Cadastre a nota 2: ");
       scanf("%f", &n2);
       system("clear");
       
       media = (n1 + n2) / 2;
       printf("Sua média é: %.2f", media);
       printf("\nContinuar? 1 = sim / 2 = não ");
       scanf("%d", &opcao);
   
       system("clear");
       
   }
   
    printf("fim do programa");
    return 0;
}

