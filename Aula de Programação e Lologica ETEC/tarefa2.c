#include <stdio.h>
#include <string.h>

void main(){

    int cargo;
    float salario;
    float resultado;

    printf("Informe o codigo do seu cargo\n \n1 Auxiliar de escritorio \n2 Secretario(a)   \n3 Cozinheiro(a)   \n4 Entregador(a)    \n\ncargo: ");
    scanf("%d", &cargo);
    printf("Informe seu salario: ");
    scanf("%f", &salario);

    if(cargo == 1){
        resultado = 0;
        resultado = salario * 1.07;
        printf("Seu salario recebeu um reajuste de 1.07, o valor reajustado eh: %.2f", resultado);
        printf("\n");
    }
    if(cargo == 2){
        resultado = 0;
        resultado = salario * 1.09;
        printf("Seu salario  recebeu um reajuste de 1.09, o valor reajustado eh: %.2f", resultado);
        printf("\n");
    }
    if(cargo == 3){
        resultado = 0;
        resultado = salario * 1.05;
        printf("Seu salario  recebeu um reajuste de 1.05, o valor reajustado eh: %.2f", resultado);
        printf("\n");
    }
    if(cargo == 4){
        resultado = 0;
        resultado = salario * 1.12;
        printf("Seu salario  recebeu um reajuste de 1.12, o valor reajustado eh: %.2f", resultado);
        printf("\n");
    }

    system("pause");
}
