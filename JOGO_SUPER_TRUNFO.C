#include <stdio.h>

int main () {
    int populacao, pontosturisticos;
    float area, PIB;
    char nomedacidade [50];

    printf("Digite o nome da sua Cidade:\n");
    scanf("%s", &nomedacidade);

    printf("Digite o total populacional da Cidade: \n");
    scanf("%f", &populacao);

    prinf("Digite o total da área da Cidade: \n");
    scanf("%f", &area);
    
    prinf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB);

    prinf("Digite a quantidade de pontos Turisticos da sua Cidade: \n");
    scanf("%s", &pontosturisticos);
    
    return 0;   
    
}