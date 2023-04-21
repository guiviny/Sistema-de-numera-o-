#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void octalParaBinario(int oct){
    char hex[30];
    int decimal = 0, i = 0;

    while (oct != 0) {
        decimal += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }

    itoa(decimal,hex,2);
    printf("O numero em BINARIO e: %s\n", hex);

}

void octalParaDecimal(int oct){
    int decimal = 0, i = 0;

    while (oct != 0) {
        decimal += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }
    printf("O numero em DECIMAL e: %d\n", decimal);

}

void octalParaHexadecimal(int oct){
    char hex[30];
    int decimal = 0, i = 0;

    while (oct != 0) {
        decimal += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }

    itoa(decimal,hex,16);
    printf("O numero em HEXADECIMAL e: %s\n", hex);


}

void dcimal(int numero){
opcoesDecimais();
int base;
char resultado[30];

printf("\nDigite a base numerica que deseja para converter o numero %i:",numero);
scanf("%i",&base);

itoa(numero,resultado,base);
 printf("\n**************************************");
printf("\nResultado da conversao: %s",resultado);
 printf("\n**************************************\n");
}

void binarioParaDecimal(int valor){

    int decimal = 0, i = 0, rem;

    while (valor > 0) {
        rem = valor % 10;
        decimal += rem * pow(2, i);
        valor /= 10;
        i++;
    }
    printf("\n**************************************\n");
    printf("Resultado de BINARIOS para DECIMAL: %i",decimal);
    printf("\n**************************************\n");
}

void binarioParaHexadecimal(int valor){
    char resultado[30];
    int decimal = 0, i = 0, rem;

    while (valor > 0) {
        rem = valor % 10;
        decimal += rem * pow(2, i);
        valor /= 10;
        i++;
    }
    itoa(decimal, resultado, 16);
    printf("\n**************************************\n");
    printf("Resultado de BINARIOS para DECIMAL: %s",resultado);
    printf("\n**************************************\n");
}

void binarioParaOctal(int valor){
    char resultado[30];
    int decimal = 0, i = 0, rem;

    while (valor > 0) {
        rem = valor % 10;
        decimal += rem * pow(2, i);
        valor /= 10;
        i++;
    }
    itoa(decimal, resultado, 8);
    printf("\n**************************************\n");
    printf("Resultado de BINARIOS para DECIMAL: %s",resultado);
    printf("\n**************************************\n");
}

void opcoes(){
printf("1) Conversao de DECIMAL para QUALQUER OUTRA BASE NUMERICA.\n");
printf("2) BINARIO para DECIMAL. \n");
printf("3) BINARIO para HEXADECIMAL. \n");
printf("4) BINARIO para OCTAL.\n");
printf("5) OCTAL para DECIMAL.\n");
printf("6) OCTAL para HEXADECIMAL.\n");
printf("7) OCTAL para BINARIO.\n");
}

void opcoesDecimais(){

printf("*****EXEMPLOS DE BASES NUMERICAS***** \n");
printf("DIGITE: 16 para HEXADECIMAL, 8 OCTAL, 2 BINARIO.\n");
}


int main(){
    int valor,escolha,base;
    char resultado[30];

    printf("Digite o valor que deseja conevrter: ");
    scanf("%i",&valor);

    opcoes();

    printf("Digite a opcao a ser convertido: ");
    scanf("%i",&escolha);

    switch(escolha){
        case 1:
        dcimal(valor);
        break;

        case 2:
        binarioParaDecimal(valor);
        break;

        case 3:
        binarioParaHexadecimal(valor);
        break;

        case 4:
        binarioParaOctal(valor);
        break;

        case 5:
        octalParaDecimal(valor);
        break;

        case 6:
        octalParaHexadecimal(valor);
        break;

        case 7:
        octalParaBinario(valor);
        break;

    }
}
