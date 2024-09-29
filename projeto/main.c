#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include "funcao.h"


    
int conversorDecimal(char high, char low) {
    char hex[3] = {high, low, '\0'};
    return (int)strtol(hex, NULL, 16); //codigo que coverte hexadecimal para decimal//
}

int main(){
    
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

     while(i < strlen(mensagem) - 1){
    
        if(!((mensagem[i] >= '0' && mensagem[i] <= '9') || (mensagem[i] >= 'A' && mensagem[i] <= 'F') || (mensagem[i] >= 'a' && mensagem[i] <= 'f'))){
            printf("caracteres invalidos"); //valor que verifica cada caracter para hexadecimal na mensagem
            break;
        }

        int valorDecimal = conversorDecimal(mensagem[i], mensagem[i + 1]);


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
