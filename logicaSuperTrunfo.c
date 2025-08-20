#include <stdio.h>



int main() {

    char estado1, estado2;
    char codigocarta1[5], codigocarta2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    int NumpontosTuristicos1, NumpontosTuristicos2;
    float area1, area2;
    float pib1, pib2;
    float DensidadePopulacional1, DensidadePopulacional2;
    float pibpercapita1, pibpercapita2;
    float SuperPoder1, SuperPoder2;
    
    // CADASTRO DAS CARTAS

    printf("JOGO SUPER TRUNFO!\n");
    printf("\n");
    printf("CARTA 1\n");
    printf("\n");

    printf("Digite o Estado(Inicial):");
    scanf(" %c", &estado1);
    
    printf("Digite o Código da Carta:");
    scanf("%s", codigocarta1);

    printf("Digite o Nome da Cidade:");
    scanf("%s", cidade1);

    printf("Digite o Número de Pontos Turisticos:");
    scanf("%d", &NumpontosTuristicos1);

    printf("Digite a População:");
    scanf("%d", &populacao1);

    printf("Digite a Área:");
    scanf("%f", &area1);

    printf("Digite o PIB:");
    scanf("%f", &pib1);

    DensidadePopulacional1 = (populacao1 / area1);
    pibpercapita1 = (pib1 / (float)populacao1);
    SuperPoder1 = (populacao1 + area1 + NumpontosTuristicos1 + pibpercapita1 + (1.0 / DensidadePopulacional1));

    printf("\n");

    printf("CARTA 2\n");
    printf("\n");

    printf("Digite o Estado(Inicial):");
    scanf(" %c", &estado2);
    
    printf("Digite o Código da Carta:");
    scanf("%s", codigocarta2);

    printf("Digite o Nome da Cidade:");
    scanf("%s", cidade2);

    printf("Digite o Número de Pontos Turisticos:");
    scanf("%d", &NumpontosTuristicos2);

    printf("Digite a População:");
    scanf("%d", &populacao2);

    printf("Digite a Área:");
    scanf("%f", &area2);

    printf("Digite o PIB:");
    scanf("%f", &pib2);

    DensidadePopulacional2 = (populacao2 / area2);
    pibpercapita2 = (pib2 / (float)populacao2);
    SuperPoder2 = (populacao2 + area2 + NumpontosTuristicos2 + pibpercapita2 + (1.0 / DensidadePopulacional2));

    printf("\n");

    printf("DADOS CARTA 1:\n");
    printf("\n");

    printf("Estado:%c\n", estado1);
    printf("Código da Carta:%s\n", codigocarta1);
    printf("Nome da Cidade:%s\n", cidade1);
    printf("Número de Pontos Turisticos:%d\n", NumpontosTuristicos1);
    printf("População:%d\n", populacao1);
    printf("Área:%.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Densidade Populacional:%.2f\n", DensidadePopulacional1);
    printf("PIB per Capita:%f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf("\n");

    printf("DADOS CARTA 2:\n");
    printf("\n");

    printf("Estado:%c\n", estado2);
    printf("Código da Carta:%s\n", codigocarta2);
    printf("Nome da Cidade:%s\n", cidade2);
    printf("Número de Pontos Turisticos:%d\n", NumpontosTuristicos2);
    printf("População:%d\n", populacao2);
    printf("Área:%.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Densidade Populacional:%.2f\n", DensidadePopulacional2);
    printf("PIB per Capita:%f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // COMPARAÇÃO DAS CARTAS

    printf("\n");
    printf("COMPARAÇÃO DAS CARTAS!\n");
    printf("\n");

    //NÚMERO DE PONTOS TURISTICOS

    if(NumpontosTuristicos1 > NumpontosTuristicos2){
        printf("%s (Carta 1) tem a maior quantidade de Números de Pontos Turisticos! VENCEDOR!!\n", cidade1);
    }else{
        printf("%s (Carta 2) tem a maior quantidade de Números de Pontos Turisticos! VENCEDOR!!\n", cidade2);
    }

    //POPULAÇÃO

    if(populacao1 > populacao2){
        printf("%s (Carta 1) tem a maior população! VENCEDOR!!\n", cidade1);
    }else{
        printf("%s (Carta 2) tem a maior população! VENCEDOR!!\n", cidade2);
    }

    //ÁREA

    if(area1 > area2){
        printf("%s (Carta 1) tem a maior área! VENCEDOR!!\n", cidade1);
    }else{
        printf("%s (Carta 2) tem a maior área! VENCEDOR!!\n", cidade2);
    }

    //PIB

    if(pib1 > pib2){
        printf("%s (Carta 1) tem o maior PIB! VENCEDOR!!\n", cidade1);
    }else{
        printf("%s (Carta 2) tem o maior PIB! VENCEDOR!!\n", cidade2);
    }

    //DENSIDADE POPULACIONAL

    if(DensidadePopulacional1 < DensidadePopulacional2){
        printf("%s (Carta 1) tem a menor Densidade Populacional! VENCEDOR!!\n", cidade1);
    }else{
        printf("%s (Carta 2) tem a menor Densidade Populacional! VENCEDOR!!\n", cidade2);
    }

    // PIB PER CAPITA

    if(pibpercapita1 > pibpercapita2){
        printf("%s (Carta 1) tem o maior PIB per Capita! VENCEDOR!!\n", cidade1);
    }else{
        printf("%s (Carta 2) tem o maior PIB per Capita! VENCEDOR!!\n", cidade2);
    }

    if(SuperPoder1 > SuperPoder2){
        printf("%s (Carta 1) tem o maior Super Poder! VENCEDOR!!\n", cidade1);
    }else{
        printf("%s (Carta 2) tem o maior Super Poder! VENCEDOR!!\n", cidade2);
    }


    return 0;
}
