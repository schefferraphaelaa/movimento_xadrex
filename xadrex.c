#include <stdio.h>

// =============================================================
// 🧱 Funções recursivas
// =============================================================

// TORRE → 5 casas para a direita
void moverTorre(int casas) {
    if (casas == 0) return;  // Condição de parada
    printf("Direita\n");
    moverTorre(casas - 1);   // Chamada recursiva
}

// BISPO → 5 casas na diagonal (cima, direita)
void moverBispo(int casas) {
    if (casas == 0) return;  // Condição de parada
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// RAINHA → 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverCavalo() {
    printf("Movimento do CAVALO (loops aninhados):\n");

    for (int i = 1; i <= 2; i++) { // movimento para baixo (duas casas)
        int j = 1;
        while (j <= 2) { // loop para verificar a coluna
            if (i == 2 && j == 2) {
                // posição final do L (para a esquerda)
                printf("Esquerda\n");
                break; // encerra o loop interno
            }

            // caso contrário, ainda está descendo
            printf("Baixo\n");
            j++;

            // exemplo de continue (pular algo se quiser ignorar)
            if (j > 2) continue;
        }
    }
}

// =============================================================
// 🏁 Função principal
// =============================================================
int main() {

    printf("=== MOVIMENTAÇÃO DAS PEÇAS DO XADREZ ===\n\n");

    printf("Movimento da TORRE (recursão):\n");
    moverTorre(5);
    printf("\n");

    printf("Movimento do BISPO (recursão):\n");
    moverBispo(5);
    printf("\n");

    printf("Movimento da RAINHA (recursão):\n");
    moverRainha(8);
    printf("\n");

    moverCavalo();  // loops aninhados
    printf("\n");

    printf("Simulação concluída com sucesso!\n");

    return 0;
}

