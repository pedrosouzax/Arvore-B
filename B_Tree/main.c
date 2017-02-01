#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int folha; // indica se o n� � folha=1, interno=2 ou raiz=0
    int qtd_chaves; // Indica quantas chaves existem no n� para saber se ele est� cheio ou n�o
    int ordem;
    int *chave;// vetor que armazena as chaves da �rvore. Este vetor tem o tamanho da qtde de filhos -1
    struct Node** filho;// tam indica o quantos filhos a arvore pode ter, ou seja, a ordem da �rvore

}Node;


 Node* Cria_Arvore(int t)
{
    int i;
    Node *arvore;

    arvore = (Node *)(malloc(sizeof(Node)));
    arvore->chave = (int*)(malloc((t - 1) * sizeof(int)));
    arvore->filho = (Node**)(malloc(t * sizeof(Node)));

    arvore->ordem = t;// ordem da arvore

    arvore->folha = 1; // (1) � n� folha; (0) N�o � n� folha;
    arvore->qtd_chaves = 0; // N�o tem chaves no n�

    for(i = 0; i < t; i++)
    {
        arvore->filho[i] = NULL; // como a arvore acabou de ser criada os filhos est�o apondados para null
    }
    return arvore;
}

//Insere na arvore a chave que o usuario escolheu
int Insere_Chave(Node *atual_inserir, int valor_chave)
{
    if (atual_inserir->qtd_chaves == atual_inserir->ordem-1) //
    {
        printf("Vetor est� cheio. Tem que dividir");
        //Dividir(); Faz a divis�o e insere
        return 1;
    }
    else if(atual_inserir->qtd_chaves == 0)
    {
        atual_inserir->chave[0] = valor_chave;
        atual_inserir->qtd_chaves++;
    }
    else
    {
        int i =0;
        int j =0 ;

            while(atual_inserir->chave[i]< valor_chave && i< atual_inserir->qtd_chaves)// Busca a posi��o do vetor que a chave deve ser inserida
            {
                i++;
            }

            for(j = atual_inserir->qtd_chaves; j> i; j--)// Copia as chaves maiores do que a chave a ser inserida pra uma posi��o a frente, ou seja,
            {                                           // abre espa�o na posi��o certa para que o valor escolhido pelo usuario possa ser inserido
                atual_inserir->chave[j] = atual_inserir->chave[j-1];
            }
            atual_inserir->chave[i] = valor_chave;//insere a chava
            atual_inserir->qtd_chaves++;//atualiza a quantidade de chaves no n�
    }
        return 1;
}

int Busca_Na_Arvore()
{
    return 0;
}

int Busca_Para_Inserir(Node *atual_inserir, int valor_chave)
{
    if(Busca_Na_Arvore(*atual_inserir, valor_chave) == 0) // se a chave ja existe na arvore
    {
        printf("Chave j� est� presente na arvore!");
        return 0;
    }
   /* se no folha
    {
        Insere_Chave(*atual_inserir, valor_chave)
    }
    se no interno
    {
        verifica se a chave a inserir � menor ou maior que a chave atual e desce para o filho certo.

    }*/
}

int Divisao(Node *atual_inserir, int valor_chave, Node *direita, Node *no, int chave_promovida)
{
    //verificar entre os n�s atuais qual � a chave mediana (inclusive entre a chave a ser inserida)
    //inserir o valor da mediana no n� pai
    //criar no da direita da chave inserida no no pai
    // inserir os valores maiorres que achave inserida nesse no
}


int main()
{
    int tam;

    Node *teste;
    printf("Digite a ordem da arvore : ");
    scanf( "%d", &tam);


    teste = Cria_Arvore(tam);

    teste->chave[2] = 200;

    printf("%d\n",  teste->chave[2]);

    printf("%d",  teste->qtd_chaves);

    return 0;
}



