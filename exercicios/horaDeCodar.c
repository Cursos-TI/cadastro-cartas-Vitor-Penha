/*Faça um programa que receba as notas de um aluno, soferem apenas duas notas será Nota 1 e Nota 2
depois calcule a média, por fim exiba o resultado desse código
*/
#include <stdio.h>
#include <stdlib.h>


int main(){

float *notas = NULL;
float nota;
char opcao;
int quantidade = 0;
float media;
int i;
float soma=0;

printf("Você tem alguma nota para cadastrar? [S / N]");
scanf(" %c", &opcao);
while (opcao=='S' || opcao == 's')
{
  printf("Informe sua nota: ");
  scanf("%f", &nota);
  notas = realloc(notas, (quantidade + 1) * sizeof(float));

  if(notas == NULL){
    printf("Erro de memória! \n");
    return 1;
  }
  notas[quantidade] = nota;
  quantidade++;

  printf("Deseja cadastrar outra nota? [S / N]: ");
  scanf(" %c", &opcao);

  if (opcao == 'N' || opcao == 'n')
  {
    printf("Obrigado, vamos calcular sua média...");
  }

}

for (i = 0; i<quantidade; i++){
  soma += notas[i];
} 

media = soma / quantidade;

printf("\nSua média é: %.2f", media);

free(notas);
return 0;




}