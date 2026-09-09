#include<stdio.h>
int main(){
    
    //CADASTRO
    char nome[50];
    char email[50];
    char telefone[50];
    char endereco[50];
    int dia, mes, ano;
    float renda_cliente;
    
    char marca[50];
    char modelo[50];
    char cor[50];
    int ano_carro;
    
    
    //cadastro do cliente
    printf("Digite seu nome: \n");
    fgets(nome, 50, stdin);
    printf("Nome: %s", nome);
    
    printf("Digite seu email: \n");
    fgets(email, 50, stdin);
    printf("Email: %s", email);
    
    printf("Digite seu telefone: \n");
    fgets(telefone, 50, stdin);
    printf("Telefone: %s", telefone);
    
    printf("Digite seu endereço: \n");
    fgets(endereco, 50, stdin);
    printf("Endereço: %s", endereco);
    
    printf("Informe sua data de nascimento: (ex.: 01/01/2000) ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("Data de Nascimento: %d/%d/%d", dia, mes, ano);
    
    printf("Digite sua renda mensal: \n");
    scanf("%f", &renda_cliente);
    printf("Renda mensal: %.2f", renda_cliente);

    //cadastro do carro
    printf("Qual marca desejada: \n");
    fgets(marca, 50, stdin);
    printf("Marca: %s", marca);
    
    printf("Qual modelo desejado: \n");
    fgets(modelo, 50, stdin);
    printf("Modelo: %s", modelo);
    
    printf("Qual cor desejada: \n");
    fgets(cor, 50, stdin);
    printf("Cor: %s", cor);
    
    printf("Qual ano desejado: \n");
    scanf("%d", &ano_carro);
    printf("Ano do carro: %d", ano_carro);






    //DECISÃO SIMPLES (IF/else)
    
    
    
    
    
    //CLASSIFICAÇÃO (switch)
    
    //qual metodo de pagamento se a vista ou parcelado, 
    //mostrar as parcelas dependendo da forma de pagamento
    
    
    
    //REPETIÇÃO E IMPRESSÃO FINAL (RELATORIO)
    
    return 0;
}