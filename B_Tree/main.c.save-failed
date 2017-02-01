#include <stdio.h>
#include <stdlib.h>

#define tam 2

typedef struct Node
{
    int folha; // indica se o nó é folha
    int qtd_chaves; // Indica quantas chaves existem no nó para saber se ele está cheio ou não
    int chave[tam-1];// vetor que armazena as chaves da árvore. Este vetor tem o tamanho da qtde de filhos -1
    struct Node* filho[tam];// tam indica o quantos filhos a arvore pode ter, ou seja, a ordem da árvore

}Node;



 Node* Cria_Arvore(int t)
{
    int i;
    Node *arvore;

    arvore = (Node *)(malloc(sizeof(Node)));

    arvore->folha = 1; // (1) É nó folha; (0) Não é nó folha;
    arvore->qtd_chaves = 0; // Não tem chaves no nó

    for(i = 0; i < t; i++)
    {
        arvore->filho[i] = NULL; // como a arvore acabou de ser criada os filhos estão apondados para null
    }
    return arvore;

}

int main()
{
    Node *teste;
    // scanf("Digite a ordem da árvore: %d", tam);

    teste = Cria_Arvore(tam);

    printf("%d",  teste->qtd_chaves);

    return 0;
}
