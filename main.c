#include <stdio.h>
#include <math.h>

float vdot(float A[3][3], float B[3][3]);

int main() {

    float A[1][3] = {
        {2, 4, 9}
    };

    float B[1][3] = {
        {1, 2, 3}
    };


    printf("%.2f\n", vdot(A, B));

    return 0;

}


float vdot(float A[1][3], float B[1][3]) {

    float c;

    for (int j = 0; j <= 2; j++) {
        c += A[0][j] * B[0][j];
    }

    return c;
}
