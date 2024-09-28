#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include "funcao.h"


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
            printf("caracteres invalidos");
            break;
        }

        int valorDecimal = decimal(mensagem[i], mensagem[i + 1]);

        printf("valor do decimal: %d\n", valorDecimal);
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
