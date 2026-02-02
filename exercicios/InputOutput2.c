#include <stdio.h>
#include <string.h> 

int main(){

    int idade;
    float altura;
    char opcao;
    char nome[20];
    char nomeCompleto[50];

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d \n\n", idade);

    printf("DIgite sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f \n\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("O nome é: %s \n\n", nome);

    getchar();

    printf("Nome compelto: ");
    fgets(nomeCompleto, 50, stdin);
    nomeCompleto[strcspn(nomeCompleto,"\n")] = '\0';
    printf("Nome completo: %s\n\n",nomeCompleto);


    printf("Digite a opção: ");
    scanf(" %c", &opcao);
    printf("A opção é: %c", opcao);
  return 0;
}