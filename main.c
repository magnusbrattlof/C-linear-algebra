#include <stdio.h>
#include <math.h>


int main() {

    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int B[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int C[3][3];

    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i <= 2; i++) {
        printf("\n");
        for (int j = 0; j <= 2; j++) {
            printf("%d ", C[i][j]);
        }
    }


    return 0;

}
