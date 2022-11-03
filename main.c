#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "biblioteca.h"
////////////////////////////////////////////////////////Main///////////////////////////////////////////////////////////////////////////
int main()
{
    int r = '10';
    int dado = 10, remove = 0, pos = 0;
    char string[31];
    Lista *l1 = (Lista *)malloc(sizeof(Lista));
    No *removido;
    lista_inicializa(l1);
    while (r != 11)
    {
        limpa_tela();
        printf("Teste das funcoes: \n");                                                  // feito
        printf("1 - Verificar lista vazia\n");                                            // feito
        printf("2 - inserir o elemento no inicio\n");                                     // feito
        printf("3 - Inserir em posicao\n");                                               // feito
        printf("4 - Inserir no final\n");                                                 // feito
        printf("5 - Remover no inicio\n");                                                // feito
        printf("6 - Remove elemento em posicao\n");                                       // feito
        printf("7 - Verificar Tamanho\n");                                                // feito
        printf("8 - Maior: retorna o maior elemento da lista (removendo-o da lista).\n"); // feito
        printf("9 - Imprimir Lista\n");                                                   // feito
        printf("10 - imprimir ordenado\n");                                               // feito
        printf("11 - Finalizar Lista\n");                                                 // feito
        scanf("%d", &r);
        fflush(stdin);
        switch (r)
        {
        case 1:
            if (lista_vazia(l1) == 0)
            {
                printf("\nLista nao esta vazia\n");
            }
            else
            {
                printf("\nLista esta vazia\n");
            }
            printf("\n");
            printf("Pressione para continuar.");
            getch();
            break;

        case 2:
            printf("Digite um numero para ser inserido ");
            scanf(" %d", &dado);
            fflush(stdin);
            printf("Digite uma string para ser inserida ");
            fgets(string, 31, stdin);
            lista_inserir_inicio(l1, dado, string);
            printf("\n numero inserido com sucesso!\n");
            printf("Pressione para continuar.");
            getch();
            fflush(stdin);
            break;

        case 3:
            printf("Digite um numero para ser inserido ");
            scanf("%d", &dado);
            fflush(stdin);
            printf("Digite uma string para ser inserida ");
            fgets(string, 31, stdin);
            printf("\ndigite uma posicao a ser inserido: \n");
            scanf("%d", &pos);
            lista_inserir_posicao(l1, dado, pos, string);
            printf("Pressione para continuar.");
            getch();
            break;

        case 4:
            printf("Digite um numero para ser inserido ");
            scanf("%d", &dado);
            fflush(stdin);
            printf("Digite uma string para ser inserida ");
            fgets(string, 31, stdin);
            lista_inserir_final(l1, dado, string);
            printf("\n numero inserido com sucesso!\n");
            printf("Pressione para continuar.");
            getch();
            break;

        case 5:
            removido = lista_remover_primeiro(l1);

            if (removido)
            {
                printf("\n Removido com sucesso\n");
                free(removido);
            }
            else
            {
                printf("Lista vazia\n");
            }
            printf("Pressione para continuar.");
            getch();
            break;

        case 6:
            printf("digite uma posicao a ser removido: \n");
            scanf("%d", &pos);
            removido = lista_remover_posicao(l1, pos);

            if (removido)
            {
                printf("\n Removido com sucesso\n");
                free(removido);
            }
            else
            {
                printf("Inexistente");
            }
            printf("Pressione para continuar.");
            getch();
            break;

        case 7:
            printf("\nTamanho : %d\n", l1->tam);
            printf("Pressione para continuar.");
            getch();
            break;

        case 8:
            remove = lista_remover_maior(l1);
            printf("\nMaior : %d\n", remove);
            printf("Pressione para continuar.");
            getch();
            break;

        case 9:
            lista_imprimir(l1);
            printf("\n");
            printf("Pressione para continuar.");
            getch();
            break;
            
        case 10:
            lista_imprimir_ordenado(l1);
            printf("\n");
            printf("Pressione para continuar.");
            getch();
            break;
            
        case 11:
            lista_liberar(l1);
            printf("\n");
            printf("Sua lista foi liberada, Obrigado!");
            break;
        }
    }
}
