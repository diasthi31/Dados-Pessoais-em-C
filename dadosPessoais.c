#include <stdio.h>

typedef struct {
    char nome[100];
    int idade;
    double peso;
    double altura;
} tipoPessoa;

int main() {
    int i, entrada;
    tipoPessoa pessoa[3];
    
    printf("Deseja inserir quantas pessoas? ");
    scanf("%i", &entrada);
    
    for(i=0; i<entrada; i++) {
        printf("Insira os dados(%i):\n", i+1);
        printf("Nome: ");
        scanf("%s", pessoa[i].nome);
        printf("Idade: ");
        scanf("%i", &pessoa[i].idade);
        printf("Peso: ");
        scanf("%lf", &pessoa[i].peso);
        printf("Altura: ");
        scanf("%lf", &pessoa[i].altura);
        printf("\033[2J\033[1;1H");
    }
    
    for(i=0; i<entrada; i++) {
        printf("Dados pessoa(%i):\n", i+1);
        printf("Nome  : %s\n", pessoa[i].nome);
        printf("Idade : %i\n", pessoa[i].idade);
        printf("Peso  : %.2lf\n", pessoa[i].peso);
        printf("Altura: %.2lf\n", pessoa[i].altura);
        printf("-----------------------\n");
    }
    
    return 0;
}