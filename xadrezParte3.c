#include <stdio.h>

void movimentoTorre(int casasTorre){
    // Condição de parada da recursão: se não há mais casas para "mover", a função retorna.
    if(casasTorre == 0){
        return;
    }
    printf("Direita\n"); // Imprime "Direita" para simular um movimento.
    // Chama a função recursivamente, decrementando o número de casas.
    // Isso faz com que a função se chame repetidamente até 'casasTorre' ser 0.
    movimentoTorre(casasTorre -1);
}


void movimentoBispo(int casasBispo){

    // Condição de parada da recursão.
    if(casasBispo == 0){
        // Estes laços são executados apenas na última chamada recursiva (quando casasBispo é 0).
        // O loop externo itera 5 vezes.
        for (int casasBispo = 0; casasBispo < 5; casasBispo++) {
            // O loop interno itera 1 vez, imprimindo "Esquerda".
            for (int j = 0; j < 1; j++) {
            printf("Esquerda\n");
            }
        printf("Baixo\n"); // Imprime "Baixo" após cada "Esquerda" gerado pelo loop interno.
        }
        return; // Retorna após a execução dos loops.
    }
    // Chama a função recursivamente, decrementando o número de casas.
    movimentoBispo(casasBispo -1);
    printf("\n"); // Imprime uma nova linha após cada chamada recursiva (exceto a última que entra no for).
}


void movimentoRainha(int casasRainha){

    // Condição de parada da recursão: se não há mais casas para "mover", a função retorna.
    if(casasRainha == 0){
        return;
    }
    printf("Esquerda\n"); // Imprime "Esquerda" para simular um movimento.
    // Chama a função recursivamente, decrementando o número de casas.
    movimentoRainha(casasRainha -1);
}

int main(){

    int casasRainha = 8; // Define o número de "casas" para a Rainha.
    int casasBispo = 5;  // Define o número de "casas" para o Bispo.
    int casasTorre = 5;  // Define o número de "casas" para a Torre.

    // --- Movimentação da Torre ---
    printf("--- Movimentando a Torre ---\n"); // Cabeçalho para a saída da Torre.
    movimentoTorre(casasTorre);            // Chama a função que simula o movimento da torre.
    printf("\n");                          

    // --- Movimentação do Bispo ---
    printf("--- Movimentando o Bispo ---\n"); // Cabeçalho para a saída do Bispo.
    movimentoBispo(casasBispo);            // Chama a função que simula o movimento do bispo.
    printf("\n");                          

    // --- Movimentação da Rainha ---
    printf("--- Movimentando a Rainha ---\n"); // Cabeçalho para a saída da Rainha.
    movimentoRainha(casasRainha);          // Chama a função que simula o movimento da rainha.
    printf("\n");                          

    // SEÇÃO PARA O CAVALO: Implementada com loops, não com recursão como as outras peças.
    printf("Movimento do Cavalo:\n"); // Cabeçalho para a saída do Cavalo.

    // Loop externo que itera 2 vezes.
    for (int i = 1 ; i <= 2; i++) {
        // Loop interno que itera apenas 1 vez.
        for (int j = 1; j <= 1; j++) {
            // A condição 'j % 2 != 0' sempre será verdadeira, pois 'j' é sempre 1.
            // Isso garante que "Cima" será impresso duas vezes (uma para cada iteração de 'i').
            if (j % 2 != 0) {
                printf("Cima\n"); // Imprime "Cima".
            }
        }
    }
    printf("Direita\n"); // Imprime "Direita" após os loops do cavalo.

    return 0;
}