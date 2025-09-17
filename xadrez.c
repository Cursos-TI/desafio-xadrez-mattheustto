#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Mestre - Recursividade e Loops Complexos
// Neste programa, os movimentos da Torre, Bispo e Rainha foram substituídos por funções recursivas.
// O Cavalo é implementado com loops complexos (aninhados, múltiplas variáveis e condições).
// O Bispo também é implementado com recursão + loops aninhados para reforçar a lógica diagonal.

// -------------------------------
// Função Recursiva - Torre
// Move a torre em linha reta horizontal (direita)
// -------------------------------
void moverTorre(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// -------------------------------
// Função Recursiva - Rainha
// Move a rainha em linha reta horizontal (esquerda)
// -------------------------------
void moverRainha(int casas) {
    if (casas == 0) return; // condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// -------------------------------
// Função Recursiva + Loops Aninhados - Bispo
// Move o bispo em diagonal (cima e direita)
// -------------------------------
void moverBispo(int casas) {
    if (casas == 0) return; // condição de parada

    // Loop externo -> movimento vertical
    for (int v = 1; v <= 1; v++) {
        // Loop interno -> movimento horizontal
        for (int h = 1; h <= 1; h++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

// -------------------------------
// Movimento do Cavalo com loops complexos
// O Cavalo vai se mover em "L": 2 para cima e 1 para a direita
// -------------------------------
void moverCavalo() {
    int movVertical = 2;   // duas casas para cima
    int movHorizontal = 1; // uma casa para direita

    // Loop externo controla movimento vertical
    for (int i = 1, j = movVertical; i <= movVertical; i++, j--) {
        // condição extra só para mostrar como usar continue/break
        if (i == 0) continue; 
        printf("Cima\n");

        // Quando chegar na última casa vertical, ativar o movimento horizontal
        if (i == movVertical) {
            int k = 1;
            while (k <= movHorizontal) {
                printf("Direita\n");
                if (k == movHorizontal) break; // encerra o loop interno
                k++;
            }
        }
    }
}

// -------------------------------
// Função principal
// -------------------------------
int main() {
    // Constantes para número de casas
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;

    // -------------------------
    // Torre (recursão)
    // -------------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // -------------------------
    // Bispo (recursão + loops aninhados)
    // -------------------------
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    // -------------------------
    // Rainha (recursão)
    // -------------------------
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // -------------------------
    // Cavalo (loops complexos)
    // -------------------------
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}
