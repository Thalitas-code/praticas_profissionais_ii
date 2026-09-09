#include <stdio.h>
int main(){
    float N1, N2;
    float media;
    
    printf("Digite sua Primeira Nota: ");
    scanf("%f", &N1);
    
    printf("Digite sua Segunda Nota: ");
    scanf("%f", &N2);
    
    media = (N1 + N2)/2;
    printf("Sua média é = %.2f", media);
    
    if (media >=7){
        printf("\nAPROVADO(A)");
    } else {
        printf("\nREPROVADO(A)");
    }
    
    return 0;
}
