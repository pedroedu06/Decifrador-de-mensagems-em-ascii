#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
    float n1, n2, ppd, n3, eu;
    float resultadoFinal;
    int respostaN3, respostaEu;

    printf("qual foi a sua nota da n1?: ");
    scanf("%f", &n1);

    if (n1 > 4.5){
        printf("valor invalido\n");
        return 3;
    }

    printf("qual foi a sua nota da n2?: ");
    scanf("%f", &n2);

    if (n2 > 4.5){
        printf("valor invalido\n");
        return 3;
    }

    printf("qual foi sua nota no PPD?: ");
    scanf("%f", &ppd);

    if (ppd > 1){
        printf("valor invalido\n");
        return 3;
    }

    printf("Voce teve que fazer a n3?\n1 para sim\n0 para nao\n");
    scanf("%d", &respostaN3);

    if (respostaN3 == 1){
        printf("qual foi sua nota?: ");
        scanf("%f", &n3);
    }
    if (n3 > 4.5){
        printf("valor invalido\n");
        return 3;
    }

    printf("Voce fez a prova EU? \n1 para sim\n0 para nao\n");
    scanf("%d", &respostaEu);
    
    if (respostaEu == 1){
        printf("qual foi sua nota?: ");
        scanf("%f", &eu);
    }

    if(eu > 1){
        printf("valor invalido\n");
        return 3;
    }

    if (n1 < n3){
        n1 = n3;
    }

    if (n2 < n3){
        n2 = n3;
    }

    resultadoFinal = n1 + n2 + ppd + eu;

    printf("sua nota final e %f\n", resultadoFinal);

    if (resultadoFinal >= 7){
        printf("aprovado!");
    } else {
        printf("reprovado!");
    }

    return 0;
}