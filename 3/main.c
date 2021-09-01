#include <stdio.h>

int main() {
    int numbers[10], inverse[10], i;
    for(i = 0; i < 10; i++){
        printf("Insira o %d° valor: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("[");
    for(i = 9; i >= 0; i--) {
        if(i == 0){
            printf("%d]", numbers[i]);
        }else {
            printf("%d, ", numbers[i]);
        }
    }
    return 0;
}
