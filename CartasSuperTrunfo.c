#include <stdio.h>
int main() {

    int cod;
    char nome[20];
    int populacao;
    float area;
    float pib;
    int npt;

    printf("Digite o Codigo da Cidade\n");
    scanf("%d", &cod);

    printf("Digite o Nome da Cidade\n");
    scanf("%s", &nome);

    printf("Digite o Valor Populacional\n");
    scanf("%d", &populacao);

    printf("Digite a Area Territorial\n");
    scanf("%f", &area);

    printf("Digite o PIB\n");
    scanf("%f", &pib);

    printf("Digite o Numero de Pontos Turisticos\n");
    scanf("%d", &npt);

    printf("\nDados da Cidade:\n");
    printf("Código: %d\n", cod);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f trilhões de dólares\n", pib);
    printf("Número de Pontos Turísticos: %d\n", npt);

    return 0;
}