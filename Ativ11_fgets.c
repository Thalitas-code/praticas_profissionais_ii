#include<stdio.h>
int main (){
    char nome_empresa[50];
    char endereco[50];
    char telefone[50];
    
    printf("Digite o nome da sua empresa: ");
    fgets(nome_empresa, 50, stdin);
    printf("\nNome empresa: %s", nome_empresa);
    
    printf("\nDigite o endereço: ");
    fgets(endereco, 50, stdin);
    printf("\nEndereço: %s", endereco);
    
    printf("\nDigite o telefone: ");
    fgets(telefone, 50, stdin);
    printf("\nTelefone: %s", telefone);
    return 0;
}
