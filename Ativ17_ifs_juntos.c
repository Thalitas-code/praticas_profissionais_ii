#include <stdio.h>
int main(){
    float nota;
    
    printf("Digite uma nota: (0 a 10) \n");
    scanf("%f", &nota);

if(nota > 10 || nota < 0) {
        printf("Nota invalida! \n");
    } else {
        printf ("Nota: %.2f", nota);
    }
return 0;
}
