#include<stdio.h> //Biblioteca de entrada/saída por periférico padrão
#include<conio.h> //Biblioteca para manipulação de caracteres
#include<stdlib.h> //Biblioteca padrão para o uso de funções do sistema
int main (){ //Programa Principal
    int total, susp, mort, conf;
    //Inicio de lógica de Programação
    printf("Preencha com as seguintes informacoes sobre a Dengue em Sao Paulo: \n\n");
    printf("\tCasos Suspeitos: ");
    scanf("%d", &susp);
    printf("\tCasos Confirmados: ");
    scanf("%d", &conf);
    printf("\tQuantidade de Mortes: ");
    scanf("%d", &mort);
    //Apresentação de resultados
    printf("\nInformacao sobre a dengue em Sao Paulo: \n");
    printf("\tCasos Suspeitos: %d\n", susp);
    printf("\tCasos Confirmados: %d\n", conf);
    printf("\tQuantidade de Mortes: %d\n", mort);
    total=susp+conf+mort;
    printf("\n\tTotal de dados: %d\n\n", total);

    getch(); //Função que aguarda o recebimento de um caracter via teclado.

}