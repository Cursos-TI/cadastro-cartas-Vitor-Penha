#include <stdio.h>  
#include <string.h>


int main(){
  
  char estado1, estado2;
  char codigoCarta1[6], codigoCarta2[6], codigoCarta3[6]; 
  char cidade1[50], cidade2[50];
  int populacao1, populacao2;
  int area1, area2;
  double pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;
  float densidade01, densidade02;
  double pibPerCapt01, pibPerCapt02;

    printf("Informe uma letra de 'A' a 'H' que represente o primeiro estado: ");
    scanf(" %c", &estado1);
    getchar();
    printf("Informe a letra do primeiro estado seguida de um número de 01 a 04 (ex: A01, B04): ");
    fgets(codigoCarta1, sizeof(codigoCarta1), stdin);
    codigoCarta1[strcspn(codigoCarta1,"\n")] = '\0';

    printf("Nome da primeira cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1,"\n")] = '\0';

    printf("Informe a quantidade de habitantes da primeira cidade:");
    scanf(" %d", &populacao1);

    printf("Informe a área da primeira cidade em KM²: ");
    scanf(" %d", &area1);

    printf("Informe o PIB da primeira cidade: ");
    scanf(" %lf", &pib1);

    printf("Informe a quantidade de pontos turísticos da primeira cidade: ");
    scanf(" %d", &pontosTuristicos1);


    printf("\n\nInforme uma letra de 'A' a 'H' que represente o segundo estado: ");
    scanf(" %c", &estado2);
    getchar();
    printf("Informe a letra do segundo estado seguida de um número de 01 a 04 (ex: A01, B04): ");
    fgets(codigoCarta2, sizeof(codigoCarta2), stdin);
    codigoCarta2[strcspn(codigoCarta2,"\n")] = '\0';

    printf("Nome da segunda cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2,"\n")] = '\0';

    printf("Informe a quantidade de habitantes da segunda cidade:");
    scanf(" %d", &populacao2);

    printf("Informe a área da segunda cidade em KM²: ");
    scanf(" %d", &area2);

    printf("Informe o PIB da segunda cidade: ");
    scanf(" %lf", &pib2);

    printf("Informe a quantidade de pontos turísticos da segunda cidade: ");
    scanf(" %d", &pontosTuristicos2);

    
    densidade01 = (float) populacao1 / area1;
    densidade02 = (float) populacao2 / area2;
    pibPerCapt01 = (float) pib1 / populacao1;
    pibPerCapt02 = (float) pib2 / populacao2;
    
    

    
    printf("\n\nLetra que representa o primeiro estado: %c\n", estado1);
    printf("Letra do primeiro estado com dígito: %s\n", codigoCarta1);
    printf("Nome da primeira cidade: %s\n", cidade1);
    printf("População da primeira cidade: %d habitantes\n", populacao1);
    printf("Área da primeira cidade: %d km²\n", area1);
    printf("PIB da primeira cidade: R$ %lf\n", pib1);
    printf("Quantidade de pontos turísticos da primeira: %d\n", pontosTuristicos1);
    printf("Densidade Populacional da primeira: %.3f", densidade01);
    printf(" pessoas por km²\n");
    printf("O PIB percapto é de: %.2lf R$/hab\n", pibPerCapt01);


    printf("\n\nLetra que representa o segundo estado: %c\n", estado2);
    printf("Letra do segundo estado com dígito: %s\n", codigoCarta2);
    printf("Nome da segunda cidade: %s\n", cidade2);
    printf("População da segunda cidade: %d habitantes\n", populacao2);
    printf("Área da segunda: %d km²\n", area2);
    printf("PIB da segunda cidade: R$ %lf\n", pib2);
    printf("Quantidade de pontos turísticos da segunda cidade: %d\n", pontosTuristicos2);
    printf("Densidade Populacional da segunda: %.3f", densidade02);
    printf(" pessoas por km²\n");
    printf("O PIB percapto é de: %.2lf R$/hab\n", pibPerCapt02);


  return 0;


}

