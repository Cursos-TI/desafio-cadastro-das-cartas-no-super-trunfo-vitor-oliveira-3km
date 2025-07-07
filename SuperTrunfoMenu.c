#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int atributos;
    char pais1;
    //variáveis para a carta 1
    int população1 = 213000000;
    float pib1 = 3000000000000;
    float area1 = 8515767049;
    int pontos1 = 2477;
    float Densidade1 = população1 / area1;
    //variáveis para a pais 2
    int população2 = 341000000;
    float pib2 = 30000000000000;
    float area2 = 9833520;
    int pontos2 = 3500;
    float Densidade2 = população2 / area2;
    //variáveis para a pais 3
    int população3 = 1416000000;
    float pib3 = 1800000000000;
    float area3 = 9596961;
    int pontos3 = 85;
    float Densidade3 = população3 / area3;
    printf("### Carta 1 ### \n\n");
    printf("Escolha um dos países abaixo: \n\n");
    printf("1. Brasil \n\n");
    printf("2. EUA \n\n");
    printf("3. China \n\n");
    scanf("%d", &pais1);

    if (pais1 < 1 || pais1 > 3) 
    {
        printf("Opção inválida! Por favor, escolha um país válido.\n\n");
        return 0; // Encerrar o programa se a opção for inválida
    }

    switch (pais1)
    {
    case 1:
        printf("Esse país possui esse atributos: \n\nPopulação: %d de pessoas\n\nÁrea %.2f Km² \n\nPIB: %.2f de reais \n\nPontos turísticos: %d\n\nDensidade demográfica: %.2f habitantes por Km²\n\n",
             população1, area1, pib1, pontos1, Densidade1);
        break;

    case 2:
        printf("Esse país possui esse atributos: \n\nPopulação: %d de pessoas\n\nÁrea %.2f Km² \n\nPIB: %.2f de reais \n\nPontos turísticos: %d\n\nDensidade demográfica: %.2f habitantes por Km²\n\n",
             população2, area2, pib2, pontos2, Densidade2);
        break;

    case 3:
        printf("Esse país possui esse atributos: \n\nPopulação: %d de pessoas\n\nÁrea %.2f Km² \n\nPIB: %.2f de reais \n\nPontos turísticos: %d\n\nDensidade demográfica: %.2f habitantes por Km²\n\n",
             população3, area3, pib3, pontos3, Densidade3);
        break;
    
    default:
            printf("Opção inválida! Por favor, escolha um país válido.\n\n");
        break;
    }
    
    printf("### Carta 2 ### \n");
    printf("Escolha um dos países abaixo: \n");
    printf("1. Brasil \n\n");
    printf("2. EUA \n\n");
    printf("3. China \n\n");
    scanf("%d", &pais1);

    if (pais1 < 1 || pais1 > 3) 
    {
        printf("Opção inválida! Por favor, escolha um país válido.\n\n");
        return 0; // Encerrar o programa se a opção for inválida
    }

    switch (pais1)
    {
    case 1:
            printf("Esse país possui esse atributos: \n\nPopulação: %d \n\nÁrea %.2f Km² \n\nPIB: %.2f de reais \n\nPontos turísticos: %d\n\nDensidade demográfica: %.2f habitantes por Km²\n\n",
                população1, area1, pib1, pontos1, Densidade1);
        break;
    
        case 2:
            printf("Esse país possui esse atributos: \n\nPopulação: %d \n\nÁrea %.2f Km² \n\nPIB: %.2f de reais \n\nPontos turísticos: %d\n\nDensidade demográfica: %.2f habitantes por Km²\n\n",
                população2, area2, pib2, pontos2, Densidade2);
        break;

        case 3:
            printf("Esse país possui esse atributos: \n\nPopulação: %d \n\nÁrea %.2f Km² \n\nPIB: %.2f de reais \n\nPontos turísticos: %d\n\nDensidade demográfica: %.2f habitantes por Km²\n\n",
                população3, area3, pib3, pontos3, Densidade3);
        break;
    default:
            printf("Opção inválida! Por favor, escolha um país válido.\n\n");
        break;
    }

    printf("Escolha entre os atributos de um dos paises para batalhar: \n\n");
    printf("Lembrando que o atributo que for escolhido ele serve tanto para a carta 1 e 2 \n\n");
    printf("1. População \n\n");
    printf("2. PIB \n\n");
    printf("3. Área \n\n");
    printf("4. Pontos turísticos \n\n");
    printf("5. Densidade demográfica \n\n");
    scanf("%d", &atributos);

    switch (atributos)
    {
    case 1:
        if (população1 > população2 && população1 > população3) {
            printf("O país 1 venceu com a maior população: %d \n", população1);
        } else if (população2 > população1 && população2 > população3) {
            printf("O país 2 venceu com a maior população: %d \n", população2);
        } else if (população3 > população1 && população3 > população2) {
            printf("O país 3 venceu com a maior população: %d \n", população3);
        } else {
            printf("Houve um empate na população! \n");
        }
        break;
    case 2:
        if (pib1 > pib2 && pib1 > pib3) {
            printf("O país 1 venceu com o maior PIB: %.2f \n", pib1);
        } else if (pib2 > pib1 && pib2 > pib3) {
            printf("O país 2 venceu com o maior PIB: %.2f \n", pib2);
        } else if (pib3 > pib1 && pib3 > pib2) {
            printf("O país 3 venceu com o maior PIB: %.2f \n", pib3);
        } else {
            printf("Houve um empate no PIB! \n");
        }
        break;
    case 3:
        if (area1 > area2 && area1 > area3) {
            printf("O país 1 venceu com a maior área: %.2f Km² \n", area1);
        } else if (area2 > area1 && area2 > area3) {
            printf("O país 2 venceu com a maior área: %.2f Km² \n", area2);
        } else if (area3 > area1 && area3 > area2) {
            printf("O país 3 venceu com a maior área: %.2f Km² \n", area3);
        } else {
            printf("Houve um empate na área! \n");
        }
        break;
    case 4:
        if (pontos1 > pontos2 && pontos1 > pontos3) {
            printf("O país 1 venceu com o maior número de pontos turísticos: %d \n", pontos1);
        } else if (pontos2 > pontos1 && pontos2 > pontos3) {
            printf("O país 2 venceu com o maior número de pontos turísticos: %d \n", pontos2);
        } else if (pontos3 > pontos1 && pontos3 > pontos2) {
            printf("O país 3 venceu com o maior número de pontos turísticos: %d \n", pontos3);
        } else {
            printf("Houve um empate no número de pontos turísticos! \n");
        }
        break;
    case 5:
        if (Densidade1 < Densidade2 && Densidade1 < Densidade3) {
            printf("O país 1 venceu com a menor densidade demográfica: %.2f habitantes por Km² \n", Densidade1);
        } else if (Densidade2 < Densidade1 && Densidade2 < Densidade3) {
            printf("O país 2 venceu com a maior densidade demográfica: %.2f habitantes por Km² \n", Densidade2);
        } else if (Densidade3 < Densidade1 && Densidade3 < Densidade2) {
            printf("O país 3 venceu com a maior densidade demográfica: %.2f habitantes por Km² \n", Densidade3);
        } else {
            printf("Houve um empate na densidade demográfica! \n");
        }
        break;
    
    default:
    printf("Opção inválida! Por favor, escolha um atributo válido.\n");
        break;
    }


}
