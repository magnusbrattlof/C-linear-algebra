#include "matrix.h"

float dot(matrix A, matrix B) {

    float C = 0;

    for (int i = 0; i <= 2; i++) {
        C += A.d[i][0] * B.d[i][0];
    }

    return C;
}

float* cross(matrix A, matrix B) {

    if (A.i && B.i == 3 ) {
        static float C[3];

        // A(11) * B()
        C[0] = A.d[1][0] * B.d[2][0] - A.d[2][0] * B.d[1][0];
        C[1] = A.d[0][0] * B.d[2][0] - A.d[2][0] * B.d[0][0];
        C[2] = A.d[0][0] * B.d[1][0] - A.d[1][0] * B.d[0][0];

        return C;
    }
    return 0;
}
