#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

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

int main (){

    int x = 1;
    double b = 0;
    int i;
    char mensagem[] = "48656C6C6F2C20776F726C6421";

    if (strlen(mensagem) % 2 != 0){
        printf("tem numeros pares");
        return 0;
    }

    double resultado = fxb(x, b);
    printf("resultdado funcao: %lf\n", resultado);

    while(i < strlen(mensagem) && mensagem[i] != '\0' ){
    
        if(!((mensagem[i] >= '0' && mensagem[i] <= '9') || (mensagem[i] >= 'A' && mensagem[i] <= 'F'))){
            printf("caracteres invalidos");
            break;
        }

        int valorDecimal = decimal(mensagem[i], mensagem[i + 1]);

        if (valorDecimal == 0){
            break;
        }
        
        printf("%c", valorDecimal);
        i+=2;
        x++;
    }

    printf("\n");

    return 0;
}

