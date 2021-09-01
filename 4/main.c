#include <stdio.h>

int main() {
    int n = 4, vetor1[n], vetor2[n], sum[n], i;

    for(i= 0; i < n; i++){
        printf("Insira o %d° valor para o vetor 1: ", i + 1);
        scanf("%d", &vetor1[i]);
        printf("Insira o %d° valor para o vetor 2: ", i + 1);
        scanf("%d", &vetor2[i]);
        sum[i] = vetor1[i] + vetor2[i];
    }
    printf("Somas: [");
    for(i= 0; i < n; i++){
        if(i == (n - 1)){
            printf("%d]", sum[i]);
        }else{
            printf("%d, ", sum[i]);
        }
    }
    return 0;
}
