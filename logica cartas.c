#include <stdio.h>

#define MAX_CIDADES 8 // Número máximo de cidades cadastradas

int main() {
    char codigos[MAX_CIDADES][5]; // Armazena os códigos das cidades
    int populacao[MAX_CIDADES];
    float area[MAX_CIDADES];
    float pib[MAX_CIDADES];
    int pontos_turisticos[MAX_CIDADES];

    int i, c1, c2, criterio;

    // Cadastro das cidades
    for (i = 0; i < MAX_CIDADES; i++) {
        printf("\nCadastro da cidade %d:\n", i + 1);
        printf("Digite o código da cidade (Ex: A01): ");
        scanf("%s", codigos[i]);
        printf("Digite a população da cidade: ");
        scanf("%d", &populacao[i]);
        printf("Digite a área da cidade: ");
        scanf("%f", &area[i]);
        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib[i]);
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos[i]);
    }

    // Escolha das cidades para comparar
    printf("\nEscolha duas cidades para comparar (0 a %d): ", MAX_CIDADES - 1);
    scanf("%d %d", &c1, &c2);

    // Escolha do critério de comparação
    printf("\nEscolha um critério de comparação:\n");
    printf("1 - População (maior vence)\n");
    printf("2 - Área (maior vence)\n");
    printf("3 - PIB (maior vence)\n");
    printf("4 - Pontos turísticos (maior vence)\n");
    printf("5 - Densidade populacional (menor vence)\n");
    printf("Opção: ");
    scanf("%d", &criterio);

    // Comparação e exibição do vencedor
    if (criterio == 1) { // População
        if (populacao[c1] > populacao[c2])
            printf("\nVencedora: %s (maior população)\n", codigos[c1]);
        else
            printf("\nVencedora: %s (maior população)\n", codigos[c2]);

    } else if (criterio == 2) { // Área
        if (area[c1] > area[c2])
            printf("\nVencedora: %s (maior área)\n", codigos[c1]);
        else
            printf("\nVencedora: %s (maior área)\n", codigos[c2]);

    } else if (criterio == 3) { // PIB
        if (pib[c1] > pib[c2])
            printf("\nVencedora: %s (maior PIB)\n", codigos[c1]);
        else
            printf("\nVencedora: %s (maior PIB)\n", codigos[c2]);

    } else if (criterio == 4) { // Pontos turísticos
        if (pontos_turisticos[c1] > pontos_turisticos[c2])
            printf("\nVencedora: %s (mais pontos turísticos)\n", codigos[c1]);
        else
            printf("\nVencedora: %s (mais pontos turísticos)\n", codigos[c2]);

    } else if (criterio == 5) { // Densidade populacional (menor vence)
        float dens1 = populacao[c1] / area[c1];
        float dens2 = populacao[c2] / area[c2];

        if (dens1 < dens2)
            printf("\nVencedora: %s (menor densidade populacional)\n", codigos[c1]);
        else
            printf("\nVencedora: %s (menor densidade populacional)\n", codigos[c2]);

    } else {
        printf("\nCritério inválido!\n");
    }

    return 0;
}