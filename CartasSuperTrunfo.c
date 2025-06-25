#include <stdio.h>

/*
Quando for rodar, utilize palavras simples principalmente no nome de cidade*/

int main(){
    #include <stdio.h>
    char estado1[50];
    char codigo1[50];
    char nome1[100];
    int população1;
    float area1;
    float pib1;
    float pontos1;

    printf("Carta 01\n");
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
    printf("Código da sua carta: %s \n",codigo1);
    printf("Nome da cidade: %s \n", nome1);

    printf("População da cidade: %d pessoas \nÁrea: %.2f km² \nPib: %.2f de reais\nPontos Turisticos: %.2f \n", população1, area1, pib1, pontos1);

    char estado2[50];
    char codigo2[50];
    char nome2[100];
    int populacao2;
    float area2;
    float pib2;
    float pontos2;

    printf("Carta 02\n");
    printf("Digite a primeira letra do nome do seu estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código de sua carta, escolhendo uma letra entre A e H, e o número entre 01 e 04: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &nome2);

    printf("Digite a quantidade de pessoas que vivem na sua cidade: \n");
    scanf("%d", &populacao2);

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

    printf("População da cidade: %.2d pessoas \nÁrea: %.2f km² \nPib: %.2f de reais \nPontos Turisticos: %.2f \n", populacao2, area2, pib2, pontos2);

    printf("Com base em seus dados, podemos demonstrar a relação da densidade e o PIB das Cartas! \n");
    
    float resultado1 = população1 / area1;
    float resultado2 = pib1 / população1;
    float resultado3 = populacao2 / area2;
    float resultado4 = pib2 / populacao2;

    printf("A carta 1 apresenta a densidade populacional de: %g (hab/km²) \n", resultado1);
    printf("A carta 1 apresenta o PIB per capita de: %f de reais \n", resultado2);
    printf("A carta 2 apresenta a densidade populacional de: %g (hab/km²)\n", resultado3);
    printf("A carta 2 apresenta o PIB per capita de: %f de reais \n", resultado4);

    printf("Agora vamos Comparar um atributo em específico das cartas e ver quem vence! \n");
    printf("Aqui vamos utilizar o atributo de População \n");

    printf("A população referente a cidade de %s da carta 1 é: %d pessoas \n", nome1, população1);
    printf("A população referente a cidade de %s da carta 2 é: %d pessoas \n", nome2, populacao2);
    printf("Dessa forma podemos ver que: \n");

    if (população1 > populacao2)
    {
        printf("O resultado é que a carta 1 venceu! \n");
    }else{
        printf("O resultado é que a carta 2 venceu! \n");
    }
    
    return 0;

}
