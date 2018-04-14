#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    long int numDecimal=0, quociente=0, resto=0, baseOctal=8, tamJ = 0;
    long int i=0, j=0, vetRestos[15];
    long int vetConvertido[15];
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
    printf("tamanho do tamJ %d\n\n", tamJ);

    //INVERTENDO O VETOR
    for (i; i>0; i--, j++) {
        vetConvertido[j] = vetRestos[i];
    }

    printf("Octal: ");
    for (j=0; j < tamJ ; j++) {
        printf("%d", vetConvertido[j]);
    }

//ALGORITMO PARA TRABALHAR SOMENTE COM A PARTE FRACIONARIA
float whole = 20.512;
float fracionario = whole - ((long)whole);
printf("%.3f\n\n", fracionario);

    return 0;

}
