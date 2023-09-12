#include <stdio.h>
#include <string.h>

char nome[50];
int idade;
float peso;
int resfriado;
int alimentado;


void main(){

    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Infome seu peso: ");
    scanf("%f", &peso);
    printf("Infome sua idade: ");
    scanf("%d", &idade);
    printf("Voce esta alimentado? responda 1 para sim ou 0 para nao: ");
    scanf("%d", &alimentado);
    printf("Voce esta resfriado? responda 1 para sim ou 0 para nao: ");
    scanf("%d", &resfriado);

    if(idade > 16 && idade < 69 && peso > 50 && alimentado == 1 && resfriado == 0){
        printf("\n %s voce esta apto a doar", nome);
        printf("\n");
    }else{
        printf("\n %s voce nao esta apto a doar ", nome);
        printf("\n");
        }

     system("pause");
}
