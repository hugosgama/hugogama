#include <stdio.h>

// Função para verificar se um número é par ou ímpar
int verificaPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    int numInicial, numFinal;
    int contadorPar = 0;

    // Entrada dos números inicial e final
    printf("Digite o número inicial: ");
    scanf("%d", &numInicial);
    printf("Digite o número final: ");
    scanf("%d", &numFinal);

    // Estrutura de repetição para percorrer o intervalo
    for (int i = numInicial; i <= numFinal; i++) {
        if (verificaPar(i)) {
            printf("Número %d é par\n", i);
            contadorPar++;  // Incrementa o contador de números pares
        } else {
            printf("Número %d é ímpar\n", i);
        }
    }

    // Exibição da quantidade total de números pares encontrados
    printf("Quantidade total de números pares: %d\n", contadorPar);

    return 0;
}
