#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float numDecimal, numOctal;
    printf("CONVERSOR DE UNIDADES\nSelecione uma opcao abaixo:\n");
    printf("1 - Converter um numero decimal para binario.\n");
    printf("2 - Converter um numero binario para decimal.\n");
    printf("3 - Converter um numero decimal para octal.\n");
    printf("4 - Converter um numero octal para decimal.\n");
    scanf("%d", &opcao);
        system("cls");
    switch (opcao)
    {
    case 1:
        printf("--Decimal para Binario--\n\n");
        break;

    case 2:
        printf("--Binario para Decimal--\n\n");
        break;

    case 3:
        printf("--Decimal para Octal--\n\n");
        printf("Digite o numero para ser convertido: ");
        scanf("%f", &numDecimal);

        break;

    case 4:
        printf("--Octal para Decimal--\n\n");
        break;
    }
    printf("Hello world!\n");
    return 0;
}
