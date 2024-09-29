#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

//esse codigo foi para testes!

double fxb(int x, double b){

    double a0 = 186752;
    double a1 = -148235;
    double a2 = 34.5049;
    double a3 = -3.5091;
    double a4 = 0.183166;
    double a5 = -0.00513554;
    double a6 = 0.0000735464;
    double a7 = -4.22038e-7;

    double resultado = a0 + (a1 + b)* x + a2 * pow(x, 2) + a3 * pow(x, 3) + a4 * pow(x, 4) + a5 * pow(x, 5) + a6 * pow(x, 6) + a7 * pow(x, 7);
    return resultado; 
}

int decimal(char high, char low) {
    char hex[3] = {high, low, '\0'};
    return (int)strtol(hex, NULL, 16);
}

int main(){

    double b = 10;
    char mensagem[] = "48656C6C6F2C20776F726C6421";
    int i = 0;
    int x = 1;

    double resultado = fxb(x, b);
    printf("resuldado da formula: %lf\n", resultado);

    while (i < strlen(mensagem) && mensagem[i] != '\0'){

        printf("%c%c", mensagem[i], mensagem[i +1]);
        i += 2;
        x++;
    }
    printf("\n");


    return 0;
}