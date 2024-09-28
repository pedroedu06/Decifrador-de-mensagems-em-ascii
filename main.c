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
    int i = 0;
    char mensagem[51];
    printf("quantas mensagens foram captadas?: ");
    scanf("%lf", &b);
    getchar();
    printf("insira a mensagem codificada(limite maximo 50 caracteres): ");
    fgets(mensagem, sizeof(mensagem), stdin);
    
    mensagem[strcspn(mensagem, "\n")] = 0;

    if (strlen(mensagem) % 2 != 0){
        printf("a mensagem deve ter um numero par de caracteres!");
        return 0;
    }

    double resultado = fxb(x, b);
    printf("resultdado funcao: %lf\n", resultado);

    while(i < strlen(mensagem) ){
    
        if(!((mensagem[i] >= '0' && mensagem[i] <= '9') || (mensagem[i] >= 'A' && mensagem[i] <= 'F') || (mensagem[i] >= 'a' && mensagem[i] <= 'f'))){
            printf("caracteres invalidos");
            break;
        }

        int valorDecimal = decimal(mensagem[i], mensagem[i + 1]);

        if (valorDecimal == 0){
            break;
        }

        if(valorDecimal >= 32 && valorDecimal <= 126){
            printf("%c", valorDecimal);
        } else{
            printf("caracter nao imprimivel: %d\n", valorDecimal);
        }

        i += 2;
        x++;
    }

    printf("\n");

    return 0;
}

