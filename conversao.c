#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int opcao = 0, decimal=0, d=1, numDec;
    int octal=0;
    int num;
    char b[8];

    printf(" 1 - Binario para decimal\n");
    printf(" 2 - Decimal para binario\n");
    printf(" 3 - Decimal para Octal\n");
    printf(" 4 - Octal para Decimal\n");
    scanf("%d", &opcao);

        if (opcao == 1)
         {
            printf("Digite o numero binario: ");
            scanf("%d", &num);
            do
            {
                decimal = decimal + (num % 10) * d;
                d = d * 2;
                num = num / 10;
            }
            while( num != 0 );
            printf("\n");
            printf(" O numero em decimal: %d", decimal);
            printf("\n");
         }
            else if (opcao == 2)
             {
                printf("Digite um numero em decimal: ");
                scanf("%d", &numDec);
                itoa(numDec, b, 2);
                printf("\n");
                printf(" O numero %d em binario e: %s \n", numDec , b);
                printf("\n\n");
             }
                else if (opcao == 3)
                 {
                    printf("Digite um numero em decimal: ");
                    scanf("%d", &numDec);
                    itoa(numDec, b, 8);
                    printf("\n");
                    printf(" O numero %d em octal e: %s \n", numDec , b);
                    printf("\n\n");
                 }
                    else if (opcao == 4)
                        {
                            printf("Digite o numero em octal: ");
                            scanf("%d", &num);
                            do
                            {
                                octal = octal + (num % 10) * d;
                                d = d * 8;
                                num = num / 10;
                            }
                            while( num != 0 );
                            printf("\n");
                            printf(" O numero em decimal: %d", octal);
                            printf("\n");
                            }
                                else if (opcao != 1 && opcao != 2)
                                    {
                                        printf("\n --- Opcao Invalida!! ---");
                                    }
                                        else if (opcao != 3 && opcao != 4)
                                            {
                                                printf("\n --- Opcao Invalida!! ---");
                                            }
    system("PAUSE");
    return 0;
}
