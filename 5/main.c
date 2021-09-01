#include <stdio.h>

int main() {
    int N = 10;
    int matrix[N][N], i, j;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("Insira o %d° valor da %dª linha da matriz: ", j + 1, i + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matriz: \n");
    for(i = 0; i < N; i++){
        printf("[");
        for(j = 0; j < N; j++){
            if(j == (N - 1)){
                printf("%d]\n", matrix[i][j]);
            }else{
                printf("%d, ", matrix[i][j]);
            }
        }
    }

    return 0;
}
