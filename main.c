#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int numDecimal=0, quociente=0, resto=0, baseOctal=8;
    int i=0, j=0, vetRestos[i], vetInvertido[i];
    printf("Digite o numero decimal: ");
    scanf("%d", &numDecimal);
    while (numDecimal != 0) {
        i++;
        resto = fmod(numDecimal, baseOctal);
        printf("%d\n", resto);
        vetRestos[i] = resto;
        numDecimal /= baseOctal;
        numDecimal = trunc(numDecimal);
    }
    printf("tamanho do vetor %d", i);
    for (j=0; i!=0; i--, j++) {
        vetRestos[i] = vetInvertido[j];
        printf("%d", vetInvertido[j]);
    }
    return 0;
}
