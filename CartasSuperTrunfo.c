#include <stdio.h>


int main() {
    char estado1[50];
    char codigo1[50];
    char nome1[100];
    int população1;
    float area1;
    float pib1;
    float pontos1;


    printf("Digite a primeira letra do nome do seu estado: \n");
    scanf("%s", &estado1);

    printf("Digite o código de sua carta, escolhendo uma letra entre A e H, e o número entre 01 e 04: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &nome1);

    printf("Digite a quantidade de pessoas que vivem na sua cidade: \n");
    scanf("%d", &população1);

    printf("Qual área de sua cidade?: \n");
    scanf("%f", &area1);

    printf("Qual o PIB da sua cidade?: \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos existem na sua cidade: \n");
    scanf("%f", &pontos1);

    printf("Carta 1 \n");
    printf("Estado: %s \n", estado1);
    printf("Código da sua carta:%s \n",codigo1);
    printf("Nome da cidade:%s \n", nome1);

    printf("População da cidade: %d \nÁrea: %.2f km² \npib: %.2f\nPontos Turisticos: %.2f \n", população1, area1, pib1, pontos1);

    char estado2[50];
    char codigo2[50];
    char nome2[100];
    int população2;
    float area2;
    float pib2;
    float pontos2;


    printf("Digite a primeira letra do nome do seu estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código de sua carta, escolhendo uma letra entre A e H, e o número entre 01 e 04: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &nome2);

    printf("Digite a quantidade de pessoas que vivem na sua cidade: \n");
    scanf("%d", &população2);

    printf("Qual área de sua cidade?: \n");
    scanf("%f", &area2);

    printf("Qual o PIB da sua cidade?: \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos existem na sua cidade: \n");
    scanf("%f", &pontos2);

    printf("Carta 2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código da sua carta:%s \n",codigo2);
    printf("Nome da cidade:%s \n", nome2);

    printf("População da cidade: %d \nÁrea: %.2f km² \npib: %.2f\nPontos Turisticos: %.2f \n", população2, area2, pib2, pontos2);

    return 0;
}
