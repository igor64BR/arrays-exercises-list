#include <stdio.h>

int main() {
    int equals_30 = 0, i, n = 200;
    float values[n];

    for(i = 0; i < n; i++){
        printf("Por favor insira o %do valor: ", i + 1);
        scanf("%f", &values[i]);
        if(values[i] == 30){
            equals_30++;
        }
    }
    if(equals_30 != 0){
        printf("Posições dos valores iguais a 30: \n");
        for(i = 0; i < n; i++){
            if(values[i] == 30){
                printf("%d\n", i);
            }
        }
    }else{
        printf("Não há valores iguais a 30");
    }
    return 0;
}
