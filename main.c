#include <stdio.h>
#include <stdlib.h>

int intervalo(int start, int stop);

int intervalo(int start, int stop)
{
    int s = 0, i;

    for(i = start + 1; i < stop; i++)
        s = s + i;

    return s;
}
int main()
{
    int resultado, start, stop, opcao;

    do
    {
        printf("\n===MENU===\n");
        printf("\n(1) - Testar intervalo [START, STOP]");
        printf("\n(0) - Sair do programa");
        printf("\nO que deseja? ");
        scanf("%i", &opcao);

        if(opcao == 1)
        {
            printf("Digite o numero do START: \n");
            scanf("%i", &start);
            printf("Digite o numero do STOP: \n");
            scanf("%i", &stop);

            if(start <= 0)
            {
                printf("\nERRO: O valor(START) deve ser maior que 0. Tente novamente.");
                break;
            }
            else if(stop <= 0)
            {
                printf("\nERRO: O valor(STOP) deve ser maior que 0. Tente novamente.");
                break;
            }
            else if(stop <= start)
            {
                printf("\nERRO: STOP DEVE SER MAIOR QUE START!!!");
                break;
            }

            else
            {
                resultado = intervalo(start, stop);
                printf("\nResultado da Soma do Intervslo [START, STOP]: %i", resultado);
            }
        }

        else if(opcao == 0)
            printf("Encerrando programa...\n");

        else
            printf("ERRO: opcao invalida. Tente novamente!");
    }
    while(opcao != 0);
    return 0;
}
