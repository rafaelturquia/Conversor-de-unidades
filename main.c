#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int numDecimal=0, quociente=0, resto=0, baseOctal=8, tamJ = 0;
    int i=0, j=0, vetRestos[i];
    int vetInvertido[tamJ];
    printf("Digite o numero decimal: ");
    scanf("%d", &numDecimal);
    while (numDecimal > 0) {
        i++;
        resto = fmod(numDecimal, baseOctal);
        vetRestos[i] = resto;
        numDecimal /= baseOctal;
        numDecimal = trunc(numDecimal);
        printf("%d\n", resto);
    }
    tamJ = i;
    printf("tamanho do vetor i %d\n\n", tamJ);

    while (i>0) {
        vetRestos[i] = vetInvertido[j];
        printf("\n\nvij %d\n\n", vetInvertido[j]);
        i--;
        j++;
    }
    printf("tamanho j %d", j);
    printf("Vetor invertido: ");
    for (j=1;j < tamJ; j++) {
        printf("%d", vetInvertido[j]);
    }
    return 0;
}
