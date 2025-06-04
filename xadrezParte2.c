#include <stdio.h>

int main(){

    //Define o número de casas para cada peça se mover
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;
    

    //Simulação do movimento da Torre (usando for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n"); // A Torre se move para a direita
    }
    printf("\n"); // Adiciona uma linha em branco para separar os movimentos

    // Simulação do movimento do Bispo (usando while)
    printf("Movimento do Bispo:\n");
    int contador_bispo = 0;
    while (contador_bispo < casas_bispo) {
        printf("Cima, Direita\n"); // O Bispo se move na diagonal para cima e à direita
        contador_bispo++;
    }
    printf("\n"); // Adiciona uma linha em branco para separar os movimentos

    // Simulação do movimento da Rainha (usando do-while)
    printf("Movimento da Rainha:\n");
    int contador_rainha = 0;
    if (casas_rainha > 0) { // Garante que o loop execute pelo menos uma vez se casas_rainha > 0
        do {
            printf("Esquerda\n"); // A Rainha se move para a esquerda
            contador_rainha++;
        } while (contador_rainha < casas_rainha);
    }
    printf("\n"); // Adiciona uma linha em branco para separar os movimentos

    printf("Movimento do Cavalo:\n");
    // O Cavalo se move duas casas para baixo e uma para a esquerda.

    // Loop externo para representar um único movimento em "L" do Cavalo.
    // Ele executa apenas uma vez neste caso.
    for (int movimento_L = 0; movimento_L < 1; movimento_L++) {
        // Parte 1 do movimento em "L": Mover 2 casas para baixo
        // Loop interno para as casas para baixo
        for (int i = 0; i < 2; i++) {
            printf("Baixo\n");
        }

        // Parte 2 do movimento em "L": Mover 1 casa para a esquerda
        // Loop interno para a casa para a esquerda
        for (int i = 0; i < 1; i++) {
            printf("Esquerda\n");
        }
    }
    printf("\n");

    return 0; // Indica que o programa terminou com sucesso
}
