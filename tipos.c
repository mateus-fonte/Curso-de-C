#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");
    //printf("Olá");

    //Lendo valor inteiro

    int a = 50;
    //printf("%d",a+b);
    //printf("O valor de a é: %d",a);
    printf("Digite um valor para a: ");
    scanf("%d",&a); //Responsavel pela leitura de uma variavel
    printf("\n O valor de a mudou para : %d\n", a );

    //Lendo valor com ponto flutuante
    /*Outro tipo de comentário que pode
    ocupar multiplas linhas */

    float b = 43.4;
    printf("O valor de b é: %f \n",b);
    printf("Digite um novo valor para b: \n");
    scanf("%f",&b);
    printf("O novo valor de b é: %f",b);

    //Lendo Letra
    char c = 'C';
    printf("O valor de c vale: %c \n",c);
    printf("Digite um novo valor para c: \n ");
    fflush(stdin);//Como em C não há um garbage colector, precisamos fazer o processo manual de apagar uma variavel da memoria
    scanf("%c",&c);
    printf("O novo valor de d é: %c",c);
}
