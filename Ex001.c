#include<stdio.h> //Biblioteca de entrada/saída por periféricos padrão
#include<conio.h> //Biblioteca para manipulação de caracteres
#include<stdlib.h> //Biblioteca padrão para uso de funções do sistema
int main(){ //Programa principal
    //Declaração de variáveis
    int num_alunos, num_alunas;
    //Inicio da lógica de programação
    printf("Digite o numero de alunos: "); //Inicio de intereção
    scanf("%d", &num_alunos); /*Recebe o dado com a função scanf do tipo inteiro
identificado por %d que será armazenado no espaço reservado para num_alunos, 
&num_alunos*/
    printf("Digite o numero de alunas: "); //Segunda impressão
    scanf("%d", &num_alunas); /*Recebe o dado com a função scanf do tipo inteiro
identificado por %d que será armazenado no espaço reservado para num_alunos, &num_alunos*/
    printf("\nO numero de alunos: %d\n", num_alunos); //Apresentação de resultados
    printf("O numero de alunas: %d", num_alunas);
    getch(); //Função que aguarda o recebimento de um caracter via teclado
}