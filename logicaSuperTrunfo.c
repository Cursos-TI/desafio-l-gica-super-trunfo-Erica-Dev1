#include <stdio.h>

int main()
{

    // Cadastro carta 1
    int opcao1, opcao2;
    char nomeCidade1[50] = "Osasco";
    int populacao1 = 1230000;
    float area1 = 300.0;
    float pib1 = 29303.0; // bilhões
    int pontos1 = 40;
    // Calculo de desidade e pib per capita.
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Cadastro carta 2
    char nomeCidade2[50] = "Fortaleza";
    int populacao2 = 6009000;
    float area2 = 239.3;
    float pib2 = 2389.932;
    int pontos2 = 50;
    // Calculo de desidade e pib per capita.
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Menu interativo e escolha do primeiro atributo.
    printf(">>> JOGO SUPER TRUNFO <<<\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área km²\n");
    printf("3. PIB\n");
    printf("4. Numero de pontos turisticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PibperCapita\n");
    // Entrada do numero escolhido e saída.
    printf("Digite o numero escolhido:\n");
    scanf("%d", &opcao1);

    // Segundo atributo (sem o numero escolhido anteriormente)
    // Menu interativo usando o switch, entrada e saída de dados.
    printf("Escolha o segundo atributo (não pode ser %d):\n", opcao1);
    for (int i = 1; i <= 6; i++)
    {
        if (i != opcao1)
        {
            switch (i)
            {
            case 1:
                printf("1. População\n");
                break;
            case 2:
                printf("2. Área km²\n");
                break;
            case 3:
                printf("3. PIB\n");
                break;
            case 4:
                printf("4. Pontos Turísticos\n");
                break;
            case 5:
                printf("5. Densidade Populacional\n");
                break;
            case 6:
                printf("6. PIB per Capita\n");
                break;
            }
        }
    }
    scanf("%d", &opcao2);
    // Mensagem de erro.
    if (opcao2 == opcao1)
    {
        printf("Erro: você escolheu o mesmo atributo duas vezes!\n");
        return 0;
    }

    // Valores das cartas para os atributos escolhidos opção 1.
    float valor1Carta1, valor2Carta1, valor1Carta2, valor2Carta2;

    switch (opcao1)
    {
    case 1:
        valor1Carta1 = populacao1;
        valor1Carta2 = populacao2;
        break;
    case 2:
        valor1Carta1 = area1;
        valor1Carta2 = area2;
        break;
    case 3:
        valor1Carta1 = pib1;
        valor1Carta2 = pib2;
        break;
    case 4:
        valor1Carta1 = pontos1;
        valor1Carta2 = pontos2;
        break;
    case 5:
        valor1Carta1 = densidade1;
        valor1Carta2 = densidade2;
        break;
    case 6:
        valor1Carta1 = pibPerCapita1;
        valor1Carta2 = pibPerCapita2;
        break;
    }
    // Valores das cartas para os atributos escolhidos opção 2.
    switch (opcao2)
    {
    case 1:
        valor2Carta1 = populacao1;
        valor2Carta2 = populacao2;
        break;
    case 2:
        valor2Carta1 = area1;
        valor2Carta2 = area2;
        break;
    case 3:
        valor2Carta1 = pib1;
        valor2Carta2 = pib2;
        break;
    case 4:
        valor2Carta1 = pontos1;
        valor2Carta2 = pontos2;
        break;
    case 5:
        valor2Carta1 = densidade1;
        valor2Carta2 = densidade2;
        break;
    case 6:
        valor2Carta1 = pibPerCapita1;
        valor2Carta2 = pibPerCapita2;
        break;
    }

    // Comparação individual dos atributos
    printf("\nComparação dos atributos:\n");
    for (int i = 0; i < 2; i++)
    {
        int atributo = (i == 0) ? opcao1 : opcao2;
        float valorCarta1 = (i == 0) ? valor1Carta1 : valor2Carta1;
        float valorCarta2 = (i == 0) ? valor1Carta2 : valor2Carta2;
        // switch com saida de dados, com a opção escolhida
        switch (atributo)
        {
        case 1:
            printf("\nPopulação:\n");
            break;
        case 2:
            printf("\nÁrea km²:\n");
            break;
        case 3:
            printf("\nPIB:\n");
            break;
        case 4:
            printf("\nPontos Turísticos:\n");
            break;
        case 5:
            printf("\nDensidade Populacional:\n");
            break;
        case 6:
            printf("\nPIB per Capita:\n");
            break;
        }
        printf("%s: %.2f\n%s: %.2f\n", nomeCidade1, valorCarta1, nomeCidade2, valorCarta2);
        //Esse seria para densidade o valor menor vence
        if (atributo == 5)
        { 
            if (valorCarta1 < valorCarta2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (valorCarta2 < valorCarta1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
        }
        else
        { 
            if (valorCarta1 > valorCarta2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (valorCarta2 > valorCarta1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
        }
    }

    // Soma dos atributos
    float soma1 = valor1Carta1 + valor2Carta1;
    float soma2 = valor1Carta2 + valor2Carta2;

    printf("\nSoma dos atributos:\n%s: %.2f\n%s: %.2f\n", nomeCidade1, soma1, nomeCidade2, soma2);

    // Resultado final
    (soma1 > soma2) ? printf("\nResultado final: %s venceu a rodada!\n", nomeCidade1) : (soma2 > soma1) ? printf("\nResultado final: %s venceu a rodada!\n", nomeCidade2)
                                                                                                        : printf("\nEmpate!\n");

    return 0;
}
