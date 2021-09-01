#include <stdio.h>

int main() {
    int i, in_range = 0, n = 200;
    float numbers[n], ki, kj;

    printf("Insira os valores de início e fim do intervalo desejado, respectivamente, abaixo: \n");
    scanf("%f", &ki);
    scanf("%f", &kj);
    for(i = 0; i < n; i++){
        printf("\nInsira o %d° valor abaixo: \n", i + 1);
        scanf("%f", &numbers[i]);
        if(ki < numbers[i] && numbers[i] < kj){
            in_range++;
        }
    }

    printf("São %d números dentro do intervalo", in_range);

    return 0;
}
